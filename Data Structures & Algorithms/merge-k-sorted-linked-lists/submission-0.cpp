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
struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;  // Min-heap comparison
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,Compare>pq;
        for(auto node:lists)
        {
            if(node)
            pq.push(node);
        }
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        while(!pq.empty())
        {
            ListNode* smallest=pq.top();
            tail->next=smallest;
            tail=tail->next;
            pq.pop();

            if(smallest->next)
            pq.push(smallest->next);
        }
    
    return dummy->next;
    }
};
