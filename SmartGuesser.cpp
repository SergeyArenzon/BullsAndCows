//
// Created by sergey on 4/19/19.
//
#include <sstream>
#include "SmartGuesser.hpp"
#include <iostream>
using namespace bullpgia;
using namespace std;
static bool found;

// Function to find all Permutations of a given string str[i..n-1]
// containing all distinct characters
void permutations(string str, int i, int n, vector<string> &vec)
{
//cout<<"n"<<n<<endl;
    // base condition
    if (i == n - 1)
    {
        vec.push_back(str);
       // cout<<"str: "<<str<<endl;
        return;
    }

    // process each character of the remaining string
    for (int j = i; j < n; j++)
    {
        // swap character at index i with current character
        swap(str[i], str[j]);        // STL swap() used

        // recurse for string [i+1, n-1]
        permutations(str, i + 1, n,vec);

        // backtrack (restore the string to its original state)
        swap(str[i], str[j]);
    }
}


bullpgia::SmartGuesser::~SmartGuesser() {

}

void bullpgia::SmartGuesser::learn(const string &s) {
    string guess="";
    if(_counter<9) {
        vector<int> result;
        stringstream ss(s);
        string item;
        while (getline(ss, item, ',')) {
            result.push_back(stoi(item));
        }
        help[_counter] = result.at(0);
        _counter++;
        for (int i = 0; i < _guess.length(); ++i) {
            guess += to_string(_counter);
        }

        _guess=guess;

    }else if(_counter==9){

        vector<int> result;
        stringstream ss(s);
        string item;
        while (getline(ss, item, ',')) {
            result.push_back(stoi(item));
        }
        help[_counter] = result.at(0);
        _counter++;

    }
    else if(found == false){
            guess="";
            for (int i = 0; i < 10; ++i) {
                while(help[i]!=0){
                    guess+=to_string(i);
                    help[i]--;
                }
        }
        found=true;
        allPermu.push_back(guess);
        permutations(guess,0,guess.length(),allPermu);


    }



    }

string bullpgia::SmartGuesser::guess(){

    string guess="";
    if(found==true&&allPermu.size()!=0){
        guess=allPermu.at(0);
        allPermu.erase(allPermu.begin());
        //cout<<"guess"<<guess<<endl;
       _guess=guess;
        //cout<<"_guess: "<<_guess<<endl;
        return _guess;
    }
    else{
       // cout<<"_guess: "<<_guess<<endl;
        return _guess;
    }

}
void bullpgia::SmartGuesser::startNewGame(uint len) {
    _guess="";
    vector<string> vec;
    allPermu=vec;
    found=false;
    help=new int[10];
    string guess="";
    _counter=0;
    for (int i = 0; i <len ; ++i) {
        guess=guess+"0";
    }
    _guess=guess;
}









