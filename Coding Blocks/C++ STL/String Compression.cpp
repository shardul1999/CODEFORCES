#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	int tot=1;
	char j=s[0];
	for(int i=1;i<s.size()+1;i++)
	{
		if(s[i]==j)
		{
			j=s[i];
//			i++;
			tot++;
			//cout<<j;
		}
		else //if(tot>1)
		{
			cout<<j<<tot;
			j=s[i];
//			i++;
			tot=1;
		}
	}
	
	return 0;
}
