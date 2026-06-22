class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n=0;
        int max = nums[0];
        for(int i=0;i<nums.size();i++){
             n+=abs(nums[i] - max);
        }
        return n;
    }
};