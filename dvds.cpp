#include<bits/stdc++.h>
using namespace std;

int main(){
    int times;
    cin>>times;
    for(int abc=0;abc<times;abc++){
        int num=0;
        cin>>num;
        vector<int> numbers;
        for( int i=0;i<num;i++){
            int x;
            cin>>x;
            numbers.push_back(x);
        }
        int count =0;
        for(auto i : numbers){
            if(i==count+1){
                count++;
            }
        }
        cout<<num-count<<endl;
    }
    return 0;
}