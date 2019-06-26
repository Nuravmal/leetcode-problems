




















class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s1;
        for(auto i:nums)
        {
            s1.insert(i);
        }

        nums.clear();
        for(auto i:s1)
        nums.push_back(i);

        return nums.size();
    }
};
