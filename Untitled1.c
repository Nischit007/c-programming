/*
#include<stdio.h>
void main()
{


    int *p,temp;
    int n,i;
    printf("enter a size  of array:\n");
    scanf("%d",&n);
    printf("enter the element of array:\n");
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(p+i));


    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(*(p+i)>*(p+j)){
                        temp=*(p+i);
                        *(p+i)=*(p+j);
                        *(p+j)=temp;


                }

        }
    }


   printf("\n the sort is :");

     for(int i=0;i<n;i++){

        printf( "%d",*(p+i));

    }
}


*/
/*
int fact(int );
#include<math.h>
#include<stdio.h>
void main()
{
    int x,sum,f;
    printf("enter the number:");
    scanf("%d",&x);



    for(int i=0;i<=x;i++){

    sum=sum+pow(x,i)/fact(i);

}
printf("the sum of series is %d",sum);
}
int fact(int y){
    if(y==0||y==1)
        return 1;
    else return y*fact(y-1);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[40];
    char office_name[20];
    char designation[40];
};

int main()
{
    FILE *fp;
    char another = 'Y';
    struct employee emp;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        puts("Cannot open file");
        exit(0);
    }

    while (another == 'Y')
    {
        printf("Enter name, office name, and designation of an employee:\n");
        scanf("%s", emp.name);
        getchar(); // Clear input buffer
        scanf("%s", emp.office_name);
        getchar(); // Clear input buffer
        scanf("%s", emp.designation);
        getchar(); // Clear input buffer

        fwrite(&emp, sizeof(emp), 1, fp);

        printf("\nAdd another record (Y/N):\n");
        another = getchar();
        getchar(); // Clear input buffer
    }

    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        puts("Cannot open file");
        exit(0);
    }

    while (fread(&emp, sizeof(struct employee), 1, fp))
    {
        if ((strcmp(emp.office_name, "Nepathya") == 0) && (strcmp(emp.designation, "Nodejs") == 0))
        {
            printf("\nThe name of the person is: %s\n", emp.name);
        }
    }

    fclose(fp);
    return 0;
}
*/

/*
#include<stdio.h>
struct time{
    int hr;
    int min;
     int sec;
};
struct time addtime(struct time ,struct time );
void main(){
    struct time t1,t2,s;

    printf("\n enter the time one in hr:");
    scanf("%d",&t1.hr);
    printf("\n enter the time one in min:");
    scanf("%d",&t1.min);
    printf("\n enter the time one in sec:");
    scanf("%d",&t1.sec);
    printf("\n enter the time two in hr:");
    scanf("%d",&t2.hr);
     printf("\n enter the time two in min:");
    scanf("%d",&t2.min);
     printf("\n enter the time two in sec:");
    scanf("%d",&t2.sec);
    s=addtime(t1,t2);
    printf("the sum of two time is %d:%d:%d",s.hr,s.min,s.sec);


}
struct time addtime(struct time t1,struct time t2){
    struct time sum;
    sum.sec=t1.sec+t2.sec;
     sum.min=t1.min+t2.min;
      sum.hr=t1.hr+t2.hr;
      if(sum.sec>=60){
        sum.sec=sum.sec-60;
        sum.min++;
      }
      if(sum.min>=60){
        sum.min=sum.min-60;
        sum.hr++;
      }
      return sum;

};
*/
/*

#include<stdio.h>
struct employee{
        char name[20];
        int salary;
        };
void main()
{

        struct employee e[3],temp;
        for(int i=0;i<3;i++){
            printf("\n enter name of employee:");
            fflush(stdin);
            gets(e[i].name);
            printf("\n enter the salary");
           scanf("%d",&e[i].salary);
        }
         for(int i=0;i<2;i++){
             for(int j=i+1;j<3;j++){
                if(strcmp(e[i].name,e[j].name)>0){
                    temp=e[i];
                    e[i]=e[j];
                    e[j]=temp;
                }
             }
         }
         for(int i=0;i<3;i++){
             printf("name is %s and salary is %d",e[i].name,e[i].salary);
         }

}
*/
/*

#include<stdio.h>
struct student{
    char name[20];
    int marks[3]
};
int main(){

int total=0;
struct student std[3];
for(int i=0;i<3;i++){
    printf("enter the name of student: \n");
fflush(stdin);
gets(std[i].name);
for(int k=0;k<3;k++){
        printf("enter the marks of %d subject",k);
        scanf("%d",&std[i].marks[k]);


}
}
for(int i=0;i<3;i++){
        printf("the name of student is %s",std[i].name);
        int  total=0;
      for(int k=0;k<3;k++){

        printf("the marks of three subject is %d",std[i].marks[k]);
      total=total+std[i].marks[k];


      }
      printf("the total marks is %d",total);

}
}
*/
/*
#include<stdio.h>

struct player{
    char name[20];
    int wicket;

};
void player1(struct player *);
void main()
{
    struct player p[3],*ptr,temp;
    ptr=p;
    for(int i=0;i<3;i++){
        printf("enter the name of player:\n");
        fflush(stdin);
        gets((ptr+i)->name);
        printf("enter the wicket taken \n");
        scanf("%d",&(ptr+i)->wicket);
    }
    player1(ptr);
}
    void player1(struct player *ptr){
        struct player temp;
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
                if((ptr+i)->wicket>(ptr+j)->wicket){
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
                }
        }
    }
    for(int i=0;i<3;i++){
        printf("\n the name of player is %s and wicket taken is %d",(ptr+i)->name,(ptr+i)->wicket);
    }
}
*/

/*
void main()
{
    int a[3];
    int n;
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    int found=0;
     for(int i=0;i<3;i++){
        if(n==a[i]){
            found=1;
            printf("the key is found");
            break;

        }
     }
     if(!found)
        printf("not found");

}
*/
/*

void main()
{
    int a,r;
    scanf("%d",&a);
    r=reverse(a);
    printf("the reverse is %d",r);
}

int reverse(a){
    static rev=0;
    if(a==0){
        return 0;
    }else {
        rev=rev*10+a%10;
        reverse(a/10);

    }
    return rev;
}
*/

/*
void main()
{
    int *a;
    int n;
    scanf("%d",&n);


   a=(int *)calloc(n,sizeof(int));
     for(int i=0;i<n;i++){

        scanf("%d",(a+i));
     }
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
        printf("the sort of array is %d",*(a+i));
     }

}

*/

/*

#include<stdio.h>

void main()
{
    FILE *sfp,*dfp;
    char a[50];
    sfp=fopen("test.txt","r");
    if(sfp==NULL){
        printf("cannot open file...");
    }
    dfp=fopen("test1.txt","w");
    if(dfp==NULL){
        printf("cannot open file...");
    }
    while(fscanf(sfp,"%s",&a)!= EOF){
        if(strcmp(a,"Ram")==0)
            fprintf(dfp,"Hari ",a);
         else if(strcmp(a,"Sita")==0)
            fprintf(dfp,"Gita ",a);
             else if(strcmp(a,"Govinda")==0)
            fprintf(dfp,"Shiva ",a);
            else
                fprintf(dfp,"%s",a);

    }
printf("copiedddd... with all changes");
fclose(sfp);
fclose(dfp);
getch();

}


*/

/*

#include<stdio.h>

void main()
{
    FILE *sfp,*dfp;
    char c;
    sfp=fopen("test.txt","r");
    if(sfp==NULL){
        printf("cannot open file...");
    }
    dfp=fopen("ten3.txt","w");
    if(dfp==NULL){
        printf("cannot open file...");
    }
    while((c=getc(sfp))!=EOF){
        if (c != 'a' &&    c != 'e' && c != 'i' && c != 'o' && c != 'u')
        fputc(c,dfp);
    }
    printf("copiedddds... with all changes");
    fclose(sfp);
fclose(dfp);
getch();
}

*/

#include <stdio.h>
#include <string.h>

struct employee {
    char name[20];
    int salary;
};

int hello(struct employee emp[], struct employee get10000[]);

int main() {
    int i, returned_size;
    struct employee emp[5];
    struct employee get10000[5];
    for (i = 0; i < 5; i++) {
        printf("Enter the name of the employee:\n");
        fflush(stdin);
        gets(emp[i].name);
        printf("Enter the salary of the employee:\n");
        scanf("%d", &emp[i].salary);
    }
    returned_size = hello(emp, get10000);
    for (i = 0; i < returned_size; i++) {
        printf("Name of employee: %s\n", get10000[i].name);
        printf("Salary of employee: %d\n", get10000[i].salary);
    }
    return 0;
}

int hello(struct employee emp[], struct employee get10000[]) {
    int i, returned_size = 0;
    for (i = 0; i < 5; i++) {
        if (emp[i].salary > 10000) {
            get10000[returned_size] = emp[i];
            returned_size++;
        }
    }
    return returned_size;
}
