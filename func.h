#ifndef PASSGEN_FUNC_H
#define PASSGEN_FUNC_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>


using namespace std;

string PasswordGenerator(int length, string &small, string &capitals, string &numbers, string &symbols){
    string result;
    string seed = small + capitals + numbers + symbols;
    result = seed;
    shuffle(result.begin(), result.end(), mt19937{random_device{}()});
    return  result.substr(0, length);
}

bool PasswordCheck(string pass, string &small, string &capitals, string &numbers, string &symbols){
    bool isContains = false;
    bool isContainsNum = false;
    bool isContainsSmall = false;
    bool isContainsCapitals = false;
    bool isContainsSymb = false;
        for (char symbol: numbers) {
            if (pass.find(symbol) != string::npos) {
                isContainsNum = true;
                break;
            }
        }
        for (char symbol: small) {
            if (pass.find(symbol) != string::npos) {
                isContainsSmall = true;
                break;
            }
        }
        for (char symbol: capitals) {
            if (pass.find(symbol) != string::npos) {
                isContainsCapitals = true;
                break;
            }
        }
        for (char symbol: symbols) {
            if (pass.find(symbol) != string::npos) {
                isContainsSymb = true;
                break;
            }
        }
        if (isContainsNum == true && isContainsSmall == true && isContainsCapitals == true && isContainsSymb == true) {
            isContains = true;
        }
    return isContains;
}

#endif //PASSGEN_FUNC_H
