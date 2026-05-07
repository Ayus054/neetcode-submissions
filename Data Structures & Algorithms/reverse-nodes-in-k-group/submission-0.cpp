class Solution {
public:
    // Helper function to reverse a linked list
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev; // Return the new head of the reversed list
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head; // Edge case: no need to reverse

        ListNode* dummy = new ListNode(0); // Dummy node to simplify edge cases
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            ListNode* start = curr; // Start of the k-group
            ListNode* end = curr;   // End of the k-group

            // Move `end` to the k-th node
            for (int i = 1; i < k && end; i++) {
                end = end->next;
            }

            if (!end) break; // If there are fewer than k nodes left, break

            ListNode* nextGroup = end->next; // Save the start of the next group
            end->next = nullptr; // Disconnect the k-group

            // Reverse the k-group
            prev->next = reverse(start); // Connect the previous group to the reversed k-group
            start->next = nextGroup; // Connect the reversed k-group to the next group

            // Move `prev` and `curr` to the next group
            prev = start;
            curr = nextGroup;
        }

        return dummy->next; // Return the new head of the modified list
    }
};