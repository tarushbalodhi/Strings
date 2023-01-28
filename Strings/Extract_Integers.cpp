vector<string> extractIntegerWords(string s)
{
    vector<string> vs;
    
    for(int i = 0;  i < s.length(); i++){
        string num = "";
        
        if(s[i] >= '0' && s[i] <= '9'){
            while( isdigit(s[i]) ){
            num += s[i];
            i++;
            }
         vs.push_back(num);
        }

    }
    return vs;
}
