//
// Created by sergey on 4/19/19.
//
#include <sstream>
#include "SmartGuesser.hpp"
#include <iostream>
using namespace bullpgia;




void bullpgia::SmartGuesser::learn(const string &s) {
//
//    stringstream test(s);
//    std::vector<std::string> seglist;
//    string segment;
//    while(std::getline(test, segment, ','))
//    {
//        seglist.push_back(segment);
//    }
//
//    string bulimNum =seglist.at(0);
//    string pgiotNum =seglist.at(1);
//    string bulAndPgia =seglist.at(2);
//    string pgiotArr =seglist.at(3);
//
//    cout<<"bulimNum: "<<bulimNum<<endl;
//    cout<<"pgiotNum: "<<pgiotNum<<endl;
//    cout<<"bulAndPgia: "<<bulAndPgia<<endl;
//    cout<<"pgiotArr: "<<pgiotArr<<endl;
//    cout<<"_guess: "<<_guess<<endl;


}
string bullpgia::SmartGuesser::guess(){

    return _guess;

}
void bullpgia::SmartGuesser::startNewGame(uint uint) {
    string guess;
    for (int i = 0; i < uint ; i++) {
       string num= to_string(i);
        guess=guess+num;

    }
_guess=guess;
}
