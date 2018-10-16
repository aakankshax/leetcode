// Self Dividing Numbers

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        int num, n, flag;
        
        for(int i=left; i<=right; i++)
        {  num=i, flag=1;
         
            while(num) 
            {    
              n = num%10;
                
              if(n==0)
              {
                  flag++;
                  break;
              }
                
                
            else{
              if(i%n==0)
                  flag=0;
              else
              {
                  flag++;
                  break;
              }
                
                
              num = num/10;   
            }
                
            }
         
         if(!flag)
             res.push_back(i);
        }
        
        return res;
    }
};