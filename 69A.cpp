
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector <int >v1;
vector <int  >v2;
vector <int >v3;
for(int i=0;i<n;i++){
int x,y,z;
cin>>x>>y>>z;
v1.push_back(x);
v2.push_back(y);
v3.push_back(z);


}
int sumx=0;
int sumy=0;
int sumz=0;
for(int i =0;i<n;i++){
   sumx=sumx+v1[i];
   sumy=sumy+v2[i];
   sumz=sumz+v3[i];
}
    if(sumx==0&&sumy==0&&sumz==0){
        cout<<"YES"<<endl;
    }


else{
    cout<<"NO"<<endl;
}


    
    return 0;
}