#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin>>n>>q;
    int *arr[n];
    int size;
    for(int i=0;i<n;i++){
        cin>>size;
        arr[i]=(int*)malloc(size*(sizeof(int)));
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }
    int i,j;
    for(int k=0;k<q;k++){
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }
    return 0;
}
