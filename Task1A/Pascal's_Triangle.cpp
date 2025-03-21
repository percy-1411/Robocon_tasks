class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int j = 0; j <= i; j++) {
                getBinCoeff(i, j);
                row.push_back(getBinCoeff(i, j));
            }
                triangle.push_back(row);
        }
        return triangle;
    }
    
   int getBinCoeff(int n, int k) {
    int coeff = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; i++) {
        coeff *= (n - i);
        coeff /= (i + 1);
    }

    return coeff;
}
};
