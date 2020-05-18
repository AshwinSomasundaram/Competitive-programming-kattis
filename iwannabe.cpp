#include<bits/stdc++.h>

using namespace std;
bool sort_a(vector<unsigned int> a,vector<unsigned int> b){
    return a.at(0) > b.at(0);
}
bool sort_d(vector<unsigned int> a,vector<unsigned int> b){
    return a.at(1) > b.at(1);
}
bool sort_h(vector<unsigned int> a,vector<unsigned int> b){
    return a.at(2) > b.at(2);
}

int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    vector<vector<unsigned int>> pokenom;
    set <vector<unsigned int>> team;
    while(n--){
        unsigned int a,d,h;
        scanf("%d %d %d",&a,&d,&h);
        vector<unsigned int> temp;
        temp.push_back(a);
        temp.push_back(d);
        temp.push_back(h);
        pokenom.push_back(temp);
        
    }
    sort(pokenom.begin(),pokenom.end(),sort_a);
    for(int i=0;i<k;i++){
        team.insert(pokenom.at(i));
    }
    sort(pokenom.begin(),pokenom.end(),sort_d);
    for(int i=0;i<k;i++){
        team.insert(pokenom.at(i));
    }
    sort(pokenom.begin(),pokenom.end(),sort_h);
    for(int i=0;i<k;i++){
        team.insert(pokenom.at(i));
    }
    cout<<team.size()<<endl;
    
    
    return 0;
    
    
    
}
