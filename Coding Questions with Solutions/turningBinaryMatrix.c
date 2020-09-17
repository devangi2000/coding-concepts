/*
Consider a binary matrix A of size N X N.
Now, consider the following matrices :
A90 - obtained by rotating A clockwise by 90 degrees.
A180 - obtained by rotating A clockwise by 180 degrees.
A270 - obtained by rotating A clockwise by 270 degrees.

Note : Binary matrix implies that every element will be either 0 or 1.

Your task is to construct another binary matrix B of size N X N such that :
B(i,j) = 1 iff either A(i,j) = 1 OR A90(i,j) = 1 OR A180(i,j) = 1 OR A270(i,j) = 1
B(i,j) = 0 otherwise


INPUT

First line contains the size of the matrix N (1 ≤ N ≤ 100)
Next N lines contain N integers each (Only 0 or 1) denoting the matrix A


OUTPUT

Print N X N integers, denoting the matrix B.

Sample Input 0

4
0 0 0 0
0 0 0 0
0 0 1 0
1 0 0 0
Sample Output 0

1 0 0 1
0 1 1 0
0 1 1 0
1 0 0 1

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin>>num;
    int arr[num][num];
    for(int j=0; j<num;  j++){
    for(int i=0; i<num; i++){
        cin>>arr[j][i];
    }
}
    
 for(int i=0; i<num;  i++){
    for(int j=0; j<num; j++){
      if(arr[i][j]==1 || arr[num-j-1][i]==1 || arr[num-i-1][num-j-1]==1 || arr[j][num-i-1]==1) 
          cout<<"1 ";
        else 
            cout<< "0 ";
    }cout<<"\n";
}   
    return 0;
}
