class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        bool flag=false;
        map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
            if(map[nums[i]]>=2)
            {
                flag=true;
                break;
            }
        }



        return flag;
    }
};