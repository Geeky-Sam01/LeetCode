class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        if(n == 0 || m == 0)
            return false;
        
		// matrix is array just taking care of endices
		// [0..n*m]
        int start = 0, end = m*n - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
			// a[x] : matrix[x / m][x % m] formulae
            int ind = matrix[mid/m][mid%m];
            if (target == ind)
                return true;
            else if(target < ind)
                end = mid - 1;
            else
                start = mid + 1;       
        }
        return false;
    }
};


class Solution {// good also 
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int i = 0;
        int j = matrix[0].size() - 1;
        
        while(i < n && j >= 0)
        {
            if(matrix[i][j] == target)
                return true;
            if(target < matrix[i][j] )
                --j;
            else
                ++i;
        }
        return false;
    }
};
