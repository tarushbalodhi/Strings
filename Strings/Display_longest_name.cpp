class Solution{
    public:
    string longest(string names[], int n)
    {
        int ans = 0;
        for(int i = 0; i < n ;i++){
            if(names[i].length() > names[ans].length())
              {
                  ans = i;
              }
           }
        return names[ans];
    }
};
