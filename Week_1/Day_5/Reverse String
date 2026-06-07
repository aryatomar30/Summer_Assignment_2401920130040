class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> temp;
        int n = s.size() - 1;
        
        for(int i = n; i >= 0; i--) {
            temp.push_back(s[i]);
        }

        for(int i = 0; i < temp.size(); i++) {
            s[i] = temp[i];
        }
    }
};
