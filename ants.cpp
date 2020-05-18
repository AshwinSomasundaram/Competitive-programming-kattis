
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
    int c;
    cin>>c;
    while(c--){
        int l,n;
        scanf("%d%d",&l,&n);
        int min=l;
        int mn=0,mx;
        int max=0;
        double half = (double)l/2;
        //cout<<half;
        int x;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            if(abs(half-x)< min){
                min=abs(half-x);
                mn=x;
            }
            if(abs(0-x)>max){
                max = abs(0-x);
                mx =x;
            }
            if(abs(l-x)>max){
                max = abs(l-x);
                mx =x;
            }
            
        }
        if(mn>half){
            cout<<l-mn;
        }
        else{
            cout<<mn;
        }
        cout<<" "<<max<<endl;
        
    }
}