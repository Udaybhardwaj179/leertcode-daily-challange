class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int a=0;
        int b=0;
        for (auto i: s){
            if (i=='1')a++;
            if (i=='0'){
                if (a>0){
                    b++;
                }
            }
            b=min(a,b);
        }
        
        return b;
    }
};
