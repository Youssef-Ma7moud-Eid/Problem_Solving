class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int sum1=0,sum2=0;
        bool flag=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '&&flag==true)
            {
                sum1 = sum2;
                flag = false;
                sum2=0;
            }
            else if(s[i]!=' '){
                sum2++;
                flag=true;
            }
        }
         sum1 = sum2 > 0 ? sum2:sum1;
        return sum1;
    }
};