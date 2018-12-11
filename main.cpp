#include <iostream>

using namespace std;

/* Код лабораторной работы для ОПИ №5 */

int main(){
    int i,j, res;
    int n;
    
    cout << "Enter matrix size : n x n" << endl;
    cin >> n;
    
    cout << endl;
    
    int a[n][n];
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Enter numbers: " << i << " " << j << " - ";
            cin >> a[i][j];
        }
    }
    
    cout << endl;
    cout << "Current Matrix: " << endl;
    cout << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << a[i][j] << endl;
        }
    }
    
    cout << endl;
    
    for(int i = 0; i < n; ++i )
    {
        for( int j = 0; j < i; ++j )
        {
            res = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = res;
        }
    }

    
    cout << "Matrix transposition : "<< endl;
    cout << endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[j][i];
        }
        cout << endl;
    }
    
    cout << endl;
    
    return 0;
}
