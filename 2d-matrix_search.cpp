class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool x = false;
        int row = matrix.size();
        int col = matrix[0].size();
      
        int start =0;
        int end = (row*col)-1;
        int  mid;
        
        
        
        while(start<=end){
            mid = start+(end-start)/2;
            int element = matrix[mid/col][mid%col];
            if(target == element)
            {
                x = true;
                break;
            }
            else if(target<element){
                end = mid-1;
                
            }
            else if(target>element){
                start = mid+1;
            }
            
        }
        return x;
        
    }
}; 
