#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char str[1000];
    cin>>str;
    str[0]=toupper(str[0]);
    cout<<str;

    return 0;
}
