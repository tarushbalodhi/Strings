
#include <iostream>
using namespace std;

int main() {
    string s  = "Confidence is a choice";
    int charcode ;
    for(int i = 0; i < s.length(); i++){
        charcode = int(s[i]);
        if(charcode == 122){
            s[i] == char(97);
        }
        else if(charcode == 90){
            s[i] == char(65);
        }
        else if(charcode >= 65 && charcode <= 90 || charcode >= 97 &&charcode <= 122){
            s[i] = char(charcode + 1);
        }
    }
    cout << s;
    return 0;
}
