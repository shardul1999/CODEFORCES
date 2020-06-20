// STEP 1: TOKENISATION OF STRINGS
// CONVERT TO INTEGERS IF ASKED FOR NUMERIC
//

#include<iostream>
#include <stdio.h>
#include <cstring>
#include<algorithm>
using namespace std;

string token(string str,int key)
{
    char *a=strtok((char *)str.c_str()," ");
    while(key>1)
    {
        a=strtok(NULL," ");
        key--;
    }
    return (string)a;
}

int stringtointeger(string s)
{
    int ans=0;
    int p=1;
    for(int i=s.size()-1;i>=0;i--)
    {
        ans+=(s[i]-'0')*p;
        p*=10;
    }
    return ans;
}

bool num_compare(pair<string,string> s1,    pair<string,string> s2)
{
    string key1=s1.second;
    string key2=s2.second;
    return stringtointeger(key1) < stringtointeger(key2);

}


bool lexo_compare(pair<string,string> a,pair<string,string> b)
{
    return a.second<b.second;
}
/*
3
92 022
82 12
77 13
2 false numeric
*/

int main()
{
    string s[1000];
	int n,l;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++){
		getline(cin,s[i]);}

	int key;
	string ordering,reversal;
    pair<string,string> strpair[100];
	cin>>key>>reversal>>ordering;
	for(int i=0;i<n;i++){
        strpair[i].first=s[i];
        strpair[i].second=token(s[i],key);
    }
    //cout<<(strpair[0].second);
    if(ordering == "numeric")
    {
        sort(strpair,strpair+n,num_compare);
    }
    else
        sort(strpair,strpair+n,lexo_compare);

    if(reversal=="true")
    {
        for(int i=0;i<n/2;i++)
            swap(strpair[i],strpair[n-i-1]);
    }

    for(int i=0;i<n;i++)
    cout<<(strpair[i].first)<<endl;

	return 0;
}
