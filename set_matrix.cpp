class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n =  matrix[0].size();
        
        int row[201] = {0};
        int col[201] = {0};
        
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
                
            }
            
            
        }
        
        for(int i =0;i<m;i++){
            
            
            for(int j =0;j<n;j++){
                
                if(row[i] ==1)
                    matrix[i][j]=0;
            
                
                if(col[j]==1)
                    matrix[i][j]=0;
                
            
        }
    }
        
        
    }
}; 
