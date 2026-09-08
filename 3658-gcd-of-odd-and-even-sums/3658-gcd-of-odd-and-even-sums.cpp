class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0,sumeven=0;
       sumeven=n*n;
       sumodd=n*(n+1);
        return gcd(sumodd,sumeven);
    }
};