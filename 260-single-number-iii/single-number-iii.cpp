class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long a=0;
        for(int i=0;i<nums.size();i++)
        {
            a=a^nums[i];
        }
        long long rightmost=a&-a;
        int b1=0,b2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&rightmost)
                b1=b1^nums[i];
            else
                b2=b2^nums[i];
        }
        return {b1,b2};
    }
};