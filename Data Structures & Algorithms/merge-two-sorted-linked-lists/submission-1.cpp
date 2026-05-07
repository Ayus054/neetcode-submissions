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
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        
        if(!list1) return list2;
        if(!list2) return list1;

        while(head1 && head2)
        {
            if(head1->val<=head2->val)
            {
                curr->next=head1;
                head1=head1->next;
            }
            else{
                curr->next=head2;
                head2=head2->next;
            }
            curr=curr->next;
        }
        curr->next=head1?head1:head2;

        return dummy->next;
    }
};
