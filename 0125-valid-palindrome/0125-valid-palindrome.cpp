class Solution {
public:
    bool isPalindrome(string s) 
    {
        string ss;
      for(int i=0;i<s.size();i++)
      {
         if(int(s[i])>=65 &&int(s[i])<=90)
         {
            s[i]+=32;
         }
         if((int(s[i])>= 97 && int(s[i]) <=122)||(int(s[i])>= 48 && int(s[i]) <= 57))
         {
            ss.push_back(s[i]);
         }
      }
      for(int i=0;i<ss.size()/2;i++)
      {
        if(ss[i]!=ss[ss.size()-i-1])
        {
           return false;
        }
      }
      return true;
    }
};