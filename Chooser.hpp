//
// Created by sergey on 4/14/19.
//

#ifndef C_AS4_CHOOSER_HPP
#define C_AS4_CHOOSER_HPP
using namespace std;
#include <string>
typedef unsigned int uint;

namespace bullpgia{

    class Chooser{
    public:
        string _guess;
        virtual string choose(uint length)=0;



    };


}
#endif //C_AS4_CHOOSER_HPP