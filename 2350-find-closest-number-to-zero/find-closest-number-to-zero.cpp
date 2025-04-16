class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        for(int i=0;i<nums.size();i++){
            if (abs(nums[i])<abs(closest))closest=nums[i];
            if(abs(nums[i])==abs(closest)){
                if(closest<nums[i])closest=nums[i];
            }

        }//for
        return closest;
    }
};