#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    scanf("%d%d",&n,&x);
    vector<int> prices;
    int a;
    while(n--){
        scanf("%d",&a);
        prices.push_back(a);
    }
    int count=1;
    sort(prices.begin(),prices.end());
    for(int i=0;i<prices.size()-1;i++){
        if(prices[i]+prices[i+1] > x)
            break;
        else count++;
    }
    cout<<count<<endl;
}