#include<stdio.h>
int main(){
    int n;
    /*printf("Enter the Number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }*/
   /*
   printf("Enter the value of n: ");
   scanf("%d", &n);
   for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=65;j<=65+i-1;j++){
            printf("%c",j);
        }
        printf("\n");
   }*/

   printf("Enter the value of n: ");
   scanf("%d", &n);
   for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=65+n-1;j>=65+n-i;j--){
            printf("%c",j);
        }
        printf("\n");
   }
    return 0;
}