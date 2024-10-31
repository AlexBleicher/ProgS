#include <iostream>
#include <ctype.h>
using namespace std;

string parseInteger(const string& tokenString){
    for(char it : tokenString){
       if(!isdigit(it)) {
           return "Not an integer";
       }
    }
    return "integer("+tokenString+")";
}

string parseLetter(const string& tokenString){
    for(char it : tokenString){
        if(!isalpha(it)) {
            return "Not an letter";
        }
    }
    return "id("+tokenString+")";
}

int main(){
    string input;
    cout << "Bitte geben Sie Ihre zu verarbeitenden Tokens ein: ";
    cin >> input;
    string integerparse = parseInteger(input);

    return 0;
}