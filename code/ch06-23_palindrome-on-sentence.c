#include<stdio.h>
#include<stdlib.h>

int isPalindrome (char [], int);
int compareChars (char, char);
int isFiller (char);

int main() {
    char mystr[] = "Mrs. Owl ate my metal worm";
    int val;
    
    printf("This is the string: %s\n", mystr);

    val = isPalindrome(mystr, strlen(mystr));
    
    if(val==1)
              printf("It's a palindrome!\n");
    else      printf("It's not a palindrome.\n");
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//*****************************************
int isPalindrome (char mystr[], int size) {
     int i, j, answer;
     
     if(size==1) // if the array has 1 element, it's a palindrome
     return 1;
     
     answer=1; // Initialize to 1; it's a palindrome
     i=0;
     j=size-1;

     // Loop to check for palindrome
     while(i < j) {
         //If mystr[i] is not a letter or a number, increment i
         while(isFiller(mystr[i])==1 && i<=size-1)
             i++;
              
         while(isFiller(mystr[j])==1 && j>=1)
             j--;
         
         //printf("DEBUG: mystr[%d]=%c, mystr[%d]=%c\n", i,mystr[i],j,mystr[j]);
         if( compareChars(mystr[i], mystr[j]) == 0)
              answer = 0;
         
         i++;
         j--;
     }
     return answer;
}
//***********************************
int compareChars (char c1, char c2) {
    int result;
    
    //If character is uppercase, convert to lowercase
    if(c1>='A' && c1<='Z')
               c1 += 32;
    
    if(c2>='A' && c2<='Z')
               c2 += 32;
    
    if(c1==c2) result=1;
    else       result=0;
    
    return result;
}
/**********************
If the char is a letter or a numeral between 0 and 9, it's not a filler.
Otherwise, it is.*/
int isFiller (char c) {
    int result;
    
    if( (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') )
         result = 0;
    else result = 1;
    
    return result;
}
