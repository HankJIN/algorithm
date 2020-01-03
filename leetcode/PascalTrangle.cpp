#include <vector>
using namespace std;

class Solution {
    vector<vector<int>> pascal;
public:
    vector<vector<int>> generate(int numRows) {
        pascal.resize(numRows)
        for(int i = 0; i < numRows; i++){
            pascal[i].resize(i+1);
        }
        for(int row = 0; row<numrows; row++){
            for(col = 0; col<=row; col++){
                if(row == col || col == 0) pascal[row][col] = 1;
                else pascal[row][col] = pascol[row-1][col]+pascol[row-1][col-1]

            }
        }


        return pascal;
    }
};  