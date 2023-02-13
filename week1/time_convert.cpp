#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s[8]=='P' && !(s[0]=='1' && s[1]=='2')){
        int ones, tens;
        tens = (int)s[0]-'0';
        ones = (int)s[1]-'0';
        ones = ones + 2;
        tens = tens + 1 + ones/10;
        ones = ones % 10;
        s[0]= (char)tens+'0';
        s[1]= (char)ones+'0';
    }
    else if(s[0]=='1' && s[1]=='2' && s[8]=='A'){
        s[0]='0';
        s[1]='0';
    }
    s.erase(8,2);
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
