//
// Created by sergey on 4/14/19.
//

#include <iostream>
#import "Chooser.hpp"


string bullpgia::Chooser::choose(uint length) {
    string ch="";
    for (int i = 0; i < length; ++i) {
        ch+=to_string(rand()%9);
    }
    return ch;
}




