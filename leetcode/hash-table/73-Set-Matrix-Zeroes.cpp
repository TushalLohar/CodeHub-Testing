// class Solution {
// public:

//     void setZeroes(vector<vector<int>>& matrix) {
//             // Get number of rows
//         int m = matrix.size();
//         // Get number of columns
//         int n = matrix[0].size();

//         // Create row marker array
//         vector<int> row(m, 0);
//         // Create column marker array
//         vector<int> col(n, 0);

//         // First pass: mark rows and columns that need to be zeroed
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 // If element is zero, mark its row and column
//                 if (matrix[i][j] == 0) {
//                     row[i] = 1;
//                     col[j] = 1;
//                 }
//             }
//         }

//         // Second pass: set cells to zero based on markers
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 // If the row or column is marked, set cell to zero
//                 if (row[i] == 1 || col[j] == 1) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
    
//     }
// };




class Solution {
public:
     // Function to set entire row and column to 0 if an element in the matrix is 0
    void setZeroes(vector<vector<int>>& matrix) {
        // Get number of rows
        int m = matrix.size();
        // Get number of columns
        int n = matrix[0].size();
        const char mark ='x';

        // Traverse each cell of the matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // If current cell is zero
                if (matrix[i][j] == 0) {
                    // Mark all elements in this row as -1 (except existing zeros)
                    for (int col = 0; col < n; col++) {
                        if (matrix[i][col] != 0)
                            matrix[i][col] = mark;
                    }
                    // Mark all elements in this column as -1 (except existing zeros)
                    for (int row = 0; row < m; row++) {
                        if (matrix[row][j] != 0)
                            matrix[row][j] = mark;
                    }
                }
            }
        }

        // Second pass: replace all -1 markers with 0
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == mark)
                    matrix[i][j] = 0;
            }
        }
    }
};