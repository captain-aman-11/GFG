//LeetCode - https://leetcode.com/problems/spiral-matrix/description

//Spiral Matrix -> Vector, Matrix

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> res;

        if (matrix.empty())
        {
            return res;
        }

        int row = matrix.size();
        int column = matrix[0].size();

        int minr = 0;
        int maxr = row - 1;

        int minc = 0;
        int maxc = column - 1;

        int totalElements = row * column;
        int count = 0;

        while (count < totalElements)
        {
            //Top Wall
            for (int i = minr, j = minc; j <= maxc && count < totalElements; j++)
            {
                res.emplace_back(matrix[i][j]);
                count++;
            }
            minr++;

            //Right Wall
            for (int i = minr, j = maxc; i <= maxr && count < totalElements; i++)
            {
                res.emplace_back(matrix[i][j]);
                count++;
            }
            maxc--;

            //Bottom Wall
            for (int i = maxr, j = maxc; j >= minc && count < totalElements; j--)
            {
                res.emplace_back(matrix[i][j]);
                count++;
            }
            maxr--;

            //Left Wall
            for (int i = maxr, j = minc; i >= minr && count < totalElements; i--)
            {
                res.emplace_back(matrix[i][j]);
                count++;
            }
            minc++;
        }
        return res;
    };
};
