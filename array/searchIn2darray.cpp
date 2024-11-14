
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowIndex = potentialRow(matrix, target);
        
        if (rowIndex != -1) {
            return binarySearchOnRow(matrix[rowIndex], target);
        }
        
        return false;
    }

private:
    // Function to find the potential row using binary search
    int potentialRow(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size() - 1; // Number of rows
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (matrix[mid][0] <= target && target <= matrix[mid].back()) {
                return mid; // This row might contain the target
            }
            
            else if (target > matrix[mid][0]) {
                low = mid + 1;
            }
            
            else {
                high = mid - 1;
            }
        }
        
        return -1; 
    }
    
    bool binarySearchOnRow(vector<int>& row, int target) {
        int low = 0;
        int high = row.size() - 1; 
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (row[mid] == target) {
                return true; // Target found
            }
            
            else if (row[mid] < target) {
                low = mid + 1;
            }
            
            else {
                high = mid - 1;
            }
        }
        
        return false; 
    }
};
