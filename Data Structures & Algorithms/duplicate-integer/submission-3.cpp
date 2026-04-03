class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for(auto it : nums){
            if(uset.find(it)!=uset.end()){
                return true;
            }
            uset.insert(it);
        }
        return false;
    }
};