#include<stdio.h>
int main(){
    char a[20];
    int i,t,m,j;
    float total,price;
    printf("\t\t\t\"Xavier's Gaming House\"\n\n\t\t\t\t\t BILL\n\n");
    for(j=1;j<=50;j++){
        printf("-");
    }
    printf("\nCustomer Name: ");
    scanf("%s", a);
    printf("\nCustomer ID: ");
    scanf("%d", &i);
    printf("\nMobile number: ");
    scanf("%d", &t);
     for(j=1;j<=50;j++){
        printf("-");
    }
    printf("\nEnter the total time (in minutes): ");
    scanf("%d", &m);
    printf("\nGST= 18%\n");
    price=m*5.0;
    total=price*1.18;
    printf("\nTotal=%f\n", total);
      for(j=1;j<=50;j++){
        printf("-");
    }
    printf("\n\t\t\t!!Thank You!! Visit again!!");
    return 0;
}
