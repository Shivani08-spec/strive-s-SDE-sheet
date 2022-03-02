 class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i =0;i<row;i++){
            for(int j =0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }
        
        for(int i =0;i<col/2;i++){
            for(int j =0;j<row;j++){
                swap(matrix[j][i],matrix[j][col-i-1]);
                
            }
        }
        
        
        
    }
};
