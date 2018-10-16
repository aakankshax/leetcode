// Hamming Distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        int num = x^y, temp = 1, count = 0;
        
        for(int i=0; i<32; i++)
        {
            if(num&temp)
                count++;
            temp = temp<<1;
        }
        
        
        return count;
        
    }
};