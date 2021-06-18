class Sieve_of_Eratosthenes {
 
   // implementing the function of Sieve of Eratosthenes
   void Sieve_of_Eratosthenes(int n)
   {
      
       // Creating a boolean array and
  // keeping all the entries as true.
       // entry will become false later on in case
  // the number turns out to be prime.
       boolean prime_list[] = new boolean[n + 1];
       Arrays.fill(prime_list,true);
 
       for (int number = 2; number * number <= n; number++)
       {
          
           // It is a prime if prime_list[number]
 // doesn't change.
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
       for (int j = 2; j <= n; j++)
       {
           if (prime_list[j] == true)
               System.out.print(j + " ");
       }
   }
   // Driver Function
   public static void main(String args[])
   {
       int n = 40;
  System.out.print("The prime numbers less than or equal to ");
       System.out.println(n+" are as follows: - \n ");
       Sieve_of_Eratosthenes f = new Sieve_of_Eratosthenes();
       f.Sieve_of_Eratosthenes(n);
   }
}
