// Reverse Words in a String III

class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        int beg = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ')
            {
                reverse(s.begin()+beg, s.begin()+i);
                beg = i+1;
            }
        }

        s.erase(s.end() - 1 , s.end());

        return s;

    }
};
