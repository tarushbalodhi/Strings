 string reverseWords(string S) 
    { 
        string newS = "";
        stack <string> st;
        string temp = "";
        
        for(int i = 0; i < S.size(); i++){
            if(S[i] != '.'){
               temp += S[i];
            }
            else {
                st.push(temp);
                temp = "";
            }
        }
        st.push(temp);  // for the last word "much"
        while(!st.empty()){
            temp = st.top();
            newS += temp + ".";
            st.pop();
        }
        newS.pop_back();  // for the last char  .
        return newS;
    } 
