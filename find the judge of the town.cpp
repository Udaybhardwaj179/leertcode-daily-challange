class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>> v(n+1,{0,0});
        for (auto i:trust)
        {
            v[i].first++;
            v[i].second++;
        }
        int c=1;
        for (auto i: v){
            if (i.second==0 && i.first==n-1)return c;
            c++;
        }
        return -1;
    }
};
//  here in this solution we are taken a vector of pairs from 1 to n
// each pair is storing that how is trusting to whom like pair index of zero is storing that this person trust how many people and the one index of pair is storing that this person is trustedd by how many people.
// therefore when we found a person who dont trust anyone and n-1 people trust this peson than that person is judge.
