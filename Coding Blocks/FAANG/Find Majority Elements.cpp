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

vector<int> appearsNBy3(vector<int> arr, int n) 
{ 
	int count1 = 0, count2 = 0; 
	int first=INT_MAX , second=INT_MAX ; 

	for (int i = 0; i < n; i++) { 

		// if this element is previously seen, 
		// increment count1. 
		if (first == arr[i]) 
			count1++; 

		// if this element is previously seen, 
		// increment count2. 
		else if (second == arr[i]) 
			count2++; 
	
		else if (count1 == 0) { 
			count1++; 
			first = arr[i]; 
		} 

		else if (count2 == 0) { 
			count2++; 
			second = arr[i]; 
		} 

		// if current element is different from 
		// both the previously seen variables, 
		// decrement both the counts. 
		else { 
			count1--; 
			count2--; 
		} 
	} 

	count1 = 0; 
	count2 = 0; 

	// Again traverse the array and find the 
	// actual counts. 
	for (int i = 0; i < n; i++) { 
		if (arr[i] == first) 
			count1++; 

		else if (arr[i] == second) 
			count2++; 
	} 
    vector<int> f;

	if (count1 > n / 3) 
		f.push_back(first); 

	if (count2 > n / 3)
		f.push_back(second);

	return f; 
} 

int32_t main() 
{ 
     int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
   {
       int k;cin>>k;
         a.pb(k);
    }
    vector<int> ans=appearsNBy3(a, n);
    if(ans.size()==0)
        cout<<"No Majority Elements";
        else
    for(int i=0;i<ans.size();i++)//:(majority_element(a)))
    {
        cout<<ans[i]<<" ";
    }
	return 0; 
} 

