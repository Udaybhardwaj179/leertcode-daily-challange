class Solution 
{
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
        unordered_map<char, int> mp; 

        //storing letters and their position in mp
        for(int i=0; i<order.size(); i++)
            mp[order[i]] = i;

        //comparing two consecutive words 
        for(int i=0; i<words.size()-1; i++)
        {
            int j=0;
            while(j<words[i].size() && j<words[i+1].size()) //comparing each letter of words
            {
                //If words pair are already sorted we move to next word pair
                if(mp[words[i][j]] < mp[words[i+1][j]]) break; 

                //If they are not sorted we return false
                if(mp[words[i][j]] > mp[words[i+1][j]]) return false;
                j++;
            }
            //for handling cases like Example 3
            if(j==words[i+1].size() && j<words[i].size()) return false; 
        }
        return true;
    }
};
