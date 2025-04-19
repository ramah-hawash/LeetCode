class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st;
        int flag=0;
        for(int i=0;i<jewels.size();i++){
            st.insert(jewels[i]);

        }//for 
        for(int j=0;j<stones.size();j++){
            if(st.count(stones[j]))flag++;

        }
        return flag;

    }
};