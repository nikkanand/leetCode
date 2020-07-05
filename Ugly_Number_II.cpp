//Write a program to find the n-th ugly number.

//Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 

//Example:

//Input: n = 10
//Output: 12
//Explanation: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.
//Note:  

//1 is typically treated as an ugly number.
 // n does not exceed 1690.





class Solution {
public:
    int nthUglyNumber(int n) {
        //   if(n <= 0) return false; // get rid of corner cases 
        // if(n == 1) return true;
        // vector<int>ugly(n);
        // // for(int i=0;i<=n;i++)
        // //     ugly[i]=1;
        // ugly[0]=1;
        // int i2=0,i3=0,i5=0;
        // int nugly_2=2,nugly_3=3,nugly_5=5;
        // int nextUgly=1;
        // for(int i=0;i<n;i++)
        // {
        //     nextUgly=min(nugly_2,min(nugly_3,nugly_5));
        //     ugly[i]=nextUgly;
        //     if(nextUgly==nugly_2)
        //     {
        //         i2=i2+1;
        //         nugly_2=ugly[i2]*2;
        //     }
        //     if(nextUgly==nugly_3)
        //     {
        //         i3=i3+1;
        //         nugly_3=ugly[i3]*3;
        //     }
        //     if(nextUgly==nugly_5)
        //     {
        //         i5=i5+1;
        //         nugly_5=ugly[i5]*5;
        //     }
        // }
        // return nextUgly;
        
        
          if(n <= 0) return false; // get rid of corner cases 
        if(n == 1) return true; // base case
        int t2 = 0, t3 = 0, t5 = 0; //pointers for 2, 3, 5
        vector<int> k(n);
        k[0] = 1;
        for(int i  = 1; i < n ; i ++)
        {
            k[i] = min(k[t2]*2,min(k[t3]*3,k[t5]*5));
            if(k[i] == k[t2]*2) t2++; 
            if(k[i] == k[t3]*3) t3++;
            if(k[i] == k[t5]*5) t5++;
        }
        return k[n-1];
    }
};
