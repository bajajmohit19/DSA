#include<iostream>
using namespace std;

int main(){

    int i,j;
    int row, col;

    cout << "Enter value of rows and coloumns " << endl ;
    cin >> row >> col;

    for ( i = 0 ; i < row; i++){
        for(j = 0; j < col; j++ ){
            cout<< "*";
        }
        cout << endl;
    } 
}