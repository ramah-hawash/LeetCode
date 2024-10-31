class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> maps;
        for(int i=0;i<nums.size();i++){
            if(maps[nums[i]])return true;
            else maps[nums[i]]=true;

        }//for
        return false;
    }
};