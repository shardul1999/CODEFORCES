#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],mini=101;
	cin>>a[0];
	int result=a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		result=__gcd(result,a[i]);
	}

	cout<<result;

	return 0;
}
