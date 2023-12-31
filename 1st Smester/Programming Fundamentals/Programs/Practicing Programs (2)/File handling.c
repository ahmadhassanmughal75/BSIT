
// C Program to demonstrate fscanf
#include <stdio.h>
 
// Driver Code
int main()
{
	char name[50] = "Umair Malik";
    FILE* ptr = fopen("abcd.txt", "w");
    if (ptr == NULL) {
        printf("no such file.");
        return 0;
    }
    fprintf(ptr, "%s", name);
 
    /* Assuming that abc.txt has content in below
       format
       NAME    AGE   CITY
       abc     12    hyderabad
       bef     25    delhi
       cce     65    bangalore */
    char buf[50];
    while (fscanf(ptr, "%*s", buf) == 1)
        printf("%s\n", buf);
 
    return 0;
}
