#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // لإنشاء خريطة لتخزين العناصر
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // القيمة المفقودة التي تحتاجها
            // التحقق مما إذا كانت القيمة موجودة في الخريطة
            if (numMap.find(complement) != numMap.end()) {
                result.push_back(numMap[complement]); // إضافة الفهرس
                result.push_back(i); // إضافة فهرس العنصر الحالي
                return result; // إرجاع النتيجة
            }
            // إضافة العنصر الحالي إلى الخريطة
            numMap[nums[i]] = i;
        }
        
        return result; // إرجاع النتيجة الفارغة في حالة عدم وجود حل
    }
};
