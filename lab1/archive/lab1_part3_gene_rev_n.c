#include <stdio.h>
#include <stdlib.h>

// to write this algorithm, I used the "Reversing Digit by Digit" method from: 
// https://www.geeksforgeeks.org/dsa/write-a-program-to-reverse-digits-of-a-number/
int reverseDigits(int n)  
{
   int revNum = 0; // initial "reversed" number
   while (n > 0) { 
      revNum = revNum * 10 + n % 10; // append the right-most digit to the reversed number by taking the remainder of the original number and iterating through each digit, right to left 
      n = n / 10; // cut off the right-most value for the next loop
   }
   return revNum; // return the fully reversed number to where the function was called (line 23)
}  

// argc is the # of inputs, *argv[] is the actual input
int main(int argc, char *argv[]) 
{
   if (argc != 2) // check # of arg to make sure its only ./gene_rev_n.out and n. Not required, but helps to prevent breaking the code.  
   {
      return 1; // if argc != 2, exit code 
   }
   
   int n = atoi(argv[1]); // convert the input string (chars) ASCII to int
   printf("%d\n", reverseDigits(n)); // print reversed number to console for .py file to capture through PIPE container

   return 0;
}

