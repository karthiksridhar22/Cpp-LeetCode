//Moore Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate; 
        int i = 0;

        while(i<nums.size()){
            if(count == 0){
                candidate = nums[i];
                count = count +1;
                i = i+1;
            }
            if(i < nums.size() && nums[i] == candidate){
                count = count + 1; 
            }
            else if(i < nums.size() && nums[i] != candidate){
                count = count - 1; 
            }
            i = i+1;
        }
        return candidate;
    }
};