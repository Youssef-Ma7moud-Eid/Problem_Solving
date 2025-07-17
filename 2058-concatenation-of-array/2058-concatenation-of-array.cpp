class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int size = nums.size();
        vector<int>vec(2*size);
        for(int i=0;i<size;++i)
        {
          vec[i]=nums[i];
          vec[i+size]=vec[i];
         
        }

        return vec;
    }
};