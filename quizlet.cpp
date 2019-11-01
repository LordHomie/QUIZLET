#include "quizlet.h"

void quizlet::AddWord() {
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

void quizlet::ReadAllWords() {

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
    while (getline(fin, line)) {
        std::cout << line << std::endl;
        // used for breaking words
        stringstream s(line);

    }





//    for (auto word : words) {
//        std::cout << word << std::endl;
//    }
}
