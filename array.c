/*
#include<stdio.h>
void main()
{
    int a[5],n;
    int found=0;
    printf("enter the element  of array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the item that you want to search");
    scanf("%d",&n);
     for(int i=0;i<5;i++){
       if(a[i]==n){
        found=1;
        printf("the element %d is found in array",n);
        break;
       }
    }
    if(found==0){
        printf("the element didnt found in array");
    }
}
*/

/*

#include<stdio.h>
void main(){
    int a[3][2],b[2][3];
    printf("enter the element  of array \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
    }
        printf("the element  of array \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
        printf("%d \t",a[i][j]);
    }
    printf("\n");

    }
    printf("\n");

    for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
      b[i][j]=a[j][i];
    }
}
   for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
      printf("%d \t",b[i][j]);
    }
     printf("\n");
}
    }
*/






/*



#include<stdio.h>
void main(){
    int a[3][3];
    printf("enter the element  of array \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
    }
            printf("the element  of array \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
        printf("%d \t",a[i][j]);
    }
    printf("\n");

    }
    printf("\n");

    int sum=0;

        printf("the sum of diagonal \n");
    for(int i=0;i<3;i++){


                            sum=sum+a[i][i];



            }
            printf("%d \t",sum);
}

*/


/*
#include<stdio.h>
void main()
{
    char name1[]="hello ";
    char name2[]="world";
    printf("%s",strcat(name1,name2));
}
*/


/*

#include<stdio.h>
void main()
{
    int a[5],n;
    int found=0;
    printf("enter the element  of array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the item that you want to search");
    scanf("%d",&n);
     for(int i=0;i<5;i++){
       if(a[i]==n){
        found=1;
        printf("the element %d is found in array",n);
        break;
       }
    }
    if(found==0){
        printf("the element didnt found in array");
    }
}
*/


/*




#include<stdio.h>
void main(){
    int a[3][3],b[3][3];
    printf("enter the element  of array a \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }

    }
    printf("enter the element  of array b \n");
     for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
    }
            printf("the element  of array \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
        printf("%d \t",a[i][j]);
    }
    printf("\n");

    }
    printf("\n");
               printf("the element  of array \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
        printf("%d \t",b[i][j]);
    }
    printf("\n");

    }
    printf("\n");



        printf("the sum of rows \n");
   for(int i=0;i<3;i++){
        int sum=0;

for(int j=0;j<3;j++){

                            sum=sum+a[i][j]+a[i][j];



            }
            printf("%d \n",sum);
}

}

*/


/*
#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=i;k<=5;k++){
            printf("%d",k%2);
        }
        printf("\n");
    }
}
*/

/*
#include<stdio.h>

void main()
{
    int n;
    printf("enter the size of array \n");
    scanf("%d",&n);
    int a[n];
    int *ptr=a;
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    hello(ptr,n);
}




void hello(int *a,int n){
    int temp;
    for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
            if(*(a+i)>*(a+j)){
                temp=*(a+i);
               *(a+i)=*(a+j);
                *(a+j)=temp;
            }
           }
}
for(int i=0;i<n;i++){
        printf("%d",*(a+i));

}

}
*/

void main(){
    int a=5,b=4;
    printf("the value of a is %d and b is %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("the value of a is %d and b is %d",a,b);
    }


