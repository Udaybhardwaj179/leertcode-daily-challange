class Solution {
public:
    bool dfs(int index, string &s,unordered_map<string,int>&mp){
        if (index==s.size()){
            return true;
        }
        string temp="";
        
        for (int i=index;i<s.size();i++){
            temp=temp+s[i];
            if (mp[temp]>0 && dfs(i+1,s,mp) )return true;
        }
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string>ans;
        unordered_map<string,int>mp;
        for (auto i:words){
            mp[i]++;
        }
        for (auto i:words){
            mp[i]--;
            if (dfs(0,i,mp)){
                ans.push_back(i);
            }
            mp[i]++;
            

        }
        return ans;
    }
};
