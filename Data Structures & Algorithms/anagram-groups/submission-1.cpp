class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        for(auto i : strs){
            auto it = i;
            sort(it.begin(), it.end());
            umap[it].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto it : umap){
            ans.push_back(it.second);
        }
        return ans;
    }
};
