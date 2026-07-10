class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count1(26,0),count2(26,0);
        for(auto it:s)
        count1[it-'a']+=1;
        for(auto it:t)
        count2[it-'a']+=1;

        for(int i=0;i<26;i++)
            if(count1[i]!=count2[i])
                return false;
        return true;
    }
};
