int minValue(string S, int k)
	{
	    
	   // Algo :
	   // 1. count each char freq
	   // 2. store the freq in priority_queue;
	   // 3. remove the freq k times   (from the highest freq)
	   // 4. now empty the prior_que while squaring 
	    
	    // Base case
	    if(k >= S.length()) return 0;
	    int freq[26] =  {0};  // step 1
	    for(int i = 0;  i < S.length(); i++){
	        freq[S[i]-'a']++;
	    }
	    priority_queue<int> q;
	   
	    for(int i = 0; i < 26; i++){
	       q.push(freq[i]);
	    }
	    
	    while(k--){          
	       int temp = q.top();
	       q.pop();
	       temp -= 1;
	       q.push(temp);
	    }
	    
	      int sum = 0; 
	    while(!q.empty()){
	        int t  = q.top();
	        sum += t*t;
	        q.pop();
	    }
	    
	    return sum;
	}
