//LeetCode - https://leetcode.com/problems/linked-list-cycle-ii/

//Linked List Cycle II -> Linked List

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        if (!head)
        {
            return NULL;
        }

        ListNode *p = head;
        ListNode *q = head;

        while (1)
        {
            if (p->next != NULL)
            {
                p = p->next;
            }
            else
            {
                return NULL;
            }
            if (q->next != NULL && q->next->next != NULL)
            {
                q = q->next->next;
            }
            else
            {
                return NULL;
            }
            if (p == q)
            { //If find the loop, the looking for the loop start
                q = head;
                while (p != q)
                {
                    p = p->next;
                    q = q->next;
                }
                return p;
            }
        }
    }
};