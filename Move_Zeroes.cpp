class Solution {
    
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.empty()){
            return;
        }
        if(nums.size() == 1){
            return;
        }
        int i = 0, j = 1;
        while(i < j && j < nums.size()){
            if(nums[i] == 0 && nums[j] == 0){
                //swap(nums[i], nums[j]);
                j++;
            }
            else if(nums[i] == 0){
                
                swap(nums[i], nums[j]);
                i++, j++;
            }
            else{
                i++, j++;
            }
            
        }
    }
};