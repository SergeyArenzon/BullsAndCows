//
// Created by sergey on 4/14/19.
//

#include "calculate.hpp"
#include <string>
#include <iostream>
#include <vector>


using namespace std;


namespace bullpgia {
    vector<int> intToDigits(int number) {
        vector<int> v;
        while (number) {
            v.insert(v.begin(), number % 10);
            number /= 10;
        }
        return v;
    }

    string calculateBullAndPgia(string choice, string guess) {
        vector<int> aChoice, bGuess;
        aChoice = intToDigits(stoi(choice));
        bGuess = intToDigits(stoi(guess));
        string bulim = "";
        string pgiot = "";
        int bull = 0;
        int pgia = 0;
        for (int j = 0; j < choice.size(); ++j) {
            bulim=bulim+'O';

        }
        for (int i = 0; i <choice.size() ; i++) {
            if (choice.at(i)==guess.at(i)) {
                bulim.at(i)='X';
                bull++;
            }
        }

        for (int k = 0; k <choice.size() ; ++k) {
            if(bulim.at(k)=='X'){}
            else{
                for (int i = 0; i < choice.size(); ++i) {
                    if(bulim.at(i)=='X'){}
                    else{
                        if(choice.at(i)==guess.at(k)) {
                            pgia++;
                            pgiot=pgiot+guess.at(k);
                            break;
                        }


                    }

                }

           }

        }




        return to_string(bull)+','+to_string(pgia);
    }

}




//int main(){
//
//    cout<<bullpgia::calculateBullAndPgia("1110","0111")<<endl;
//
//    return 0;
//}