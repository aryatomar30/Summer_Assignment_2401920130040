class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, maxlen = 0;
        int n = s.size();

        int hash[256];
        memset(hash, -1, sizeof(hash));

        while(right < n)
        {
            if(hash[s[right]] != -1) 
            {
                if(hash[s[right]] >= left)
                {left = hash[s[right]] + 1;}
            }

            maxlen = max(maxlen, right - left + 1);
            hash[s[right]] = right;
            right++;
        }
        return maxlen;
    }
};
