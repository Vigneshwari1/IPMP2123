class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> S;

        for(char c: s)
           S[c]++;
        for(char c: t)
        { if(!--S[c])
              S.erase(c);
        }
        return S.empty();
    }
};
