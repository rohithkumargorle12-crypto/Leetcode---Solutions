// LeetCode : 237. Delete Node in a Linked List
//  Time Complexity: O(1)
//  Space Complexity: O(1)
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        if (node == NULL)
        {
            return;
        }
        node->val = node->next->val;
        // ListNode* temp = node -> next;
        node->next = node->next->next;
        // delete temp;
    }
};