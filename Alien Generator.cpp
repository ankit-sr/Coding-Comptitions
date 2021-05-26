#include<bits/stdc++.h>
using namespace std;

bool canitfindsum(long i, long n){
	long long sum=0;
	while(sum<n){
		sum+=i;
		i++;
	}
	if(sum==n)
		return true;
	else
		return false;
	
}

long findCount(long n){
	long count=0;
	for(long i=1; i<=n; i++){
		if(canitfindsum(i,n))
			count++;
		}
		return count;
	}

int main(){
	long t; cin>>t;
	long c=1;
	while(t--){
		long n; cin>>n;		
		cout<<"Case #"<<c++<<": "<<findCount(n)<<endl;
	}
	return 0;
}



