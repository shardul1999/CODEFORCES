# implementing the function of Sieve of Eratosthenes
def Sieve_of_Eratosthenes(n):
  # Creating a boolean array and
  # keeping all the entries as true.
  # entry will become false later on in case
  # the number turns out to be prime.
  prime_list = [True for i in range(n+1)]
  for number in range(2,n):
    
      # It is a prime if prime_list[number] doesn't change.
      if (prime_list[number] == True):
        
          # Updating the multiples of the "number" greater
# than or equal to the square of this number.
          # all the numbers which are multiple of "number" and
          # are less than number2 have already been marked.
          for i in range(number * number, n+1, number):
              prime_list[i] = False
 
  # To print all the prime numbers
  for i in range(2, n+1):
      if prime_list[i]:
          print(i)
 
# Driver Function
if __name__=='__main__':
  n = 40
  print("The prime numbers less than or equal to ",end="")
  print(n," are as follows: - ")
  Sieve_of_Eratosthenes(n)
