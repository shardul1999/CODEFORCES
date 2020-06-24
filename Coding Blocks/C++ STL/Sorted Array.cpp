#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	int tot=0;
	for(int i=0;i<n;i++)
	if(a[i]==b[i])
	tot++;
	if(tot==n)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
