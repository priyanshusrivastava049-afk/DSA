class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int> st;
        vector<int> px, py;
        long long val = 1;
        while (val <= bound) {
            px.push_back(val);
            if (x == 1)
                break;
            val *= x;
        }
        val = 1;
        while (val <= bound) {
            py.push_back(val);
            if (y == 1)
                break;
            val *= y;
        }
        for (int a : px) {
            for (int b : py) {
                if (a + b <= bound)
                    st.insert(a + b);
            }
        }

        return vector<int>(st.begin(), st.end());
    }
};