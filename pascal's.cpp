class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>op;
        for(int i =0;i<numRows;i++){
            vector<int>res(i+1,1);
            for(int j  =1;j<i;j++){
                res[j] = op[i-1][j-1] + op[i-1][j];
            }
            op.push_back(res);
        }
        
        
     return op;   
    }
}; 
