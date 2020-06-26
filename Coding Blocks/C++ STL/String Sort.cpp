#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int compare(string a,string b)
{
	int x=min(a.size(),b.size());
	int j=0;
	
  for(int i=0;i<x;i++)
    if(a[i]==b[i])
    j++;

  if(j==x)
    return a>b;
  else
	  return a<b;
}
int main() {
	vector<string> v;
	int n;
	cin>>n;
	string a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),compare);
	
  for(auto c:v)
	  cout<<c<<endl;
	return 0;
}
