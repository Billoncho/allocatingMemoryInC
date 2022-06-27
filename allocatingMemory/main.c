/*
Author:     Billy Gene Ridgeway
Purpose:    To learn how to properly allocate memory.
Date:       June 27th. 2022
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>     // The malloc or memory allocation is used to dynamically allocate a single large block of memory with the specified size.

#define MAXSTRLEN 100   // Define a constant to one hundred.

char * string_function(char *astring) {
    char* s;                                // Declare variable 's' to be a pointer to a char or array of chars, the beginning of a string.
    s = (char*)malloc(MAXSTRLEN);           // Allocates 100 bytes of memory to the string array 's'. Enough for 100 alpha numeric characters.
    s[0] = 0;                               // Initializes the first element to null which creates an empty string.
    strcat(s, "Hello ");                    // Concatenates "Hello" into the string argument 's'.
    strcat(s, astring);                     // Concatenates whatever is passed into the string_function, into the string argument 's'.
    strcat(s, "!\n");                        // Concatenates the new line character into the string argument 's'.
    return s;                               // Returns string 's'.
}

int main(int argc, char **argv)             // argc gives us the number or count of arguments. **argv is a pointer to a pointer that points to a char.
                                            // argv is initialized with any char arguments passed into the main function.

{
    printf(string_function("Fred"));                // Calls the string_function, passes in "Fred" and prints out what the function returns.
    printf(string_function("Gussie Fink-Nottle"));  // Calls the string_function, passes in "Gussie Fink-Nottle" and prints out what the function returns.

    return 0;
}
