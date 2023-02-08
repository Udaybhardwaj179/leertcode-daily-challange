class Solution {
public:
    
        
    
    int jump(vector<int>& nums) {
        int cnt=0;
        int ans=0;
        int ma=0;
        for (int i=0;i<nums.size()-1;i++){
        ma=max(ma,i+nums[i]);
        if (i==cnt){
            ans++;
            cnt =ma;
            if (cnt>=nums.size()-1){
                return ans;
            }
        }
            
        }
        return ans;
    }
};
