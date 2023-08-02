class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {

        // counting the distinct elements in the given 'nums' array
        set<int>st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        int n = st.size();       // storing the size of set of distinct elements
        st.clear();             // clearing the set for further use
        int count = 0;

        // calculating all the sub-arrays in O(n^2) as n <= 10^3 => n^2 <= 10^6
        for (int i = 0 ; i < nums.size(); i++) {
            // traversing the array and seeing all the possible subarrays
            for (int j = i; j < nums.size(); j++) {
                st.insert(nums[j]);
                if (st.size() == n) count++;
            }
            st.clear();         // as we're going to calculate new sub-array with different starting element
        }
        return count;
    }
};