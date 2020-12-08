//LeetCode - https://leetcode.com/problems/delete-node-in-a-linked-list

//CPP
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        ListNode *temp = node->next;
        node->next = node->next->next;
        delete (temp);
    }
};

//Java

class Solution
{
public
    void deleteNode(ListNode node)
    {

        ListNode temp = node.next;
        node.val = node.next.val;
        node.next = node.next.next;
        temp = null;
    }
}