#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int s;
	cin>>s;
	while(s>0)
	{
		cout<<s%10;
		s=s/10;
	}
	return 0;

}
