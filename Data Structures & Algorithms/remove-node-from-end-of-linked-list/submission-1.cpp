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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        int r=c-n-1;
        temp=head;
        if((c-n)==0)
        {
            if(head->next==nullptr)
            {
                head=nullptr;
                return head;
            }
            else
            {
                head=head->next;
                return head;
            }
        }
        while(r--)
        {
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete del;
        return head; 
    }
};
