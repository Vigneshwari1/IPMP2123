#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        int index,flag = 0,k=1;
        auto iter = lower_bound(v.begin(),v.end(),num);  
            if(num == *iter){
                cout<<"Yes "<<iter - v.begin() + 1 <<endl;
            }

            else{
                cout<<"No "<<iter - v.begin() + 1 <<endl;
            }
    }
    
    return 0;
}
