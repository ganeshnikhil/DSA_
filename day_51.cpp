// day19.md
// . Search 2D Matrix

#include<iostream>
#include<vector>

using namespace std;

bool serach_matrix( vector<vector<int>> matrix , int row , int col , int target){
    r = 0;
    c = col - 1;

    while(r < row && c <= 0){
        if(matrix[r][c] == target){
            return true;
        }
        else if(matrix[r][c] > target){
            c = c - 1;
        }
        else{
            r = r + 1;
        }
    }
}

int main(){
    int row , col;
    cout<<"Enter row & col: ";
    cin>>row>>col;
    int input , target;
    vector<vector<int>> matrix(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin>>input;
            arr[i][j] = input;
        }
    }

    cout<<"Target: ";
    cin>>target;


}

