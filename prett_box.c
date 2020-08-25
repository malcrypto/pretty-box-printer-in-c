#include<stdio.h>
void square(int dim){
  int i, j;
  j =0;
  while (j<dim){
    i = 0;
    while(i<dim){
      if(j==0 && i==0){
         printf("%c",218);
  }
      else if(j==0 && i==dim-1){
         printf("%c",191);
  }
      else if(i==0 && j==dim-1){
        printf("%c",192);
  }
      else if(i==dim-1 && j==dim-1){
        printf("%c",217);
  }
      else if(i==0 && 0<j&&j<dim-1){
        printf("%c",179);
  }
      else if(i==dim-1 && 0<j&&j<dim-1){
        printf("%c",179);
  }
      else if(j==0 && i>0 && i<dim-1){
        printf("%c",196);
  }
      else if(j==dim-1 && i>0 && i<dim-1){
        printf("%c",196);
  }
      else if(i==j && i!=0){
        printf("\\");
  }
      else if(i==dim-j-1){
        printf("/");
  }
      else{
        printf(" ");
  }
      i++;
 }
    j++;
    printf("\n");
}
}
int main(){
  int size;
  while(1){
    printf("Enter the size : ");
    scanf("%d", &size);
    square (size);
  }
return 0;
}
