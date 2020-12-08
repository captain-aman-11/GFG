//LeetCode - https://leetcode.com/problems/two-sum/

//CPP
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {

                if (nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};

//Java
class Solution
{
public
    int[] twoSum(int[] nums, int target)
    {

        int[] res = new int[2];

        //Using the two loop method ( O(n^2) )
        for (int i = 0; i < nums.length; i++)
        {
            for (int j = i + 1; j < nums.length; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
            }
        }
        return res;
    }
}