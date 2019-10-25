#include <string>
#include <iostream>
#include <vector>
#include<fstream>
#include <sstream>
#include<cstdlib>
using namespace std;

class Quizlet {
private:
    std::string filename;
    std::vector<std::string> words;

public:
    Quizlet(std::string filename) : filename(filename) {}

    void AddWord();
    void ReadAllWords();
};

void Quizlet::AddWord() {
    std::cout << "Write a word and its translation separated by a space:" << std::endl;
    std::string word;
    std::string translation;
    std::cin >> word >> translation;

    words.push_back(word + " " + translation);

   // file pointer
    fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("words.csv",ios::out | ios::app);
    // Insert the data to file
    fout <<word<<","<<translation<<endl;

    std::cout << "Saved new card: " << word << "/" << translation << std::endl;
}

void Quizlet::ReadAllWords() {

    // File pointer
    fstream fin;

    // Open an existing file
    fin.open("words.csv", ios::in);




    // Read the Data from the file
    // as String Vector
    vector <string> row;
    string line, word, temp;

    row.clear();

    // read an entire row and
    // store it in a string variable 'line'
    getline(fin, line);

    // used for breaking words
    stringstream s(line);



    for (auto word : words) {
        std::cout << word << std::endl;
    }
}

int main() {
    auto quizlet = Quizlet("words.csv");
    while (true) {
        std::string command;
        std::cin >> command;

        if (command == "add") {
            quizlet.AddWord();
        } else if (command == "read") {
            quizlet.ReadAllWords();
        } else {
            return 0;
        }
    }
}

