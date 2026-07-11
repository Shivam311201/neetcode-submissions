class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,len=0;
        vector<int> freq(26,0);
        while(j<s.length())
        {
            freq[s[j]-'A']+=1;
            int maxFreq=0;
            for(int i=0;i<26;i++)
                if(freq[i]>maxFreq)
                    maxFreq=freq[i];
            while(((j-i+1)-maxFreq)>k)
            {
                freq[s[i]-'A']-=1;
                i++;
                maxFreq=0;
                for(int i=0;i<26;i++)
                    if(freq[i]>maxFreq)
                        maxFreq=freq[i];
            }
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};
