#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int n;
      vector<int> v;
      cin>>n;
      for(int i=0;i<n;i++){
          int input;
          cin>>input;
          v.push_back(input);
      }
      int i;
      cin>>i;
      v.erase(v.begin()+i-1);
      int a,b;
      cin>>a>>b;
      v.erase(v.begin()+a-1,v.begin()+b-1);
      cout<<v.size()<<endl;
      for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
      }
      
    return 0;
}
