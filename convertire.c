#include<stdio.h>

int main(){
    int i,oc,j,de,n,tmp;
    printf("***********\n");
    printf("entrer la valeur en octal \n");
    scanf("%d",&oc);
    n=1;
    de=(oc%10);
    while(oc!=0){
      oc/=10;
      tmp=oc*8;
      for(i=2;i<=n;i++){
       tmp=tmp*8;
      }
      de=de+tmp;
      n++;
    }
    printf("moyenne de c'est quatre nombres est:%x",de);
    printf("***********\n");
    }