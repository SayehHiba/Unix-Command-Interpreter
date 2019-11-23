#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>


int main (int argc, const char * argv[])
{    
	  char command[50]; 
	  char ftxt[50];
	  setbuf(stdout, NULL); 
   
	  printf("Entrez votre commande composer : ");
	  gets(command);
system(command);
     return 1;
}