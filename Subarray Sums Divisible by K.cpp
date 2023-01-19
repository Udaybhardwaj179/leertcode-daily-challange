class Solution {
public:
    
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        vector<int> v(k,0);
        for (auto i:nums){
            sum+=(i%k+k)%k;
            v[sum%k]++;
        }
        int result =v[0];
        for (int c:v){
            result+=(c*(c-1))/2;
        }
        return result;
    }
};
