class Solution {
public:
    int findMin(vector<int> &nums) {
        int smallest= nums[0];
        for(int i=0; i<nums.size(); i++){
            if (nums[i]<smallest){
                smallest= nums[i];
            }
            
        }
        return smallest;
    }
};
