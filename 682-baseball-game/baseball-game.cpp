class Solution {
public:
bool isNumber(const string& s) {
    try {
        stoi(s); // نحاول نحول النص لرقم
        return true;
    } catch (...) {
        return false;
    }
}

    int calPoints(vector<string>& operations) {
        int sum =0;
        stack<string> words;   
          for(int i=0;i<operations.size();i++){
  if (isNumber(operations[i])) {
    words.push(operations[i]); // أو stoi(operations[i]) إذا بدك تدخله كرقم
}

        if(operations[i]=="C")words.pop();
        if(operations[i]=="D"){int num = stoi(words.top());     // نحول النص إلى int
num *= 2;                        // نضربه
words.push(to_string(num));      // نرجعه كنص
}
       if (operations[i] == "+") {
    
        int a = stoi(words.top()); 
        words.pop();
        int b = stoi(words.top()); 
        words.push(to_string(a));
        int result = a + b;
        
        words.push(to_string(result));
    
}
   

          }//for

          while (!words.empty()) {
            cout<<words.top()<<",";
    sum += stoi(words.top()); // تحويل string إلى int
    words.pop();              // حذف القيمة بعد ما تستخدمها
}
return sum;

    }
};