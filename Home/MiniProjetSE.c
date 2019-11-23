#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>  
#include <unistd.h>
#include <sys/stat.h>


typedef struct fichier{
char path[128];//ligne qui contient le mot path dans le fichier profile
char home[128];//ligne qui contient le mot home dans le fichier profile
 
}Fichier;
int isFileExistsAccess(const char *path)
{
    
    if (access(path, F_OK) == -1)
        return 0;
    
    return 1;
}
char * substr(char *src,int pos,int len) { 
  char * dest=NULL;                        
  if (len>0) {                  
    /* allocation et mise à zéro */          
    dest = calloc(len+1, 1);      
    /* vérification de la réussite de l'allocation*/  
    if(NULL != dest) {
        strncat(dest,src+pos,len);            
    }
  }                                       
  return dest;                            
}

int main(void){
	Fichier fich; // fich est une instancation d'enregistrement Fichier
	// FILE* f = NULL;
    //int caractereActuel = 0;
	char  DebutlineFichier[100];//4 premier caractères de fichier 
	//char  test1[100];
    
	int choixMenu;//valeur de choix a partir de menu
	int sorti=0;// valeur pour sortir de programme
	
	char nom[100];//nom fichier ou dossier
	FILE* ff;//fichier pour executer une liste des commande
	char alias[100];//valeur d'alias
 //char Valias[500];
//char buf[100];
//char text[100];
int q;//test de sortie de menu apres l'execution de chaque commande
int d;//test de retour de fonction system
    setbuf(stdout, NULL);     
	 char chaqueCmd [500]="";
 char varInterne[500]="";   
 char path[500]="";//repertoir path 
 char p[500]="";//valeur intermedire pour manipuler les chaines
  char home[500]="";//repertoir home

    static const char filename[] = "profile.txt";//nom fichier profile
   FILE *file = fopen ( filename, "r" );//fichier profile
   if ( file != NULL )
   {
      char  line [ 128 ]; /* or other suitable maximum line size */
  int i=0;
      while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
      {
		
		
		  strncpy(DebutlineFichier,line,4);   			 
		
		  
if(strcmp(strncpy(DebutlineFichier,line,4),"Path")==0){strcat(fich.path,line);}
if(strcmp(strncpy(DebutlineFichier,line,4),"Home")==0){strcat(fich.home,line);}

      }
	
      fclose ( file );
   }
   else
   {
      perror ( filename ); /* why didn't the file open? */
   }

 
	 
 if(fich.path!=NULL)
	  {
		  if(fich.home==NULL)
		  {
			  printf("le fichier ne contient pas un home\n");
		  return 0;
		  }
		  
	  }else
		  {printf("le fichier ne contient pas un path\n");
	  return 0;}

strcat(varInterne,fich.path+5);
strncat(path,varInterne,strlen(varInterne)-1);
strcat(home,fich.home+5);

int valide=0;
		int r=0;
int tabb[10]={};
int n=0;
for(int i=0;i<strlen(path);i++)
{
	
	if(path[i]=='|')
	{
		tabb[n]=i;
				

		n++;
	}
}
int preeee;
	int ind;
	
		char * tabDeExecution[100]; 
int choice;
char * tabch[10];
int a=0;
char * chaine1;
int pre=0;
int tableau[100];
int indextableau;
int parcour;
for(int i=0;i<n;i++){

	tabch[a]=substr(path,pre,tabb[i]-pre);
	a++;
	pre=tabb[i]+1;
}
tabch[a]=substr(path,pre,strlen(path));
 Sleep(1000);
 while(sorti==0){
 
	  printf("\n---Menu---\n\n");
    printf("1.Affichage De Contenu de Répertoire\n");
    printf("2.Affichage Des Processus\n");
    printf("3.Affichage De Répertoire Courant\n");
    printf("4.Creation D'un Dossier\n");
    printf("5.Creation D'un Fichier Et Ecrire le Contenu \n");
    printf("6.Lire Le Contenu D'un Fichier\n");
    printf("7.Suppression D'un Dossier \n");
    printf("8.Suppression D'un Fichier \n");
	printf("9.Comptage D'un Fichier\n");
	printf("10.Executer les commandes a partir d'un fichier \n");
	printf("11.Executer une alias\n");
	printf("12.Redirection des entres/sorties\n");
	printf("13.Executer une commande composer\n");
    printf("14.Quitter\n");
 printf("\nVotre choix?\n\n");
 scanf("%d", &choixMenu);
 
  switch (choixMenu){
	  case 1:
        
		
    r=0;
		for(int i=0;i<=a;i++){
						sprintf(p, "%s/AffichageContenuRepertoire.exe",tabch[i]);

			if (isFileExistsAccess(p))
    {
		
		printf("Le Contenu De Ce Répertoire est: \n");
		system(p);
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
       
		Sleep(100);
		
	
		printf("Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        }
        break;
    case 2:
       
		
		
		 r=0;
		for(int i=0;i<=a;i++){
			sprintf(p, "%s/AffichageProcessus.exe", tabch[i]);

			if (isFileExistsAccess(p))
    {
		
 printf("Liste Des Proccesus : \n");
 system(p);
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
		
		  Sleep(1000);      
		printf(" \n Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        }
        break;
    case 3:
		 r=0;
		for(int i=0;i<=a;i++){
			sprintf(p, "%s/AffichageRepertoireCourant.exe", tabch[i]);

			if (isFileExistsAccess(p))
    {
		
 system(p);
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
	
		printf("Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        }
        break;
    case 4:
        
		
				 r=0;
		for(int i=0;i<=a;i++){
			sprintf(p, "%s/CreationDossier.exe", tabch[i]);
	

			if (isFileExistsAccess(p))
    {
		printf("Pour Créer Un Dossier : \n");
       printf("Donner Le Nom De Dossier :");
        scanf("%s", nom);
		strcat(p," ");
		strcat(p,nom);
 d=system(p);
 if(d==0){		 	printf("le dossier est creer avec succes\n");	
 }else{
	 	printf("le dossier n'est pas creer");

 }
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
		
	
		

		printf("Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        }
        break;
    case 5:

		
		
			 r=0;
		for(int i=0;i<=a;i++){

			sprintf(p, "%s/CreationFichierEtEcrire.exe", tabch[i]);
	

			if (isFileExistsAccess(p))
    {
		 printf("Pour Créer Un Ficher : \n");
        printf("Donner Le Nom De Fichier :");
        scanf("%s", nom);
		printf("Ecrire le contenu de Fichier (cliquer ctrl + c pour quitter) :");

		strcat(p," ");
		strcat(p,nom);
 d=system(p);
 if(d==0){		 		printf("le fichier est creer avec succes\n");	
	
 }else{
	 
	printf("le fichier n'est pas creer");

 }
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin'%s'\n", tabch[i]);}
		r++;
    }
			
		}
	

		printf("Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        }        break;
    case 6:
	
	
			 r=0;
		for(int i=0;i<=a;i++){

			sprintf(p, "%s/LireLeContenu.exe", tabch[i]);
	

			if (isFileExistsAccess(p))
    {
		 printf("Pour lire le contenu Ficher : \n");
        printf("Donner Le Nom De Fichier :");
        scanf("%s", nom);

		strcat(p," ");
		strcat(p,nom);
 d=system(p);
 if(d==0){		 		
 }else{
	 
printf("le fichier n'existe pas \n");
 }
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
	
       
		
	
		printf("Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        } 
        break;
    case 7:
	
	
	
			 r=0;
		for(int i=0;i<=a;i++){

			sprintf(p, "%s/SuppressionDossier.exe", tabch[i]);
	

			if (isFileExistsAccess(p))
    {
		
	printf("Pour supprimer un dossier : \n");
        printf("Donner Le Nom De dossier :");
        scanf("%s", nom);
		strcat(p," ");
		strcat(p,nom);
 d=system(p);
 if(d==0){		 		
 	printf("le dossier est supprimer\n");
 }else{
	 
	printf("le dossier n'est pas supprimer");	

 }
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
	
		printf("Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        } 
		break;
    case 8:
	
	
	
			 r=0;
		for(int i=0;i<=a;i++){

			sprintf(p, "%s/SuppressionFichier.exe", tabch[i]);
	

			if (isFileExistsAccess(p))
    {
		
	printf("Pour supprimer un fichier : \n");
        printf("Donner Le Nom De Fichier :");
        scanf("%s", nom);
		strcat(p," ");
		strcat(p,nom);
 system(p);
	}
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
	

		printf("Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        } 
		break;
		case 9: 
		 r=0;
		for(int i=0;i<=a;i++){
						sprintf(p, "%s/ComptageFichier.exe",tabch[i]);

			if (isFileExistsAccess(p))
    {
		
		printf("Pour Comptage D'un Fichier: \n");
		system(p);
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
       
		Sleep(100);
		
	
		printf("\nSi Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        }
		
		break;
		case 10:
         
		 
		 
		 ind=0;
 parcour=0;
 indextableau=0;
 preeee=0;

 char ftxt[50];
 ff = NULL;
    char chaine[500] = ""; // Chaîne vide de taille TAILLE_MAX
 printf("Entrez votre fichier txt : ");
	  scanf("%s",ftxt);
    ff = fopen(ftxt, "r");
 if (ff==NULL){
	 printf("fichier introuvable");
	 break;
 }
    if (ff != NULL)
    {
        fgets(chaine, 500, ff); // On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
 
        fclose(ff);
    }
         //printf("%s", chaine); // On affiche la chaîne
for(int i=0;i<strlen(chaine);i++){
	 if(chaine[i]==';'){
				tableau[indextableau]=i;
				indextableau++;
			}
 }
 
	for(int i=0;i<indextableau;i++){
		tabDeExecution[ind]=substr(chaine,preeee,tableau[i]-preeee);
		ind++;
		preeee=tableau[i]+1;
	}	
	tabDeExecution[ind]=substr(chaine,preeee,strlen(chaine));
	

	 
	 int i=0;
	 while(i<=ind){
			r=0;
			for(int j=0;j<=a;j++){
				sprintf(chaqueCmd,"/%s",tabDeExecution[i]);
				
										sprintf(p, "%s",tabch[j]);

				strcat(p,chaqueCmd);
         
			
			
			
			

			if (isFileExistsAccess(p))
    {
					printf("\n%s\n",chaqueCmd);

		system(p);
		i++;
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[j]);}
		r++;
    }
			}
	}
	 
	
       
		
	 
 
		 break;
        case 11:
				

printf("pour executer une alias \n");
		printf("ecrire l'alias : ");
				scanf("%s",alias);
				if(strcmp(alias,"LL")==0){
					system("ls -l");
				}else{
					if(strcmp(alias,"GS")==0){
					system("git status");
				}else{
				if(strcmp(alias,"LF")==0){
					system("ls -F");
				}
			else{
                if(strcmp(alias,"LA")==0){
					system("ls -A");
				}
				else{
					printf("alias introuvable");
			}}
				}	
				}
				
        break;
		case 12:
          printf("\n\n\t\t\t*MENU*\n");
	        printf("          \n \
	                1. Sortie standard et redirection(>) \n \
	                2. Entrée standard et redirection(<)\n \
	                3. Connecter deux commandes (|)\n \
	                ");
	        printf("Entrez votre choix: ");
	        scanf("%d", &choice);
	        switch(choice) {
	            case 1:
				r=0;
		for(int i=0;i<=a;i++){
						sprintf(p, "%s/redirection1.exe",tabch[i]);

			if (isFileExistsAccess(p))
    {
		
		
		system(p);
		
		printf(" Le fichier est rempli \n");
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
       
				
	                break;
	            case 2:
	                	r=0;
		for(int i=0;i<=a;i++){
						sprintf(p, "%s/redirection2.exe",tabch[i]);

			if (isFileExistsAccess(p))
    {
		
		system(p);
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
	                break;
	            case 3: 	
				r=0;
		for(int i=0;i<=a;i++){
						sprintf(p, "%s/pipe.exe",tabch[i]);

			if (isFileExistsAccess(p))
    {
		
		system(p);
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
			     break;
				default:
        printf("il faut choisir un nombre entre 1 et 3 \n");
        break;
		 
			}
			Sleep(100);
		
	
		printf("Si Vous Voulez Quitter Taper 1 : ");
        scanf("%d",&q);
        if(q==1){
	     sorti=1;
        }
        break;
		case 13:
				r=0;
		for(int i=0;i<=a;i++){
						sprintf(p, "%s/CommandeComposer.exe",tabch[i]);

			if (isFileExistsAccess(p))
    {
		printf("Executer une commande composer : \n");
   
		system(p);
    }
    else
    {
		if(r==a){
        printf("Le fichier n'existe pas au chemin '%s'\n", tabch[i]);}
		r++;
    }
			
		}
		
		
        break;
		case 14:
         sorti=1;
        break;
    default:
        printf("choisir un nombre entre 1 et 14");
        break;
  }
  
 }
  
}