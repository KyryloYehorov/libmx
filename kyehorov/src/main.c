#include "../inc/header.h"

int main(void)
{
char *p;
p = (char *) malloc(17);
if(!p) {
printf("Allocation error.");
exit (1);
}
strcpy(p, "This is 16 chars");
p = (char *) mx_realloc (p,18);
   if(!p) {
      printf("Allocation error.");
   exit (1);
   }
mx_strcat (p, ".");
printf("%s", p);
free(p);
return 0;
}
