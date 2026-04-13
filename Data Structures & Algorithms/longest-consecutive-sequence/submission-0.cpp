class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(),nums.end());
        int ans = 0;
        for(auto it : uset){
            if(uset.find(it-1) != uset.end()) continue;
            int curr = 1;
            int next = it+1;
            while(uset.find(next)!=uset.end()){
                curr++;
                next++;
            }
            ans = max(curr, ans);
        }
        return ans;
    }
};
