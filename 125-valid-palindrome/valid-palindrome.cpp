class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            // تخطي الأحرف غير الأبجدية الرقمية على الجهة اليسرى
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // تخطي الأحرف غير الأبجدية الرقمية على الجهة اليمنى
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // تحويل الأحرف إلى صغيرة ومقارنتها
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            // تحديث المؤشرات
            left++;
            right--;
        }

        return true;
    }
};
