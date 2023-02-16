#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int c,n;
        cin>>c>>n;
        
        switch(c){
          case 1:
             s.insert(n);
             break;
          case 2:
             s.erase(n);
             break;
          case 3:
             auto iter=s.find(n);
             if(iter !=s.end()) cout<<"Yes"<<endl;
             else cout<<"No"<<endl;
             break;
        }
    }   
    return 0;
}



