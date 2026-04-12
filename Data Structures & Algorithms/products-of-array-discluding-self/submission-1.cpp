class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> ans;
    int n = nums.size();
    if (n <= 1)
      return nums;
    ans.push_back(1);
    int prev = 1;
    for (int i = 1; i < n; i++) {
      int curr = nums[i - 1] * prev;
      ans.push_back(curr);
      prev = curr;
    }

    int next = 1;
    for (int i = n - 2; i >= 0; i--) {
      int curr = nums[i + 1] * next;
      ans[i] = ans[i] * curr;
      next = curr;
    }
    return ans;
  }
};