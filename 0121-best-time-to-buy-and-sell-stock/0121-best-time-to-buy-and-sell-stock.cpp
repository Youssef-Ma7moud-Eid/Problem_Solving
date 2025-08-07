class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxnum=0,num=prices[0];
        for(int i=0;i<prices.size();++i)
        {
          if(prices[i]>num)
          {
            maxnum=max(prices[i]-num,maxnum);

          }
        else
          {
            num=prices[i];
          }
        }





        return maxnum;
    }
};