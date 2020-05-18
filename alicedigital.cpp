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
    int x;
    cin>>x;
    while(x--){
        int n,m;
        scanf("%d%d",&n,&m);
        vector<int> weights;int num;
        for(int i=0;i<n;i++){
            scanf("%d",&num);
            weights.push_back(num);
        }
        int mx=m;
        for(int i=0;i<weights.size();i++)
        {
            if(weights.at(i)==m){
                int j=i-1;int k=i+1;
                int temp=m;
                while(j>=0&&weights.at(j)>m){
                    temp+=weights.at(j);
                    j--;
                }
                while(k<weights.size()&&weights.at(k)>m){
                    temp+=weights.at(k);
                    k++;
                }
                mx = max(mx,temp);
                
            }
        }
        cout<<mx<<endl;
        
    }
}