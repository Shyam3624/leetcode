class Solution {
public:
    vector<vector<int>> res;

    void backtrack(vector<int>& candidates, int target, vector<int>& current, int start) {
        if (target == 0) {
            res.push_back(current);
            return;
        }
        if (target < 0) return;

        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);       // choose
            backtrack(candidates, target - candidates[i], current, i); // not i+1 because we can reuse same element
            current.pop_back();                     // undo choice
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        backtrack(candidates, target, current, 0);
        return res;
    }
};

    