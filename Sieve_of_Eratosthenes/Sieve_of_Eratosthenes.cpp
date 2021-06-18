
// Importing Libraries
#include <bits/stdc++.h>
using namespace std;
 
// implementing the function of Sieve of Eratosthenes
void Sieve_of_Eratosthenes(int n)
{
  // Creating a boolean array and 
  // keeping all the entries as true.
 
  // entry will become false later on in case 
  // the number turns out to be prime.
  bool prime_list[n + 1];
 
  // setting all entries to true.
  memset(prime_list, true, sizeof(prime_list));
 
  for (int number = 2; number * number <= n; number++)
  {
     // It is a prime if prime_list[number] doesn't change.
     if (prime_list[number] == true)
     {
        // Updating the multiples of the "number" greater
   // than or equal to the square of this number.
        // all the numbers which are multiple of "number" and
   // are less than number2 have already been marked.
        for (int i = number * number; i <= n; i += number)
           prime_list[i] = false;
     }
  }
 
  // To print all the prime numbers
  for (int i = 2; i <= n; i++)
     if (prime_list[i])
        cout << i << " ";
}
 
// Driver Function
int main()
{
  int n = 40;
  cout << "The prime numbers less than or equal to "<< n;
  cout << " are as follows: - " << endl;
  Sieve_of_Eratosthenes(n);
  return 0;
}
