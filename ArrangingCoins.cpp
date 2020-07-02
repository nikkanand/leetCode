//You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.
//Given n, find the total number of full staircase rows that can be formed.
//n is a non-negative integer and fits within the range of a 32-bit signed integer.

//EXAMPLE--------
//n = 5
//The coins can form the following rows:
//¤
//¤ ¤
//¤ ¤
//Because the 3rd row is incomplete, we return 2.

// x = sqrt(2 * n + 1/4) - 1/2 the formulae ..................


class Solution {
public:
    int arrangeCoins(int n) {
        return sqrt(2 * (long)n + 1 / 4.0) - 1 / 2.0;
    }
};

