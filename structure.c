/*
#include<stdio.h>

struct time addtime(struct time ,struct time );
struct time{
    int sec;
    int min;
    int hr;
};
void main(){
    struct time t1,t2,sum1;
    scanf("%d",&t1.sec);
    scanf("%d",&t1.min);
    scanf("%d",&t1.hr);
    scanf("%d",&t2.sec);
    scanf("%d",&t2.min);
    scanf("%d",&t2.hr);
    sum1=addtime(t1,t2);
    printf("hr=%d min=%d sec=%d",sum1.hr,sum1.min,sum1.sec);
}

struct time addtime(struct time t1,struct time t2){

    struct time sum;
    sum.sec=t1.sec+t2.sec;
    sum.min=t1.min+t2.min;
    sum.hr=t1.hr+t2.hr;
    while(sum.sec>=60){
        sum.sec=sum.sec-60;
        sum.min++;
    }
    while(sum.min>=60){
        sum.min=sum.min-60;
        sum.hr++;
    }

    return sum;



}
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
    struct employee read[3];
    for(int i=0;i<3;i++){
        printf("id of %d = \t ",i);
        scanf("%d",&read[i].id);
        printf("\n enter the name of employee: \t");
        fflush(stdin);
        gets(read[i].name);
        printf("\n enter the salary of employee: \t");
        scanf("%d",&read[i].salary);

        printf("\n enter the post of employee: \t");
        fflush(stdin);
        gets(read[i].post);
    }
    for(int i=0;i<3;i++){
        if(read[i].salary>20000){
                printf("id=%d",read[i].id);
                printf("\n name=%s",read[i].name);
                printf("\n salary=%d",read[i].salary);
                printf("post=%s",read[i].post);


        }
    }


}

*/
/*


#include<stdio.h>
struct book{

    char title[20];
    int cost;

};


void main(){
    int total=0;
    struct book read[3];
    for(int i=0;i<3;i++){

        printf("\n enter the name of book: \t");
        fflush(stdin);
        gets(read[i].title);
        printf("\n enter the cost of book: \t");
        scanf("%d",&read[i].cost);


    }
    for(int i=0;i<3;i++){


                printf("\n name=%s",read[i].title);
                total=total+read[i].cost;


;

        }
        printf("the total cost of 3 book is : %d",total);
    }



*/



/*
#include<stdio.h>
struct book{

    char name[20];
    int c;
    int iit

};


void main(){

    int n;
    printf("enter the number of student:\n");
    scanf("%d",&n);
    struct book read[n];
    for(int i=0;i<n;i++){

        printf("\n enter the name of student: \t");
        fflush(stdin);
        gets(read[i].name);
        printf("\n enter the mark in C: \t");
        scanf("%d",&read[i].c);
        printf("\n enter the mark in IIT: \t");
        scanf("%d",&read[i].iit);


    }
    for(int i=0;i<n;i++){
            int total=0;
printf("\n name=%s",read[i].name);
total=total+read[i].c+read[i].iit;
printf("total marks =%d",total);


;

        }

    }

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

    struct employee read[3];
    int highsalary=0;
    for(int i=0;i<3;i++){
        printf("id of %d = \t ",i);
        scanf("%d",&read[i].id);
        printf("\n enter the name of employee: \t");
        fflush(stdin);
        gets(read[i].name);
        printf("\n enter the salary of employee: \t");
        scanf("%d",&read[i].salary);

        printf("\n enter the post of employee: \t");
        fflush(stdin);
        gets(read[i].post);
    }

    for(int i=0;i<3;i++){
        if(read[highsalary].salary<read[i].salary){


               highsalary=i;


        }
    }
                 printf("\n name =%s",read[highsalary].name);
                 printf("\n salary=%d",read[highsalary].salary);



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

    struct employee read[3],value;


    for(int i=0;i<3;i++){
        printf("id of %d = \t ",i);
        scanf("%d",&read[i].id);
        printf("\n enter the name of employee: \t");
        fflush(stdin);
        gets(read[i].name);
        printf("\n enter the salary of employee: \t");
        scanf("%d",&read[i].salary);

        printf("\n enter the post of employee: \t");
        fflush(stdin);
        gets(read[i].post);
    }

   value= hello(read);
   for(int i=0;i<3;i++)
    printf("the id is %d the name is %s the salary is %d",value[i].id,value[i].name,value[i].salary);


}


struct employee hello(struct employee read[]){
    for(int i=0;i<3;i++){
        if(read[i].salary>10000){
                return read[i].id;
                return read[i].name;
                return read[i].salary;
        }
    }
}
*/

/*

#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int marks[3];
    ;
};


void main(){
int n,total1,total2;
scanf("%d",&n);
    struct employee read[n],temp;
    int highsalary=0;
    for(int i=0;i<n;i++){
        printf("id of %d = \t ",i);
        scanf("%d",&read[i].id);
        printf("\n enter the name of student: \t");
        fflush(stdin);
        gets(read[i].name);
        for(int k=0;k<3;k++){
        printf("\n enter the marks of student: \t");
        scanf("%d",&read[i].marks[k]);
        }


    }

    for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                total1=total2=0;
                    for(int k=0;k<3;k++){

                    total1=total1+read[i].marks[k];
                    total2=total2+read[j].marks[k];
                        }

                if(total1>total2){
                    temp=read[i];
                    read[i]=read[j];
                    read[j]=temp;
                }





        }
    }
        for(int i=0;i<3;i++){
            printf("\n id is :%d \n name is :%s",read[i].id,read[i].name);
            for(int k=0;k<3;k++){
                    printf("\n marks of subject is %d",read[i].marks[k]);

            }
        }
    }


*/

/*
#include<stdio.h>
#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int salary;
    char post[20];
};


void main(){
    int n;
    scanf("%d",&n);

    struct employee read[n],temp;
    int value;
    for(int i=0;i<n;i++){
        printf("id of %d = \t ",i);
        scanf("%d",&read[i].id);
        printf("\n enter the name of employee: \t");
        fflush(stdin);
        gets(read[i].name);
        printf("\n enter the salary of employee: \t");
        scanf("%d",&read[i].salary);

        printf("\n enter the post of employee: \t");
        fflush(stdin);
        gets(read[i].post);
    }

    for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){


                if(strcmp(read[i].name,read[j].name)>0){
                    temp=read[i];
                    read[i]=read[j];
                    read[j]=temp;
                }





        }
    }
        for(int i=0;i<3;i++){
            printf("\n id is :%d \n name is :%s \n salary is :%d",read[i].id,read[i].name,read[i].salary);

            }
        }





*/
/*
#include<stdio.h>

struct student{
    char name[10];
    struct{
    int c;
    int iit
    }marks;
};
void main(){
    struct student std[3];
    for(int i=0;i<3;i++){
            printf("\n enter the name of student\t");
    fflush(stdin);
    gets(std[i].name);

            printf("\n enter mark in c: \n");
    scanf("%d",&std[i].marks.c);
    printf("\n enter mark in iit: \n");
    scanf("%d",&std[i].marks.iit);
    }
    for(int i=0;i<3;i++){
        int total=0;
        printf("\n name of student is :%s",std[i].name);
        printf("\n mark in iit: %d",std[i].marks.iit);
         printf("\n mark in c: %d",std[i].marks.c);
        total=std[i].marks.c+std[i].marks.iit;
        printf("\n total marks of %s is %d :",std[i].name,total);

    }
    }

*/
/*

#include<stdio.h>

struct student{
    char name[10];
   int cost;
};
void main(){
    struct student std[3];
    for(int i=0;i<3;i++){
            printf("\n enter the name of book\t");
    fflush(stdin);
    gets(std[i].name);

        printf("\n enter the price of book:");
        scanf("%d",&std[i].cost);
    }

    int total=0;
    for(int i=0;i<3;i++){

        printf("\n name of book is :%s",std[i].name);
        total=total+std[i].cost;



    }
     printf("the total cost of all book is %d",total);
    }


*/
/*
#include<stdio.h>

struct employee{
    char name[20];
    int marks[3];

};
void main(){
    int n,total1,total2;
    scanf("%d",&n);
    struct employee read[n],temp;
    for(int i=0;i<n;i++){
            printf("\n enter the name :");
    fflush(stdin);
        gets(read[i].name);
         for(int k=0;k<3;k++){
         printf("\n enter the marks :");
        scanf("%d",&read[i].marks[k]);
         }
    }
    for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                    total1=total2=0;
                    for(int k=0;k<3;k++){
                        total1=total1+read[i].marks[k];
                        total2=total2+read[j].marks[k];
                    }
        if(total1>total2){
                temp=read[i];
        read[i]=read[j];
        read[j]=temp;

        }
    }

}
    for(int i=0;i<n;i++){
            printf("\n  the name is %s",read[i].name);
            for(int k=0;k<3;k++){


         printf("\n the salary is %d",  read[i].marks[k]);
            }

    }
}
*/

/*
#include<stdio.h>
struct student{
    char name[20];
    int total;
};
void main()
{
    struct student std[3];
    for(int i=0;i<3;i++){
            fflush(stdin);
            printf("enter the name of student\n");
    gets(std[i].name);
    printf("enter total of  student:\n");

        scanf("%d",&std[i].total);
    }

    for(int i=0;i<3;i++){
            if(std[i].total>150)
                printf("\n name of student is %s and total marks is %d",std[i].name,std[i].total);


    }

}

*/
/*

#include<stdio.h>
struct student{
    char name[20];
    int run;
    int wickets;
};
void main()
{
    struct student player[3],*ptr,temp;
    ptr=player;


    for(int i=0;i<3;i++){
        printf("\n enter the player name");
        fflush(stdin);
        gets((ptr+i)->name);
        printf("\n enter their run scored:");
        scanf("%d",&(ptr+i)->run);
                printf("\n enter their wicket taken:");
                scanf("%d",&(ptr+i)->wickets);

    }

 for(int i=0;i<2;i++){
     for(int j=i+1;j<3;j++){
        if((ptr+i)->wickets >(ptr+j)->wickets){
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
        }
     }

 }
  for(int i=0;i<3;i++){
        printf("\n the player name is :");
        puts((ptr+i)->name);
        printf("\n enter their run scored:");
        printf("%d",(ptr+i)->run);
                printf("\n enter their wicket taken:");
                printf("%d",(ptr+i)->wickets);

    }

}
*/


/*
#include <stdio.h>

struct employee {
    int id;
    char name[20];
    int salary;
};

struct employee hello(struct employee read[]);

int main() {
    struct employee read[3];
    struct employee value;

    for (int i = 0; i < 3; i++) {
        printf("id of %d = ", i);
        scanf("%d", &read[i].id);

        printf("enter the name of employee: ");
        fflush(stdin);
        fgets(read[i].name, sizeof(read[i].name), stdin);

        printf("enter the salary of employee: ");
        scanf("%d", &read[i].salary);
    }

    value = hello(read);

    for (int i = 0; i < 3; i++) {
        if (read[i].salary > 10000) {
           printf("the id is %d, the name is %s, the salary is %d\n", value.id, value.name, value.salary);

        }
    }


    */


 /*
#include<stdio.h>
struct student{
    char name[20];
    int run;
    int wickets;
};
void main()
{


    struct student player[3],*ptr,temp;
    ptr=player;


    for(int i=0;i<3;i++){
        printf("\n enter the player name");
        gets((ptr+i)->name);
        printf("\n enter their run scored:");
        scanf("%d",&(ptr+i)->run);

                printf("\n enter their wicket taken:");
                scanf("%d",&(ptr+i)->wickets);

    }

 for(int i=0;i<2;i++){
     for(int j=i+1;j<3;j++){
        if((ptr+i)->wickets >(ptr+j)->wickets){
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
        }
     }

 }
  for(int i=0;i<3;i++){
        printf("\n the player name is :");
        puts((ptr+i)->name);
        printf("\n enter their run scored:");
        printf("%d",(ptr+i)->run);
                printf("\n enter their wicket taken:");
                printf("%d",(ptr+i)->wickets);

    }

}



    return 0;
}

struct employee hello(struct employee read[]) {
    struct employee result;

    for (int i = 0; i < 3; i++) {
        if (read[i].salary > 10000) {
            result = read[i];

        }
    }

    return result;
}
*/

/*

struct student{
    char name[20];
    int marks[3];
};
void main()
{
    struct student std[3],temp;
    for(int i=0;i<3;i++){
        printf("enter the name of student \n");
        gets(std[i].name);
        for(int k=0;k<3;k++){
                printf("enter the marks of three subject \n");
        scanf("%d",std[i].marks[k]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=i+1;i<3;j++){
            int total1=0,total2=0;
        for(int k=0;k<3;k++){
            total1=total1+std[i].marks[k];
            total2=total2+std[j].marks[k];
        }
        if(total1>total2){
            temp=std[i];

        }
    }
    }
}
*/
/*

void main()
{
    int n;
    printf("enter the number of array \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the number of element of array \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    hello(a,n);
}
void hello(int *a,int n){


}

*/


/*

#include<stdio.h>
struct student{
    char name[20];
    int run;
    int wickets;
};
void main()
{


    struct student player[3];



    for(int i=0;i<3;i++){
        printf("\n enter the player name");
        fflush(stdin);
        gets(player[i].name);
        printf("\n enter their run scored:");
        scanf("%d",&player[i].run);

                printf("\n enter their wicket taken:");
                scanf("%d",&player[i].wickets);
    }
    sort(player);

    }
    void sort(struct student *ptr){
struct student temp;
 for(int i=0;i<2;i++){
     for(int j=i+1;j<3;j++){
        if((ptr+i)->wickets >(ptr+j)->wickets){
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
        }
     }

 }
  for(int i=0;i<3;i++){
        printf("\n the player name is :");
        puts((ptr+i)->name);
        printf("\n enter their run scored:");
        printf("%d",(ptr+i)->run);
                printf("\n enter their wicket taken:");
                printf("%d",(ptr+i)->wickets);

    }

}
*/



/*
#include<stdio.h>

struct time addtime(struct time ,struct time );
struct time{
    int sec;
    int min;
    int hr;
};
void main(){
    struct time t1,t2,sum1;
    scanf("%d",&t1.sec);
    scanf("%d",&t1.min);
    scanf("%d",&t1.hr);
    scanf("%d",&t2.sec);
    scanf("%d",&t2.min);
    scanf("%d",&t2.hr);
    sum1=addtime(t1,t2);
    printf("hr=%d min=%d sec=%d",sum1.hr,sum1.min,sum1.sec);
}

struct time addtime(struct time t1,struct time t2){
    struct time sum;
    sum.sec=t1.sec+t2.sec;
    sum.min=t1.min+t2.min;
    sum.hr=t1.hr+t2.hr;
    while(sum.sec>=60){
        sum.sec-=60;
        sum.min++;
    }
     while(sum.min>=60){
        sum.min-=60;
        sum.hr++;
    }
    return sum;

};

*/










