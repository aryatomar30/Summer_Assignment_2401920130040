class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int> ans;
      int m = matrix.size();
      int n = matrix[0].size();
      int startRow = 0, endRow = m-1;
      int startCol = 0, endCol = n-1;

      while(startRow <= endRow && startCol<=endCol){
        for(int i=startCol; i<= endCol; i++)
            ans.push_back(matrix[startRow][i]);
        startRow++;

        for(int i=startRow; i<=endRow; i++) 
            ans.push_back(matrix[i][endCol]);
        endCol--;

        if(startRow > endRow || startCol > endCol)  
           break;

        for(int i=endCol; i>=startCol; i--) 
            ans.push_back(matrix[endRow][i]);
        endRow--;

        for(int i=endRow; i>=startRow; i--)
            ans.push_back(matrix[i][startCol]);
        startCol++;
      }
      return ans;
    }  
};
