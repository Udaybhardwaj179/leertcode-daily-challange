class Solution {
public:
    int recursive(int n,vector<int> &dp){
        if (n==0)return 0;
        if (n==1)return 1;
        if (n==2)return 1;
        if (dp[n]!=-1)return dp[n];
        return dp[n]=recursive(n-1,dp)+recursive(n-2,dp)+recursive(n-3,dp);
    }
    int tribonacci(int n) {
        // vector<int> dp(n+1,-1);
        // return recursive(n,dp);


        int a=0;
        int b=1;
        int c=1;
        int sum=0;
        if (n==0)return 0;
        if (n<3)return 1; 
        for (int i=3;i<=n;i++){
            sum=a+b+c;
            a=b;
            b=c;
            c=sum;
        }
        
        return sum;
        
        
       
    }
};
