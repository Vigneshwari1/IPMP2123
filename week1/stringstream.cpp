#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> ints;
    string num;
    for(char c: str){
        if(c!=','){
            num.push_back(c);
        }
        if(c==','){
            ints.push_back(stoi(num));
            num.clear();
            }
    }
    ints.push_back(stoi(num));
    
    return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
