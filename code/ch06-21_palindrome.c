#include<stdio.h>
#include<stdlib.h>

int isPalindrome (char [], int);

int main() {
    char mystr[] = "civil";
    int val;
    
    printf("This is the string: %s\n", mystr);

    val = isPalindrome(mystr, 5);
    
    if(val==1)
              printf("It's a palindrome!\n");
    else      printf("It's not a palindrome.\n");
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//*****************************************
int isPalindrome (char mystr[], int size) {
     int limit_i, i, j, answer;
     
     if(size==1) // if the array has 1 element, it's a palindrome
     return 1;
     
     if(size%2 == 0)      // size is even
               limit_i = (size/2)-1;
     else
               limit_i = (size-3)/2;
     
     answer=1; // Initialize to 1; it's a palindrome
     // Loop to check for palindrome
     j = size-1;
     for(i=0; i<=limit_i; i++) {
           //printf("DEBUG: mystr[%d]=%c, mystr[%d]=%c\n", i,mystr[i],j,mystr[j]);
           if(mystr[i] != mystr[j])
                 answer = 0;
           j--;
     }
     return answer;
}

