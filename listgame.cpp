#include<bits/stdc++.h>

using namespace std;
  

void primeF(long n)
{
   
    int count=0;
    while (n % 2 == 0)
    {
        count++;
        n = n/2;
    }
  
  
    for (long i = 3; i <= sqrt(n); i = i + 2)
    {
       
        while (n % i == 0)
        {
            count++;
            n = n/i;
        }
    }
  
    if (n > 2)
        count++;
    cout<<count<<endl;
}
  

int main()
{
    long x;
    scanf("%ld",&x);
    primeF(x);
    return 0;
}