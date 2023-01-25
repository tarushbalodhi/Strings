	string removeVowels(string S) 
	{
        for(int i = 0; i < S.length(); i++){
            if(S[i] == 'a' ||S[i] == 'e' ||S[i] == 'i' ||S[i] == 'o' ||S[i] == 'u'){
                S[i] = '\0';
            }
        }
        return S;
	}
