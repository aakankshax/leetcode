// Unique Morse Code Words

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char, string> m{ {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."}  };
        
        unordered_set<string> morsecode;
        int count=0;
        
        for(int i=0; i<words.size(); i++)
        { string str="";
            for(int j=0; j<words[i].size(); j++)
            {
                char ch = words[i].at(j);
                string temp = m[ch];
                str.append(temp);
             }
        
                morsecode.insert(str);
         
        }
        
        return morsecode.size();
        
    }
};