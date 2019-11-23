#include<stdio.h> 
  
// chdir function is declared 
// inside this header 
#include<unistd.h>  
int main() 
{    char chaine[255];
    char s[100]; 
  
    // printing current working directory 
printf("Le repertoire courant\n");
    printf("%s\n", getcwd(s, 100)); 
  
  
}