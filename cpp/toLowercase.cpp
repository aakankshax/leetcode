// To Lower Case

class Solution {
public:
    string toLowerCase(string str) {
        int len = str.length();
        for(int i=0; i<len; i++)
        {
            if(str[i]>=65 && str[i]<=91)
                str[i] = str[i]+32;
        }
        
        return str;
        
    }
};