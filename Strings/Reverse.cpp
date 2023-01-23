
#include <iostream>
using namespace std;

int main() {
    string s  = "Confidence";
    string rev = "";
    int idx = 0;
    for(int i = s.length()-1; i >= 0; i--){
        rev += s[i];
 
    }
    cout << rev;
    return 0;
}
