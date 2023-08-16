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

    /* Getting runtime error due to overflow as no of nodes==10^4. And there are 10 numbers to be filled at
       each node. Therefore the sum in worst case will be 9^10^4 >>> 10^18 (which is the max limit of long long)

    */


    ListNode* doubleIt(ListNode* head) {
        ListNode* ptr = head;
        if (ptr->val == 0)
            return head;
        else {
            long long num = 0;
            while (ptr != nullptr) {
                int a = ptr->val;
                num = num * 10 + a;
                ptr = ptr->next;
            }

            num *= 2;
            vector<int>digit;
            while (num != 0) {
                int ld = num % 10;
                digit.push_back(ld);
                num /= 10;
            }

            ListNode *new_node = new ListNode();
            ListNode *dummyhead = new_node;
            new_node->val = digit[digit.size() - 1];
            for (int i = digit.size() - 2; i >= 0; i--) {
                ListNode *node = new ListNode();
                node->val = digit[i];
                new_node->next = node;
                new_node = node;
            }

            new_node->next = nullptr;

            return dummyhead;
        }
    }
};