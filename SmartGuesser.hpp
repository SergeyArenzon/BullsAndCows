//
// Created by sergey on 4/19/19.
//

#ifndef C_AS4_SMARTGUESSER_HPP
#define C_AS4_SMARTGUESSER_HPP

#include "Guesser.hpp"
#include "calculate.hpp"
#include <stack>
namespace bullpgia{



class SmartGuesser : public bullpgia::Guesser {

    public:
    int* help;
    vector <string> allPermu;
    int _counter;


        ~SmartGuesser();
        void learn(const string &s) override;
        void startNewGame(uint uint) override;
        string guess() override;

    };

}


#endif //C_AS4_SMARTGUESSER_HPP
