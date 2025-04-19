class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        
        // تنظيف السطر: نخلي فقط الأحرف والأرقام ونحولهم لصغار
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        // Two pointers
        int left = 0, right = cleaned.size() - 1;
        while (left < right) {
            if (cleaned[left] != cleaned[right]) return false;
            left++;
            right--;
        }

        return true;
    }
};
