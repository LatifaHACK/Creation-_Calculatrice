#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//typedef enum{F,T} bool;
int main() {
    float nombre1 , nombre2;
    char op, continuer;
    //bool boole;
    printf("\n%% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %%%% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %%\n");
    printf("\nCe programme vous permet d'effectuer les operations ordinaires sur un ensemble de nombes de votre choix\n");     
    printf("\n%% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %% %%\n");
    
    float calculatrice(char op, char continuer,float nombre1,float nombre2)
    {
      float result;
      switch(op)
      {
      case '+':
        result=nombre1+nombre2;
        printf("%f+%f=%f",nombre1,nombre2,result);
      break;
      case '-':
        result=nombre1-nombre2;
        printf("%f-%f=%f",nombre1,nombre2,result);
      break;
      case '/':
          if(nombre2!=0)
          {
             result=nombre1/nombre2;
             printf("%f/%f=%f", nombre1,nombre2,result);
          }
          else
        printf("Impossible de diviser par 0");
      break;
      case '*':
        result=nombre1*nombre2;
        printf("%f*%f=%f", nombre1,nombre2,result);
      break;
      default:
      if(continuer=='q')
        printf("Merci d'avoir utiliser notre calculatrice \n");
      break;
     }
    return result;
} 
    printf("\n Taper un nombre \n");
    scanf("%f", &nombre1);
    while(continuer !='q' )
    {
    printf("\n Choisir l'une des operations suivantes +, - , * ou / \n");
    scanf(" %s", &op);
       if(op)
      {
        printf(" Taper un autre nombre \n");
        scanf("%f", &nombre2);
        calculatrice(op,continuer,nombre1,nombre2);
    
      }
        printf("\nVoulez vous continuer?\n");
        printf("Si oui taper c sinon tapez q \n"); 
        scanf(" %s", &continuer); 
        nombre1=calculatrice(op,continuer,nombre1,nombre2);
    } 
}
