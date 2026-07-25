class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int num = 0;
        char op = '+';

        s += '+';  

        for (char c : s) {
            if (c == ' ')
                continue;

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else {
                if (op == '+') {
                    st.push(num);
                } else if (op == '-') {
                    st.push(-num);
                } else if (op == '*') {
                    int x = st.top();
                    st.pop();
                    st.push(x * num);
                } else if (op == '/') {
                    int x = st.top();
                    st.pop();
                    st.push(x / num);   
                }

                op = c;
                num = 0;
            }
        }

        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};