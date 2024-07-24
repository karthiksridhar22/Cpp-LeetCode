class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 0; 
        int count = 0; 
        int len = nums.size();
        int arr[len];
        arr[count] = nums[p];
        int curr_check = nums[p];
        p = p+1;
        count = count+1;
        while(p < len){
            if(nums[p] == curr_check){
                p = p+1;
            }
            else{
                arr[count] = nums[p];
                curr_check = nums[p];
                count = count + 1;
                p = p+1; 

            }
        }

        for(int i = 0; i < count; i++){
            nums[i] = arr[i];
        }

        return count;
    }

};