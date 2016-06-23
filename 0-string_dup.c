#include <stdio.h>
#include <stdlib.h>

char *string_dup(char *str){
  char *d = malloc (strlen (str) + 1);
  if  (d == NULL) return NULL;
  strcpy (d,s);
  return d;


}
//
// char *strdup (const char *s) {
//     char *d = malloc (strlen (s) + 1);   // Space for length plus nul
//     if (d == NULL) return NULL;          // No memory
//     strcpy (d,s);                        // Copy the characters
//     return d;                            // Return the new string
// }
