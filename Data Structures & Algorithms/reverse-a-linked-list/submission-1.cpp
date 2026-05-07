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
    ListNode* reverseList(ListNode* head) {
        ListNode* CN=head;
        ListNode* PN=NULL;
        ListNode* NN=NULL;
        while(CN)
        {
            NN=CN->next;
            CN->next=PN;
            PN=CN;
            CN=NN;
        }
        return PN;
    }
};
