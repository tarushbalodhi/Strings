        string UncommonChars(string A, string B)
        {
            // if(A.compare(B) == 0){
            //     return "-1";
            // }
            
            int a[26] = {0};
            int b[26] = {0};
            
            for(int i = 0 ; i < A.size(); i++){
                a[A[i] - 'a'] = 1;
            }
            
            for(int i = 0 ; i < B.size(); i++){
                b[B[i] - 'a'] = 1;
            }
            
            string ans = "";
            for(int i = 0; i < 26; i++){
                if( (a[i] == 0 && b[i] == 1) || (a[i] == 1  && b[i] == 0) ){
                    ans += char(i+'a');
                }
            }
            
           if(ans.empty()) return "-1";
            return ans;
        }
            
