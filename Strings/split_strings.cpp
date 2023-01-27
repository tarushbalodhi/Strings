class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        int ch;
        string aph = "", num = "", spec = "";
        vector<string> vs;
        for(int i = 0 ; i < S.length(); i++){
            ch = int(S[i]);
            if(ch >= 65 && ch<= 90 || ch >= 97 && ch <= 122){
                aph += ch;
            }
            else if (ch >= 48  && ch <= 57){
                num += ch;
            }
            else spec += ch;
        }
        vs.push_back(aph);
        vs.push_back(num);
        vs.push_back(spec);
        return vs;
    }
   
};
