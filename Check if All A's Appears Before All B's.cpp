class Solution {
public:
    bool checkString(string s) {
        
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='a' and s[i+1]=='a' or s[i+1]=='b')
            continue;
            else
            return false;
            if(s[i]=='b' and s[i+1]=='b')
            continue;
            else
            return false;

        }
        return true;
    }
};
