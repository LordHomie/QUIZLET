#ifndef QUIZLET_H
#define QUIZLET_H

#include <string>
#include <iostream>
#include <vector>
#include<fstream>
#include <sstream>
#include<cstdlib>
using namespace std;

class quizlet {
private:
    std::string filename;
    std::vector<std::string> words;

public:
    quizlet(std::string filename) : filename(filename) {}

    void AddWord();
    void ReadAllWords();
};



#endif // QUIZLET_H

