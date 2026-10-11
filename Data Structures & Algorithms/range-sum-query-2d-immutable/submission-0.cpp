class NumMatrix {
private:
    vector<vector<int>> arr;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        arr = vector<vector<int>>(rows + 1, vector<int>(cols + 1, 0));

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                arr[i][j] = matrix[i - 1][j - 1]
                          + arr[i - 1][j]
                          + arr[i][j - 1]
                          - arr[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return arr[row2 + 1][col2 + 1]
             - arr[row1][col2 + 1]
             - arr[row2 + 1][col1]
             + arr[row1][col1];
    }
};