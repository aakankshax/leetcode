// Judge Route Circle

class Solution {
public:
    bool judgeCircle(string moves) {
        int countlr=0, countud=0;
        for(int i=0; i<moves.length(); i++)
        { if(moves[i]=='L')
                countlr++;
             else if(moves[i]=='R')
                 countlr--;
             else if(moves[i]=='U')
                 countud++;
             else if(moves[i]=='D')
                 countud--;
        }
        
        if(countlr==0 && countud==0)
            return true;
        else 
            return false;
        
    }
    
};