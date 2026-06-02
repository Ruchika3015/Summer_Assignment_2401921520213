class Solution {
public:
<<<<<<< HEAD
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[index])
            {
                index++;
                nums[index]=nums[i];
            }
        }
        return index+1;
=======
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if (nums[i]+nums[j]==target)
                return {i,j};
            }
        }
        return {};
>>>>>>> 8b1990ac929069bb32ef9f8ca91729cae4fd4327
    }
};
