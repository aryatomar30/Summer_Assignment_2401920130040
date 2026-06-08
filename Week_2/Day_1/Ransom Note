class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>ra;
        unordered_map<char,int>ma;
        for(int ch:ransomNote){
            ra[ch]++;
        }
        for(int ch:magazine){
            ma[ch]++;
        }
        int count=0;
        for(auto ch:ra){
            if(ma[ch.first]>=ch.second){
                count++;
            }
        } 
        /* or you can just give this ranged for loop like this
           for(auto ch:ra){
                if(ma[ch.first]<ch.second){
                    return false;
                }
            }
        */
        int n=ra.size();
        if(n==count){
            return true;
        }
        return false;
    }
};
