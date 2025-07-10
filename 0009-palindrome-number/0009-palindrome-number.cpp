class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        else if(x==0)
        {
            return true;
        }
        else{
            vector<int>v1;
            while(x)
            {
                v1.push_back(x%10);
                x/=10;
            }
            int j=v1.size()-1;
           for(int i=0;i<v1.size()/2;i++)
           {
            if(v1[i]!=v1[j])
            return false;
            j--;
           }
           return true;
        }
    }
};