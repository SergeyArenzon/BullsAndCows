//
// Created by sergey on 4/14/19.
//

#ifndef C_AS4_GUESSER_HPP
#define C_AS4_GUESSER_HPP
#pragma once
#endif //C_AS4_GUESSER_HPP
using namespace std;
#include <string>
typedef unsigned int uint;
namespace bullpgia{

class Guesser{

public:

    uint length=0;
    virtual string guess()=0;
    virtual void startNewGame(uint uint){}
    virtual void learn(const string& s){}

    string _guess;
};


};