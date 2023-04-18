class Solution {
public:
    string mergeAlternately(string s, string e) {

        int i=0,j=0;
        string v="";
        while(i<s.size() and j<e.size())
        {
            v+=s[i];
            i++;
            v+=e[j];
            j++;
        }
        while(i<s.size() )
        {
            v+=s[i];
            i++;
            
        }
        while(j<e.size())
        {
            
            v+=e[j];
            j++;
        }
    return v;
        
    }
};
