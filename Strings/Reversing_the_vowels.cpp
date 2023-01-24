string modify (string s)
        {
            // Brute force 2 iteration 
            string raw = "";
            int l ;
            
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){
                raw += s[i];
            }
        }
        
        l = raw.length()-1;
        
        for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){
             s[i] = raw[l--];
        }
    }
          
          return s;
        }
