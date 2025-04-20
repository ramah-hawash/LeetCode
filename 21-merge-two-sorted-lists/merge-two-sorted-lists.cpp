/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // عقدة وهمية لتسهيل الربط
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // طالما فيه عناصر في القائمتين
        while (list1 && list2) {
            if (list1->val < list2->val) {
                tail->next = list1; // اربط الأصغر
                list1 = list1->next; // تقدم في القائمة الأولى
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // ننتقل للنود المضافة
        }

        // لما تخلص واحدة منهم، اربط الباقي من الثانية
        if (list1) tail->next = list1;
        else tail->next = list2;

        return dummy.next; // الرأس الحقيقي للنتيجة
    }
};
