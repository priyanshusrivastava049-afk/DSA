class Solution {
public:
    bool checkValidString(string s) {
        int opn=0,cls=0;
        for(char ch:s){
            if(ch=='('){
                opn++;
                cls++;
            }
            else if(ch==')'){
               if(opn>0)opn--;
                cls--;
            }
            else{
                if(opn>0)opn--;
                cls++;
            }
            if(cls<0)
        return false;
        }
        return opn==0;
    }
};