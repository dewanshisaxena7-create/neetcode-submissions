class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            if (mpp.find(nums[i]) != mpp.end()) { // this conditipn will check if the numebr already exist if it does return true nhi toh then niche key value m store ho jayega 
                return true;
            }

            mpp[nums[i]] = 1; // 1 mtlb i have seen this numbher  
        }

        return false;
    }
};