//class Solution {
//public:
  // Given a string s and a string t, check if s is subsequence of t.

//A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters
//without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).

//Follow up:
//If there are lots of incoming S, say S1, S2, ... , Sk where k >= 1B, and you want to check one by one to see if T has its subsequence. 
//In this scenario, how would you change your code?
   
   bool isSubsequence(string s, string t) {
        // int k=0,count=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     for(int j=k;j<t.size();j++)
        //     {
        //         if(s[i]==t[j])
        //         {  count++;
        //          cout<<t[i];
        //          k=j+1;}
        //     }
        // }
        // if(count==s.size())
        //     return true;
        // else
        //     return false;
        int n=s.size();
        int m=t.size();
        int j=0;
        for(int i=0;i<m&&j<n;i++)
        {
            if(t[i]==s[j])
                j++;
        }
        if(j==n)
            return true;
        return false;
    }
};
