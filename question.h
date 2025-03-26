#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <vector>
using namespace std;

struct Question {
    string text;
    vector<string> options;
    int correct;
};

void askQuestion(Question q, int& score);

#endif