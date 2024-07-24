class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size() - 1;
        int i = 0;
        int k=0;
        while(i <= len){
            if (nums[i] == val){
                int temp = nums[len];
                nums[len] = nums[i];
                nums[i] = temp; 
                len = len-1;
            }
            else{
                i = i+1;
                k = k+1;
            }
        }
        return k;
    }
};