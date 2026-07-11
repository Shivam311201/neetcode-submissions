class Solution {
public:

    string encode(vector<string>& strs) {
        string concat="";
        for(auto it:strs){
            concat+=to_string(it.length());
            concat+='#';
            concat+=it;
        }
        return concat;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.length())
        {
            int start=i;
            while(s[i]!='#')
            {
                i++;
            }
            int len=stoi(s.substr(start,i-start));
            ans.push_back(s.substr(i+1,len));
            i=i+len+1;
        }
        return ans;
    }
};
