using namespace std;
#include<bits/stdc++.h>
int main(){
    int t;
    cin>>t;
    while (t--){
int n,d;
cin>>n>>d;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
map<int ,int >mp;
for(int i=0;i<n;i++){
    int k1;
    cin>>k1;
    mp.insert({arr[i],k1});
}
int max=0;
auto it=mp.begin();
for(it =mp.begin();it!=mp.end();it++){
    if((((*it).first)+((*it).second))>max){
        max=int ((*it).first)+((*it).second));
    }
}
cout<<max<<"\n";



    }
}