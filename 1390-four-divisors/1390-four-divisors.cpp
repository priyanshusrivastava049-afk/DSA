class Solution {
public:
    int getSum(int n) {
        int cnt = 0;
        int sum = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                cnt++;
                sum += i;
                if (i != n / i) {
                    cnt++;
                    sum += n / i;
                }

                if (cnt > 4)
                    return 0;
            }
        }
        return (cnt == 4) ? sum : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) {
            ans += getSum(num);
        }
        return ans;
    }
};