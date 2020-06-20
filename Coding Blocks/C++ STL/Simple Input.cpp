#include<iostream>
using namespace std;
int main() {
	int tot=0,k=0,a,b[10000];
	for(int i=0;;i++)
	{
		cin>>a;
		tot+=a;
		k++;
		if(tot<0)
		break;
		b[i]=a;
	}
	for(int i=0;i<k-1;i++)
	cout<<b[i]<<endl;
	return 0;
}
