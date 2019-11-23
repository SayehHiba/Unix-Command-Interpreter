#include<stdio.h>

void main(int argc, char* argv[]){

int status;
status=remove(argv[1]);
if(status==0)
  {
    printf("La suppression a été établie avec réussite\n");
  }
else
   {
    printf("le fichier n'existe pas, merci de vérifier l'existence du fichier à supprimer\n");
	 
   }
}
