#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	if(a[i]==0)
	cout<<a[i]<<endl;
	for(int i=0;i<n;i++)
	if(a[i]==1)
	cout<<a[i]<<endl;
	for(int i=0;i<n;i++)
	if(a[i]==2)
	cout<<a[i]<<endl;
	return 0;
}
