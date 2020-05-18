#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    while(n!=0&&m!=0){
    set<int> jack;
    //set<int>jill;
    int x;
    for(int i=0;i<n+m;i++){
        
        scanf("%d",&x);
        jack.insert(x);
    }
    /*for(int i=0;i<m;i++){
        scanf("%d",&x);
        jill.insert(x);
    }*/
    cout<<(n+m)-jack.size()<<endl;
    /*vector<int> output;
    auto it = set_intersection(jack.begin(), jack.end(), jill.begin(), jill.end(), output.begin());
    output.resize(it - output.begin());
    cout<<output.size()<<endl;*/
    scanf("%d%d",&n,&m);   
    }
    return 0;
    
    
}