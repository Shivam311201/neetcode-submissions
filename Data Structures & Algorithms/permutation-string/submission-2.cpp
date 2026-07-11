class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        vector<int> count1(26,0),count2(26,0);
        for(auto it:s1)
            count1[it-'a']+=1;
        
        int i=0,j=0;
        while(j<s1.length())
        {
            count2[s2[j]-'a']+=1;
            j+=1;
        }

        while(j<s2.length())
        {
            bool found=true;
            for(int k=0;k<26;k++)
                if(count1[k]!=count2[k]){
                    found=false;
                    break;
                }
            if(found)
                return true;
            count2[s2[j]-'a']+=1;
            count2[s2[i]-'a']-=1;
            i++,j++;
        }
        bool found=true;
            for(int k=0;k<26;k++)
                if(count1[k]!=count2[k]){
                    found=false;
                    break;
                }
            if(found)
                return true;
        return false;
    }
};
