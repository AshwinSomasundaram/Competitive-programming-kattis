#include<iostream>
#include<math.h>
#include<iomanip>
#include <vector>
#include <set>
#include<map>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    long x;
    vector<long> times;
    while(n--){
        cin>>x;
        times.push_back(x);
    }
    sort(times.rbegin(),times.rend());
    long max = times.at(0);
    long sum=0;
    for(long i:times){
        sum+=i;
    }
    sum-=max;
    if(max>sum){
        cout<<(max-sum)+max+sum<<endl;
    }
    else{
        cout<<max+sum<<endl;
    }
    
}