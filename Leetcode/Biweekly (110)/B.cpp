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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p = head;
        while (p->next != nullptr) {
            int a = p->val;
            int b = p->next->val;

            int ans = __gcd(a, b);

            ListNode *new_node = new ListNode();
            new_node->val = ans;
            new_node->next = p->next;
            p->next = new_node;
            p = new_node->next;
        }

        return head;
    }
};