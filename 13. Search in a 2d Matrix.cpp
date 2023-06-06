bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m=mat.size(), n=mat[0].size();
    int i=m-1,j=0;
    while(i>=0 and j<n){
        if(mat[i][j]==target) return true;
        mat[i][j]>target ? i--:j++;

    }
    return false;
}