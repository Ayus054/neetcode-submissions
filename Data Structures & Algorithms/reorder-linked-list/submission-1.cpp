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
    ListNode* reverse(ListNode* head){
        ListNode* PN=nullptr;
        ListNode* CN=head;
        ListNode* NN=nullptr;
        while(CN)
        {
            NN=CN->next;
            CN->next=PN;
            PN=CN;
            CN=NN;
        }
        return PN;
    }
    void merge(ListNode* l1,ListNode* l2){
        ListNode* temp1;
        ListNode* temp2;
        while(l1&&l2)
        {
            temp1=l1->next;
            temp2=l2->next;
            l1->next=l2;
            if(!temp1)break;
            l2->next=temp1;
            l1=temp1;
            l2=temp2;
        }
    }
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* s=head;
        ListNode* f=head;
        while(f->next && f->next->next)
        {
            s=s->next;
            f=f->next->next;
        }
        ListNode* l2=reverse(s->next);
        s->next=nullptr;
        merge(head,l2);
    }
};
