string firstRepChar(string s)
{
    // unordered_set<char> mc;
    string ans = "";
    // for(int i = 0; i < s.length(); i++){
    //     char c = s[i];
    //     if(mc.find(c) != mc.end()){
    //         ans += c;
    //         return ans;
    //     }
    //     else mc.insert(c);
    // }
    map <char, int> mc;
    for(int i = 0 ; i < s.size(); i++){
        mc[s[i]]++;
        if(mc[s[i]] == 2){
            ans += s[i];
            return ans;
        }
    }
    return "-1";
}
