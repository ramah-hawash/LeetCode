class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> students;
        for(int i=0;i<nums.size();i++){
            if(students[nums[i]])students[nums[i]]++;
            else students[nums[i]]=1;

        }//
 for (auto pair : students) {
    if (pair.second >=2) return true;
    
}
return false;
    
};
};