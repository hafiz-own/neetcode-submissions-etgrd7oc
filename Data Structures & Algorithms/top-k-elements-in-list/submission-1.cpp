
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for (auto& it : nums) {
            umap[it]++;
        }
        vector<pair<int, int>> v(umap.begin(), umap.end());
        sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2) {
            return p1.second > p2.second;
        });
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};