// Keyboard Row

class Solution {
private:
    unordered_set<char> one = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    unordered_set<char> two = {'a', 's', 'd' , 'f', 'g', 'h', 'j', 'k', 'l'};
    unordered_set<char> three = {'z', 'x', 'c', 'v' , 'b', 'n', 'm'};

    char toLower(char c) {
        if(c >= 'A' && c <= 'Z')
            return c - 'A' + 'a';
        return c;
    }
    int getCharRow(char c) {
        c = toLower(c);
        if(one.find(c) != one.end())
            return 1;
        if(two.find(c) != two.end())
            return 2;
        if(three.find(c) != three.end())
            return 3;
        return -1;
    }

public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;

        for(auto word: words) {
            bool success = true;
            int row = getCharRow(word[0]);
            for(int i=1; i<word.length(); i++) {
                if(row != getCharRow(word[i])) {
                    success = false;
                    break;
                }
            }
            if(success)
                ans.push_back(word);
        }

        return ans;
    }
};
