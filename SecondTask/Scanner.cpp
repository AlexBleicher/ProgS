#include <iostream>

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
    if(integerparse == "Not an integer"){
        cout << "Hier!" << std::endl;
        string idparse = parseLetter(input);
        cout << idparse;
    }
    else {
        cout << integerparse << endl;
    }
    return 0;
}