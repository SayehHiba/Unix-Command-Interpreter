#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>


int main (int argc, const char * argv[])
{    // OBJECTIFS :    ls > out.txt;
     int out;
	
	  char command[50]; 
	  char ftxt[50];
	  setbuf(stdout, NULL);  
	  printf("Entrez votre commande : ");
	  scanf("%[^\n]",command);
     char * arg[2] = { command, NULL };
     
     //DESCRIPTEURS
	 printf("Entrez votre fichier txt : ");
	  scanf("%s",ftxt);
	  
     out = open(ftxt, O_WRONLY|O_TRUNC|O_CREAT, 0666);// Conditions pour eviter le rejet par exemple si le fichier existe pas, le crée.
     //REDIRECTION VERS LE FICHIER  TEST
     dup2(out,1);
     execvp("ls", arg);
	 
     printf ("erreur %d : %s\n", errno, strerror (errno));
	 
     return 1;
}