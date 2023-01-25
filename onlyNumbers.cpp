	string removeCharacters(string S) 
	{
	    int c;
	    string res = "";
	    for(int i = 0; i < S.length(); i++){
	        c = int(S[i]);
	        if((c >= 48) && (c <= 57)){
	            res +=  S[i];
	        }
	    }
	    return res;
	}
