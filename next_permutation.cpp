class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int min = 101;
        int k =-1;
        int n = nums.size();
        for(int i =n-1;i>0;i--){
            if(nums[i]<=nums[i-1]){
                if(i==1){
                reverse(nums.begin(),nums.end());
                }
                continue;
                }
            
            else{
                for(int j = i;j<n;j++){
                    if(nums[j]<=nums[i-1])
                        continue;
                    else if(min>nums[j]){
                        min = nums[j];
                        k = j;
                    }
                    
                }
                swap(nums[i-1],nums[k]);
                sort(nums.begin()+i,nums.end());
                break;
            
            
            }
            
        }
        
    }
}; 
