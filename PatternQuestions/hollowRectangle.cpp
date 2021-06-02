#include<iostream>
using namespace std;

int main(){
    int i, j;
    int row, col;

    cout << "Enter the value for rows and coloumns" << endl;
    cin >> row >> col;

    for( i = 1; i <= row; i++){
        for( j = 1; j <= col; j++){
            if(i == 1 || i == row ){
                cout << "*";
            }else if(j == 1 || j == col){
                cout << "*";
            } else {
                cout << " ";
            }
            
        }
        cout << endl ;
    }
}