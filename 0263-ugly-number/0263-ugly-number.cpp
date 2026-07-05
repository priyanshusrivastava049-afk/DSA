class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;

    // Divide out all factors of 2, 3, and 5
    int divisors[] = {2, 3, 5};
    for (int d : divisors) {
        while (n % d == 0) {
            n /= d;
        }
    }

    // If reduced to 1, it only had 2, 3, or 5 as prime factors
    return n == 1;
    }
};