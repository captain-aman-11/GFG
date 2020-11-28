//LeetCode - https://leetcode.com/problems/reverse-nodes-in-k-group/description

// Reverse Node in K Group  -> Linked List

class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *root = new ListNode(0, head);

        ListNode *curr = head;
        ListNode *prev = root;

        while (curr != NULL)
        {
            ListNode *tail = curr;
            int ListIndex = 0;

            while (curr != NULL && ListIndex < k)
            {
                curr = curr->next;
                ListIndex++;
            }
            if (ListIndex != k)
            {
                prev->next = tail;
            }
            else
            {
                prev->next = reverse(tail, k);
                prev = tail;
            }
        }
        return root->next;
    }

    ListNode *reverse(ListNode *head, int k)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next = NULL;

        while (curr != NULL && k-- > 0)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
};
