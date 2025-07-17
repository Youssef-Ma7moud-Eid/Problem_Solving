class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size() - 1;

 if (digits[size] <= 8)
 {
     digits[size]++;
     return digits;
 }
 else {
     bool flag = true;
     for (int i = size; i >= 0; i--)
     {
         if (digits[i] <= 8)
         {
             digits[i]++;
             flag = false;
             break;
         }
         else {
             digits[i] = 0;
         }
     }
     if (flag)
     {
         vector<int>digits2(size + 2);
         digits2[0] = 1;
         for (int i = 1; i <= size+1; i++)
         {
             digits2[i] = 0;
         }
         
         return digits2;
        
     }
     else {
         return digits;
        
     }
    
 }
    }

       
    
};