//LeetCode - https://leetcode.com/problems/linked-list-cycle/description

// Linked List Cycle -> Linked List

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {

        //If the list is empty
        if (!head)
        {
            return false;
        }

        ListNode *p = head;
        ListNode *q = head;

        //Using the two pointer method here, one is slow pointer and other is fast pointer
        // If there's a loop exist, then there be must one pointer where they both will
        // Eventually meet

        while (q->next && q->next->next)
        { // It satisfies of a loop
            p = p->next;
            q = q->next->next;

            if (p == q)
            {
                return true;
            }
        }
        return false;
    }
};