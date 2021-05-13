class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1)
        {
            if(nums[0] == target)
                return 0;
            else
                return -1;
        }
        int i = nums.size()-1;
        while(i -1 >=0 && nums[i] > nums[i-1])
            i--;
        if(nums[nums.size()-1] < target)
        {
            auto pos = lower_bound(nums.begin() , nums.begin() + i ,target);
            if(nums[pos - nums.begin()] == target)
                    return pos - nums.begin();
        }
        else
        {
            auto pos = lower_bound(nums.begin()+i,nums.end() ,target);
            if(nums[pos - nums.begin()] == target)
                return pos - nums.begin();
        }
        return -1;
    }
};