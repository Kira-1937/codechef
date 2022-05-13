
using namespace std;
#include<bits/stdc++.h>

int main() {
    int t;
    cin >>t;
    
    while(t--){
         
    
	set <int > s1;
	set <int > s2;
	int n ;
	cin>>n;
	for (int i =0;i<n;i++){
	    int k;
	    cin>>k;
	    s1.insert (k);
	}
	for (int i =0;i<n;i++){
	    int k;
	    cin>>k;
	    s2.insert (k);
	}
	auto it=s1.begin();
	auto it2=s2.begin();
	for(it=s1.begin();it!=s1.end();it++){
	    cout<<(*it)<<" "<<(*it2)<<" ";
	    it2++;
	}
	}
	return 0;
}
