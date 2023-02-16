#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    map<string,int> m;
    cin>>num;
    for(int i=0;i<num;i++){
        int c;
        string str;
        cin>>c>>str;
        int n;
        switch(c){
          case 1:
             cin>>n;
             if(m.find(str) != m.end()) m[str] = n + m[str];
             m.insert(make_pair(str,n));
             break;
          case 2:
             m.erase(str);
             break;
          case 3:
             cout<< (m.find(str)!=m.end() ? m[str] : 0) <<endl;
             break;
        }
    }      
    return 0;
}



