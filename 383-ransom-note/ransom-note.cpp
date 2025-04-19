class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            unordered_map<char, int> numCount;
            for(int i=0;i<magazine.length();i++){
                        numCount[magazine[i]]++;

            }
            for(int i=0;i<ransomNote.length();i++){
                if(numCount[ransomNote[i]])numCount[ransomNote[i]]--;
                else return false;
            }
            return true;




    }
};