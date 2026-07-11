class Solution {
public:
    string minWindow(string t, string s) {
        if(t.length()<s.length())
            return "";
        unordered_map<char,int> freqS,freqT;
        for(auto it:s)
            freqS[it]+=1;
        int i=0,j=0,ans=INT_MAX;
        vector<int> pairAns={};
        while(j<t.length())
        {
            freqT[t[j]]+=1;
            while(i<j&&freqT[t[i]]>freqS[t[i]])
            {
                freqT[t[i]]-=1;
                if(freqT[t[i]]==0)
                    freqT.erase(t[i]);
                i++;
            }
            
            bool found=true;
            for(auto it:freqS)
                if(freqT[it.first]<it.second)
                    found=false;
            if(found){
                if((j-i+1)<ans)
                {
                    ans=(j-i+1);
                    pairAns={i,ans};
                }
            }

            j++;
        }
        if(pairAns.size()==0)
            return "";
        // cout<<pairAns[0]<<" "<<pairAns[1];
        return t.substr(pairAns[0],ans);
    }
};
