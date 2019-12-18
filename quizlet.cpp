#include "quizlet.h"

void Quizlet::AddWord(std::string word, std::string translation) {

   // file pointer
    fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("words.txt",ios::out | ios::app);
    // Insert the data to file
    fout <<word<<" "<<translation<<endl;

    std::cout << "Saved new card: " << word << "/" << translation << std::endl;

}


vector<string> Quizlet::ReadAllWords() {

    // File pointer
    fstream fin;

    // Open an existing file
    fin.open("words.txt", ios::in);

    // Read the Data from the file
    // as String Vector
    vector <string> rows;
    string line, word, temp;

    while (getline(fin, line)) {

        cout << line << std::endl;
        rows.push_back(line);
        stringstream s(line);

    }
    return rows;

}


void Quizlet::DeleteWord(std::string token) {

    string line;
    fstream fin;
    fstream fout;
    fin.open("words.txt", ios::in);
    fout.open("new.txt",ios::out | ios::app);

    vector <string> lines;
    while (getline(fin, line)) {


        if(line.find(token) == string::npos)  {
            //cout << line << endl;
            //cout<<"the line has been deleted!";
            fout << line << endl;

        }

    }
    fout.close();
    fin.close();

    remove("words.txt");
    rename("new.txt", "words.txt");
    cout << "\nChanges has Successfully been made...... Data Saved\n" << endl;

}

string Quizlet::showline(std::string token) {

    fstream fin;
    fstream fout;
    fin.open("words.txt", ios::in);
    string line;

    vector <string> lines;
    while (getline(fin, line)) {


        if(line.find(token) != string::npos)  {
            cout << line << endl;
            return line;

        }

    }
    fin.close();

    return "No such word available";

}
