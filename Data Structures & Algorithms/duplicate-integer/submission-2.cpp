class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto it : nums){
            if(umap.find(it)!=umap.end()){
                return true;
            }
            umap[it]++;
        }
        return false;
    }
};