#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main ()
{
      FILE *infileptr;
      char infile[80];
      long int nl = 0;
      long int nc = 0;
      long int nw = 0;
      int state = 0;
      const int  NEWLINE = '\n';
      int  c;
	   setbuf(stdout, NULL); 
	    char ftxt[50];
/*  The program name itself is the first command line arguement so we
    ignore it (argv[0]) when showing user entered parameters. */
     
	  printf("Entrez le nom de fichier txt : ");
	  scanf("%s",ftxt);	
      strcpy(infile,ftxt);
      infileptr = fopen(infile,"rb" );
      if (infileptr == NULL)
      {
            printf("impossible d'ouvrir  %s\n",infile);
            return 12;
      }
      while ((c = getc(infileptr)) != EOF)
      {
            ++nc;
            if (c == NEWLINE)
                  ++nl;
            if (isspace(c))
                  state = 0;
            else if (state == 0)
            {
                  state = 1;
                  ++nw;
            }
      }
      /* Final Housekeeping */
      printf("Lignes% ld, mots% ld, caractères% ld", nl, nw, nc);
      return 0;
}