class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto& y:nums){
            y=y*y;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};