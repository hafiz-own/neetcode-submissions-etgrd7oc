class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int dif = target - nums[i];
            if(umap.find(dif)!=umap.end()){
                ans.push_back(umap[dif]);
                ans.push_back(i);
            }
            umap.insert({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
