class Solution {
public:
    int maxProduct(int n) {
        vector<int>mul;
        while(n>0){
            int d=n%10;
            mul.push_back(d);
            n/=10;
        }
        int s = mul.size();
        sort(mul.begin() , mul.end());
        return mul[s-1]*mul[s-2];
    }
};