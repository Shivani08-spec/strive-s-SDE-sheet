class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =1;
        int element = 0;
        int n = nums.size();
        
        for(int i =1;i<n;i++){
            
            if(nums[i]==nums[element]){
                count++;
            }
            else{
                count--;
                
            }
            if(count==0){
                element =i;
                count =1;
            }
        }
        
        return nums[element];
        
    }
}; 
