//Suppose you have a random list of people standing in a queue. Each person is described by a pair of integers (h, k), 
//where h is the height of the person and k is the number of people in front of this person who have a height greater than
//or equal to h. Write an algorithm to reconstruct the queue.

//Example
//Input:
//[[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]
//Output:
//[[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]

bool compare(vector<int> x, vector<int> y)
{
    if(x[0] == y[0])return x[1] > y[1];
      return x[0] < y[0];
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),compare);
        vector<vector<int>> result;
        for(int i=people.size()-1;i>=0;i--)
        {
            result.insert(result.begin()+people[i][1],people[i]);
        }
        return result;
    }
};
