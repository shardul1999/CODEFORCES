// C++ code for reversing a queue
#include <bits/stdc++.h>
using namespace std;

// Utility function to print the queue
void printQueue(queue<long long int> Queue)
{
	while (!Queue.empty()) {
		cout << Queue.front() << " ";
		Queue.pop();
	}
}

// Recursive function to reverse the queue
void reverseQueue(queue<long long int>& q)
{
	// Base case
	if (q.empty())
		return;

	// Dequeue current item (from front)
	long long int data = q.front();
	q.pop();

	// Reverse remaining queue
	reverseQueue(q);

	// Enqueue current item (to rear)
	q.push(data);
}

// Driver code
int main()
{
	    queue<long long int> q;
    int n;
    cin>>n;
  // q.push("END");
   //cout<<q.front();

        long long int f;
  for(int i=0;i<n;i++)
    {
        cin>>f;
        q.push(f);
    }
	reverseQueue(q);
	printQueue(q);
	cout<<"END";
}
