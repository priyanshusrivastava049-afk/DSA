class Solution {
public:
    int minAddToMakeValid(string s) {
        int opn = 0, ans = 0;
        for (char ch : s) {
            if (ch == '(') {
                opn++;
            } else {
                if (opn > 0)
                    opn--;
                    else {
                ans++;
            }
            }
        }
            return ans + opn;
        }
    };