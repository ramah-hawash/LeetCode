class Solution {
    #include <algorithm> // تحتوي على دالة sort

public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> dou;
        int j=nums.size()-1;
        int k=0;
        int temp=0;

        for(int i=0;i<nums.size();i++){
            dou.push_back(nums[i] * nums[i]);


        }//
            sort(dou.begin(), dou.end()); // فرز تصاعدي (من الصغير للكبير)

       
        return dou;
    }
};