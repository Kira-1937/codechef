#include <bits/stdc++.h>
using namespace std;
int step(int n,int p=0){
    if(p>=0)
    {
        p=p-n;
       
    }
    else{
        p=p+n;
     
    }
    return p;
}

int main() {
int t;
cin>>t;
int p;
while(t--){
    int n ;
    cin>>n;
    
    cout<<step(n,p)<<endl;
    
    
    
}
	return 0;
}
