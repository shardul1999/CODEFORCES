#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n,key;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>key;
	reverse(a,a+n);
	int *k=std::find(a,a+n,key);
	int t=k-a;
	cout<<(n-t-1);
	return 0;
}
