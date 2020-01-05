class Solution {
    vector<int> pascalRow;
public:
    vector<int> getRow(int rowIndex) {
        pascalRow.resize(rowIndex+1);
        for(int i = 0; i <= rowIndex/2;i++)pascalRow[i]=recursive(rowIndex,i);
        for(int i = 0; i <= rowIndex/2; i++){pascalRow[rowIndex/2+i] = pascalRow[rowIndex/2-i];}
        return pascalRow;
    }
    int recursive(int row,int col){
        if(col == 0||col==row)return 1;//base case
        return recursive(row-1,col)+recursive(row-1,col-1); 
    }
};