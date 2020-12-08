// LeetCode - https://leetcode.com/problems/palindrome-linked-list

//CPP
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {

        ListNode *ptr = head;

        stack<int> s;

        while (ptr != NULL)
        {
            s.push(ptr->val);
            ptr = ptr->next;
        }

        while (head != NULL)
        {
            int i = s.top();

            s.pop();

            if (head->val != i)
            {
                return false;
            }

            head = head->next;
        }
        return true;
    }
};

//Java
class Solution
{
public
    boolean isPalindrome(ListNode head)
    {
        ListNode ptr = head;

        Stack<Integer> s = new Stack<>();

        while (ptr != null)
        {
            s.push(ptr.val);
            ptr = ptr.next;
        }

        while (head != null)
        {
            int i = s.peek();

            s.pop();

            if (head.val != i)
            {
                return false;
            }
            head = head.next;
        }
        return true;
    }
}