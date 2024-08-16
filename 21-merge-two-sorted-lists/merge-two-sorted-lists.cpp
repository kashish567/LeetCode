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
        // Create a dummy node to serve as the start of the merged list
        ListNode dummy(0);
        ListNode* current = &dummy;  // Pointer to build the merged list
        
        // Iterate through both lists until one is exhausted
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;  // Append the smaller node to the merged list
                list1 = list1->next;    // Move list1 pointer to the next node
            } else {
                current->next = list2;  // Append the smaller node to the merged list
                list2 = list2->next;    // Move list2 pointer to the next node
            }
            current = current->next;  // Move the current pointer forward
        }
        
        // If one of the lists is not exhausted, append the remaining nodes
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }
        
        // Return the merged list, starting from the node after the dummy node
        return dummy.next;
    }
};