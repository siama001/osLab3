#include "test_call.h"
#include <stdio.h>


int main (void)
{
        char * buffer0, buffer1, buffer2, buffer3, buffer4, buffer5, buffer6, buffer7;

        buffer0 = (char*) malloc (90060);
        buffer1 = (char*) malloc (345555);
        buffer2 = (char*) malloc (1234);
        buffer3 = (char*) malloc (145554);
        buffer4 = (char*) malloc (55630);
        buffer5 = (char*) malloc (1056665);
        buffer6 = (char*) malloc (1053425550);
        buffer7 = (char*) malloc (10000233);
	printf("Memory Free: %d bytes\n", syscall(__NR_get_slob_amt_free));
        printf("Memory Claimed: %d bytes\n", syscall(__NR_get_slob_amt_claimed));
	int i;
        for (i=0; i<59; i++)
        {
         FILE *fp;
	 fp = fopen("/tmp/test.txt", "w+");
  	 fprintf(fp, "This is testing for fprintf...\n");
  	 fputs("This is testing for fputs...\n", fp);
	 fclose(fp);
        }
	printf("\n--------file i/O\nMemory Free: %d bytes\n", syscall(__NR_get_slob_amt_free));
        printf("Memory Claimed: %d bytes\n", syscall(__NR_get_slob_amt_claimed));
        return 0;
}
