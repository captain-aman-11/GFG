// LeetCode - https://leetcode.com/problems/merge-sorted-array/

// CPP Solution -

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int last = m + n - 1; // Becuase index start from 0
        int i = m - 1;
        int j = n - 1;

        while (i >= 0 && j >= 0)
        {
            nums1[last--] = nums1[i] > nums2[j] ? nums1[i--] : nums2[j--]; //Post Decrement                                                                                 operators
        }

        while (i >= 0)
        {
            nums1[last--] = nums1[i--];
        }

        while (j >= 0)
        {
            nums1[last--] = nums2[j--];
        }
    }
};

// Java Solution -
class Solution
{
public
    void merge(int[] nums1, int m, int[] nums2, int n)
    {
        int last = m + n - 1; // Becuase index start from 0
        int i = m - 1;
        int j = n - 1;

        while (i >= 0 && j >= 0)
        {

            // > because we are merging and sorting them in reverse order

            nums1[last--] = nums1[i] > nums2[j] ? nums1[i--] : nums2[j--]; //Post Decrement                                                                                 operators
        }

        while (i >= 0)
        {
            nums1[last--] = nums1[i--];
        }

        while (j >= 0)
        {
            nums1[last--] = nums2[j--];
        }
    }
}