class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool isJewel[128] = {false}; // ASCII table كافية لتغطي جميع الأحرف
        
        // نحدد الأحرف اللي تعتبر جواهر
        for (char j : jewels) {
            isJewel[j] = true;
        }

        int count = 0;
        // نحسب عدد الأحرف اللي موجودة بالحجر وبتكون جواهر
        for (char s : stones) {
            if (isJewel[s]) count++;
        }

        return count;
    }
};
