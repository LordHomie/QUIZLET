#ifndef QUIZLET_H
#define QUIZLET_H

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
    std::vector<std::string> lines;

public:
    void AddWord(std::string, std::string);
    vector<string> ReadAllWords();
    void ReadAllWords1();
    void DeleteWord(std::string);
    string showline(std::string);
};


#endif // QUIZLET_H
