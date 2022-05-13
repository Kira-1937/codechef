

#include<bits/stdc++.h>
using namespace std;




int main(){

int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector <int >v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
  
    
    vector <int >v1;
    
    vector<int >v2;
    for(int  i=0;i<n;i++){
        if(v[i]>=0){
            v1.push_back(v[i]);
        }
        else{
            v1.push_back(0);
        }
    }
     for(int  i=0;i<n;i++){
        if(v[i]<=0){
            v2.push_back((-1)*v[i]);
        }
        else{
            v2.push_back(0);
        }
    }
  int g=v1[0];
  for(int i=1;i<n;i++){
      g=__gcd(g,v1[i]);

  }
   int h=v2[0];
  for(int i=1;i<n;i++){
      h=__gcd(h,v2[i]);
      
  }

     
    cout<<g+h<<"\n";
}
    return 0;
}

    
 