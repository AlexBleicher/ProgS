#include <iostream>
#include <ctype.h>
using namespace std;

string parseInteger(string tokenString){
    bool encounteredNotInteger = false;
    for(std::string::iterator it = tokenString.begin(); it != tokenString.end(); ++it){
       if(!isdigit(*it)) {
           throw std::invalid_argument("not an integerstring");
       }
    }
    return "integer("+tokenString+")";
}

int main(){
    string input;
    cout << "Bitte geben Sie Ihre zu verarbeitenden Tokens ein: ";
    cin >> input;
    try {
        string integer = parseInteger(input);
        cout << integer;
    }
    catch(const std::invalid_argument& e){
        cout << "That was not an integer!" <<endl;
    }
    return 0;
}