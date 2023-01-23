#include <iostream>
using namespace std;

int main() {
    // string s  = "confidence is a choice";
    string str = "best version of yourself";
    str[0] = str[0] - ('a' - 'A');
    for(int i = 1; i < str.length(); i++){
        if(str[i-1] == ' '){
            // str[i] = str[i] - ('a' - 'A');  // using ASCII 
            str[i] = toupper(str[i]);
        }
    }
    cout << str;
    return 0;
}
