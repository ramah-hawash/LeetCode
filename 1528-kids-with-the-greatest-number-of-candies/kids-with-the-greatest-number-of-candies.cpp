class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max=0;
        for (int i=0;i<candies.size();i++){
if(max<candies[i])max=candies[i];
        }///max
        cout<<max;
    
    for(int j=0;j<candies.size();j++){
        if(candies[j]+extraCandies>=max)result.push_back(true);
        else{
            result.push_back(false);
        }
    }
        return result;

    }
};