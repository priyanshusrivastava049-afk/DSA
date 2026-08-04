class Solution {
public:
    string reversePrefix(string word, char ch) {
        string res;
        int x=-1;
        for(int i=0;i<word.size();i++){
            if(word[i] == ch){
                x=i;
                 res.push_back(word[i]);
                break;
            }
            else{
                res.push_back(word[i]);
            }
        }
        if(x>=0){
        reverse(res.begin() , res.end());
            for(int i=x+1;i<word.size();i++){
                res.push_back(word[i]);
            }}
            return res;
    }
};