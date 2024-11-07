#include<stdio.h>

int main (){

int i;

int b;

int d;

int score[2][2][2] = {

{{65, 92},{84, 72}},

{{35,70},{59,67}}

};

for (i=0;i<2;i++){

   printf("Matrix %d:\n", i + 1);

	for (b=0;b<2;b++){

          for (d=0;d<2;d++){

	   printf("%d", score[i][b][d]);}

         printf("\n");}

          printf("\n");}

return 0;

}