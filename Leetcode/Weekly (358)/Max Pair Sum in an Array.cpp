class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum = 0;
        for (int i = 0 ; i < nums.size(); i++) {
            int a = nums[i];
            int maxd1 = 0;
            int ld = 0;
            while (a != 0) {
                ld = a % 10;
                maxd1 = max(ld, maxd1);
                a /= 10;
            }

            for (int j = i + 1; j < nums.size(); j++) {
                int b = nums[j];
                int maxd2 = 0;
                ld = 0;
                while (b != 0) {
                    ld = b % 10;
                    maxd2 = max(ld, maxd2);
                    b /= 10;
                }

                if (maxd1 == maxd2) {
                    int sum2 = nums[i] + nums[j];
                    sum = max(sum, sum2);
                }
            }
        }

        if (sum == 0) return -1;
        else return sum;
    }
};