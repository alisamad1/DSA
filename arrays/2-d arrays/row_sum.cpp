#include<iostream>
#include<vector>
using namespace std;
void printRowWiseSum(int arr[][3 ], int rows,int cols){
     //row sum -> row-wise traversal
     for(int i = 0;i<rows; i++){
         int sum = 0;
        for(int j = 0;j<cols; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
     }
} 
int main(){
     
}