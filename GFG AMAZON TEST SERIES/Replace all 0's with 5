int convertFive(int n) {
     if (n == 0) 
        return 0; 
  
    // Extraxt the last digit and  
    // change it if needed 
    int digit = n % 10; 
    if (digit == 0) 
        digit = 5; 
  
    // Convert remaining digits and  
    // append the last digit 
    return convertFive(n/10) *  
                       10 + digit; 
    // Your code here
}
