#include <stdio.h>

int main() 

{

    int NUM[10]={0,1,2,3,4,5,6,7,8,9}; 

    int LOW=0,HIGH=9,KEY,MID,FLAG=0;

    

    printf("ENTER KEY NUMBERS BTWN (0-9)\n");

    scanf("%d",&KEY); 

    do

    { 

    MID=(LOW+HIGH)/2; 

    if(KEY==NUM[MID]) 

    { 

    printf("\nKEY FOUND AT %d POSITION\n",MID+1);

    FLAG=1;

    } 

    else

    { 

      if(KEY<NUM[MID]) 

      HIGH=MID-1; 

      else LOW=MID+1; 

    } 

    }while(LOW <= HIGH && FLAG == 0); 

    

    if(FLAG == 0)

     printf("\nSORRY KEY VALUE NOT FOUND\n");

    return 0;

}
