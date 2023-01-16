/*

2Sum:
https://leetcode.com/problems/two-sum/solutions/127810/two-sum/

Triangle:
https://leetcode.com/problems/triangle/solutions/1167943/triangle/?orderBy=hot

Gas Station:
https://leetcode.com/problems/gas-station/solutions/42572/proof-of-if-total-gas-is-greater-than-total-cost-there-is-a-solution-c/?orderBy=most_votes&languageTags=cpp

UTF:
https://leetcode.com/problems/utf-8-validation/solutions/184615/utf-8-validation/

*/

#include <iostream>
using namespace std;
#include <vector>
#include <map>

class Solution2Sum
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(target - nums[i]) != m.end())
            {
                v.push_back(m[target - nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};

class SolutionTriangle
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        vector<int> mini = triangle[triangle.size() - 1];
        for (int i = triangle.size() - 2; i >= 0; --i)
            for (int j = 0; j < triangle[i].size(); ++j)
                mini[j] = triangle[i][j] + min(mini[j], mini[j + 1]);
        return mini[0];
    }
};

class SolutionGas
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        int total(0), subsum(INT_MAX), start(0);
        for (int i = 0; i < n; ++i)
        {
            total += gas[i] - cost[i];
            if (total < subsum)
            {
                subsum = total;
                start = i + 1;
            }
        }
        return (total < 0) ? -1 : (start % n);
    }
};

class SolutionUTF
{
public:
    bool validUtf8(vector<int> &data)
    {
        // Using the hexadecimal system for mask utility
        int mask1 = 0x80;
        int mask2 = 0x20;
        int mask3 = 0x10;
        int mask4 = 0x08;
        int corner_case_mask = 0xC0; // mask for corner case string which exist independently like 10xxxxxx
        for (int i = 0; i < data.size(); i++)
        {
            if ((corner_case_mask & data[i]) == mask1)
                return false;
            int bytes{0};

            if ((mask1 & data[i]) == 0)
                continue;

            else if ((mask2 & data[i]) == 0)
                bytes = 1;
            else if ((mask3 & data[i]) == 0)
                bytes = 2;
            else if ((mask4 & data[i]) == 0)
                bytes = 3;
            else
                return false;

            while (bytes--)
            {
                i++;
                if (i >= data.size() or ((corner_case_mask & data[i]) != mask1))
                {
                    return false;
                }
            }
        }
        return true;
    }
};

main()
{

    return 0;
}