//
// Created by sergey on 4/14/19.
//

#include <iostream>
#import "Chooser.hpp"


string bullpgia::Chooser::choose(uint length) {
    string choice;
    for (int i = 0; i < length; ++i) {
        int iRand = (rand() % 9) + 1;
            string num =to_string(iRand);
            choice=choice+num;
    }

    return choice;
}

