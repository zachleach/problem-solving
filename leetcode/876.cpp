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
    ListNode* middleNode(ListNode* head) {
        int n = 1;
        ListNode* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
            n++;
        }

        int m = n / 2;
        
        temp = head;
        for (int i = 0; i < m; i++) {
            temp = temp->next;
        }

        return temp;
    }
};
