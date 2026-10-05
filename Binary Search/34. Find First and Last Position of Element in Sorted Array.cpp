// LeetCode 34. Find First and Last Position of Element in Sorted Array
// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution
{
public:
    int binarySearch(vector<int> &nums, int target, bool flag)
    {
        int start = 0;
        int end = nums.size() - 1;
        int occurence = -1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                occurence = mid;
                if (flag)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return occurence;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = binarySearch(nums, target, true);
        int last = binarySearch(nums, target, false);
        return {first, last};
    }
};