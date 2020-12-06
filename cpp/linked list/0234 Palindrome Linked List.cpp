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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow = reverse(slow);
        while (head && slow && head != slow) {
            if (head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
        
        return true;
    }
    
    ListNode *reverse(ListNode *node) {
        ListNode *prev = nullptr;
        while (node) {
            ListNode *next = node->next;
            node->next = prev;
            prev = node;
            node = next;
        }
        
        return prev;
    }
};