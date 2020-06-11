//Given a sorted array and a target value, return the index if the target is found. If not, 
//return the index where it would be if it were inserted in order.

//You may assume no duplicates in the array.

//Example 1:
//Input: [1,3,5,6], 5
//Output: 2

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    //    vector<int>::iterator it;
    //    it=find(nums.begin(),nums.end(),target);
    //    if(it!=nums.end())
    //        return it-nums.begin();
    //        for(int i=0;i<nums.size()-1;i++)
    //        {
    //            if(nums[i]<target&&target<nums[i+1])
    //                return i;
    //        }
    // }
        for(int i=0;i<nums.size();i++)
        {
            if(target<=nums[i])
                return i;
        }
        return nums.size();
    }
};
