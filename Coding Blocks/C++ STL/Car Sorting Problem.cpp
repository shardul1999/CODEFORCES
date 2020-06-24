#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
#define ll long long

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

class Car
{
public:
    string car_name;
    int x,y;
    Car(){
    }
    Car(string n,int x,int y)
    {
        this->car_name=n;
        this->x=x;
        this->y=y;
    }
    int dist()
    {
        return x*x+y*y;
    }

};
bool compare(Car A, Car B)
{
    int d1=A.dist();
    int d2=B.dist();
    if(d1==d2)
        return A.x<B.x;
    return d1<d2;
}
int32_t main()
{
    vector<Car> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int a,b;
        cin>>name>>a>>b;
        Car temp(name,a,b);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);//solve(v);

    for(auto c:v)
        cout<<c.car_name<<endl;
	return 0;
}
