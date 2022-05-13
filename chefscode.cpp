#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    long long k;
    long long l=sqrt(n);
    for(long long i=2;i<=l;i++){
        if(n%i==0){
            k=i;
            break;
        }
    }
    
    cout<<k<<"\n";
    }
	
	return 0;
}
