class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n<=2) return 0;

   vector<bool> isPrime(n+5, true);
    isPrime[0] = isPrime[1] = false;

     for (int i = 2; i * i <= n; i++)
    {
          
        if (isPrime[i])
        {
          
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(int i=2;i<n;i++)
    {
     count+=1? isPrime[i]:0;
    }
   
    return count;
    }
};