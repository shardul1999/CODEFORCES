#include<iostream>
using namespace std;
string solve(int a[],int key,int j,int n)
{
	if(a[j]==key)
	return "true";
	else if(j==n)
	{
		return "false";
	}
	else
	{
		j++;
	return solve(a,key,j,n);
	}
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int key;
	cin>>key;
	int j=0;
	cout<<solve(a,key,j,n);
	return 0;
}
