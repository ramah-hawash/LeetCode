class Solution {
public:
    bool isValid(string s) {
            stack<char> st;
            for (int i = 0; i < s.size(); i++) {
            // إذا كان الحرف قوسًا مفتوحًا، نضيفه إلى المكدسة
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            // إذا كان الحرف قوسًا مغلقًا
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                // تحقق إذا كانت المكدسة فارغة
                if (st.empty()) return false;
                
                // التحقق من مطابقة الأقواس
                if ((s[i] == ')' && st.top() == '(') ||
                    (s[i] == '}' && st.top() == '{') ||
                    (s[i] == ']' && st.top() == '[')) {
                    st.pop(); // إزالة القوس المفتوح المطابق
                } else {
                    return false; // الأقواس غير متطابقة
                }
            }
        }
        
        // التحقق إذا كانت المكدسة فارغة في النهاية
        return st.empty();
    }
};
