bool isSubSequence(string A, string B) 
    {
        // initialize two pointer with 0 
        // if char of A[i] = B[i] increment i
        // else increment j;
        // if i == p
        int p = A.size(), q = B.size();
        int i = 0, j = 0;  // two pointers 
        while(i < p && j < q){
            if(A[i] == B[j]){
                i++;
            }
            j++;
        }
        return i == p; // if i reaches till end that means we have found all the char of S1 in S2
    }
