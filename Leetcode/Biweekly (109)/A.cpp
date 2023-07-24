class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        bool check = 1;
        for (int i = 0; i < n; i++) {
            if (n == 1) {
                check = 0;
                break;
            }
            else if (i < n - 1 && nums[i] != i + 1) {
                check = 0;
                break;
            }
            else if (i == n - 1 && (nums[i] != n - 1 || nums[i] != nums[i - 1])) {
                check = 0;
                break;
            }
        }
        return check;
    }
};