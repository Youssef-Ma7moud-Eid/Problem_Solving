class Solution {
public:
    int romanToInt(string s) {
        map<char,int>map; 
        map['I']=1;
         map['V']=5;
          map['X']=10;
           map['L']=50; map['C']=100; map['D']=500; map['M']=1000;

    int count = map[s[0]];

    for(int i=1;i<s.size();i++)
    {
         if(map[s[i]]>map[s[i-1]])
         {
            count-=map[s[i-1]];
            count+=(map[s[i]]-map[s[i-1]]);
         }
         else{
              count+=map[s[i]];
         }
    }
        return count;
    }
};