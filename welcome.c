/*#include<stdio.h>
void main(){
int a,b,larger;
printf("input two number:\n");
scanf("%d%d",&a,&b);
larger=(a>b)?a:b;
printf("larger no is%d",larger);
}*/


/*#include<stdio.h>
void main(){
    float a,b,power;
    printf("Enter base,exponent:in");
    scanf("%f,%f",&a,&b);
    power=pow(a,b);
    printf("sum is %f",power);
}*/



/*#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter any number : ");
    scanf("%d", &n);
    while(n>0)
{


        r=n%10;
        printf("Reverse: %d",r);
        n=n/10;
}
return 0;
}*/



/*#include<stdio.h>
void main(){
    int a ,b ,c;
    printf("enter four number:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b){
            if(a>c){
                printf("a is larger%d" ,a);
            }else{
            printf("c is larger%d", c);
            }

    }else{
        if(b>c){
            printf("b is larger%d", b);
        }else{
        printf("c is larger%d", c);
        }
    }
} */


/*#include <stdio.h>
void main(){
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    if(a>0){
        printf("positive is %d", a);

    }else{
        printf("negative is %d",a);
    }
    printf("thank you");
}*/



/*#include<stdio.h>
void main(){
    int i=1;
    for(i=1;i<=7;i++){
        printf("Nisil:\n");
    }
}*/



/*/#include<stdio.h>
void main(){
    int i=1;
    do{
        printf("nisil:\n");
        i++
    }while(i<=7)
}*/

/*#include<stdio.h>
void main(){
    int i =1;
    for(i=1;i<=100;i++){
        printf("\n%d",i);
    }
}*/

/*#include<stdio.h>
void main(){
    int i =20;
    for(i=20;i>=5;i--){
        printf("\n%d",i);
    }
}*/


/*#include<stdio.h>
void main(){
    int i =50;
    int sum=0;
    for(i=50;i>=5;i--){
            sum=sum+i;

    }
     printf("\n%d",sum);
}
*/

/*#include<stdio.h>
void main(){
    int i=1;
    int table;
    int table1;
    printf("enter a table:\n");
    scanf("%d",&table);
     for(i=1;i<=10;i++){
            table1=table*i;
            printf("\n %d* %d= %d", table, i, table1);

    }

}*/

/*#include<stdio.h>
void main(){
    int i=1;
    int fac=1;
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    for(i=a;i<=1;i--){
        fac=fac*i;

    }
    printf("%d",fac);

}*/
/*#include<stdio.h>
void main(){
    int i=1;
    int fac=1;
    int a;
     printf("enter a number:\n");
    scanf("%d",&a);
    do{
        fac=fac*i;


        i++;


    }while(i<=a);
     printf("\n%d",fac);
}*/

/*#include<stdio.h>
void main(){
    int a[7];
    int b[7];
    for(int i=0;i<5;i++){
        printf("enter a number:\n");
        scanf("%d",&a[i]);


    }
       for(int i=0;i<7;i++){

       b[i+2]=a[i];


       }
        for(int i=0;i<7;i++){

       a[i]=b[i];


       }

printf("entered number is");

    for(int i=0;i<7;i++)
        printf(" %d",a[i]);


}*/








/*#include<stdio.h>
void main(){
    int a[5];  // price   //i
    int b[5];  //  stock   //i
    int total=0;
    for(int i=0;i<5;i++){
        printf("enter a price of five different bulb \n");
        scanf("%d",&a[i]);
        printf("enter a stock of five different bulb \n");
        scanf("%d",&b[i]);
        total=total+a[i]*b[i];




    }
    printf("total value is %d", total);
}
*/

/*#include<stdio.h>
void main(){
    int n=35;
    if(n%5==0 && n%7==0)
        printf("it is div");
    else
        printf("it is not");

}
*/
/*
#include <stdio.h>

void main(){

    int a[2][2],b[2][2],c[2][2];


    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
               printf("enter a number %d%d",i,j);
        scanf("%d",&a[i][j]);

        }
    }


    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
                c[i][j]= 5 *a[i][j];


        }
    }
    for(int i=0;i<2;i++){
        printf("\n");
        for (int j=0;j<2;j++){
                printf("%d\t",c[i][j]);
        }
    }

}


*/

/*


void main()
{
   int  a[2][3],b[3][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter the element of %d%d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
       for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
                b[i][j]=a[j][i];

        }
    }
       for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
                printf(" %d \t",b[j][i]);

        }
        printf("\n");
       }
}


*/

/*
#include<stdio.h>
int main()
{

    float a,b,d,s,m;

  printf("enter two number:");
    scanf("%d%d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;

    s=*ptr1+*ptr2;
    d=*ptr1-*ptr2;
    m=*ptr1 * *ptr2;
    if(*ptr2 !=0)
    {
        d=*ptr1 / *ptr2;
    }else{
        printf("cannot divide by 0");
    }
    printf("the sum is %f the difff id %f the multiply is %f the divide is %f",s,d,m,d);
}
*/
/*
struct student sum1(struct student ,struct student );

struct student{
    int sec;
    int hr;
    int min;
};

void main()
{
    struct student t1,t2,sum;

    scanf("%d%d%d",&t1.sec,&t1.min,&t1.hr);
     scanf("%d%d%d",&t2.sec,&t2.min,&t2.hr);
     sum=sum1(t1,t2);
     printf("the sum is %d:%d:%d",sum.hr,sum.min,sum.sec);
}
struct student sum1(struct student t1,struct student t2)
{
    struct student sum;
    sum.sec=t1.sec+t2.sec;
    sum.min=t1.min+t2.min;
    sum.hr=t1.hr+t2.hr;
    if(sum.sec>=60){
        sum.min++;
        sum.sec-=60;
    }
     if(sum.min>=60){
        sum.hr++;
        sum.min-=60;
    }
    return sum;

};
*/

/*

#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int salary;
    char post[20];
};


void main(){
    struct employee read[3],temp;
    int highsalary=0;
    for(int i=0;i<3;i++){
printf("enter the name of std \n");
        fflush(stdin);
        gets(read[i].name);
        printf("\n enter the salary of employee: \t");
        scanf("%d",&read[i].salary);


    }
    for(int i=0;i<3;i++){

        if(read[highsalary].salary>read[i].salary){
       highsalary=i;



        }
    }

           printf("id=%d",read[highsalary].salary);
                printf("\n name=%s",read[highsalary].name);




}
*/





#include<stdio.h>
#include<string.h>

void main()
{
    char a[20]="i am nisil";
    for(int i=0;i<strlen(a);i++){
    if(a !='a' || a !='e' || a!='i' || a!='o' || a!='u'){
        printf("%s",a);
    }
    }
}




