class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>array(2);
        map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
             if(map[target-nums[i]]>=1)
            {
                array[0]=i;
                array[1]=map[target-nums[i]]-1;
                break;
            }
            map[nums[i]]=i+1;

           
        }
        return array;
    }
};