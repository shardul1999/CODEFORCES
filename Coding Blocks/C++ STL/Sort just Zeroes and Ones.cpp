#include<iostream>
#include<algorithm>
#define fo(x)	for(int i=0;i<x;i++)
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
//	for(int i=0;i<n;i++)
    fo(n)
	cin>>a[i];
	sort(a,a+n);
	fo(n)
	cout<<a[i]<<" ";
	
	return 0;
}
