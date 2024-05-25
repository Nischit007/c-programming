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
#include<string.h>
int main()
{

    FILE *fp;
    char another='Y';
    struct employee
    {
        char name[40];
        char office_name[20];
        char designation[40];
    };
    struct employee emp;
    fp = fopen("employee.dat","wb");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while(another=='Y'){
            printf("enter  name, office name and designation of an employee: \n");
            scanf("%s",&emp.name);
            fflush(stdin);
            scanf("%s",&emp.office_name);
            fflush(stdin);
            scanf("%s",&emp.designation);
            fwrite(&emp,sizeof(emp),1,fp);
            printf("\n add another record (Y\N) \n");
            fflush(stdin);
            another=getche();

    }
      fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        puts("Cannot open file");
        exit(0);
    }


       while (fread(&emp, sizeof(struct employee), 1, fp)){
    if((strcmp(emp.office_name,"Nepathya")==0)&&(strcmp(emp.designation,"Nodejs")==0))
        printf("\n the name of person is:%s",emp.name);

    }
    fclose(fp);
    return 0;
    }
*/

/*


     #include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    int count=0;
    char another='Y';
    struct employee
    {
        int id;
        char name[40];
        char office_name[20];
        char designation[40];
    };
    struct employee emp;
    fp = fopen("employee.dat","wb");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while(another=='Y'){
            printf("enter  id ,name, office name and designation of an employee: \n");
            scanf("%d",emp.id);
            scanf("%s",&emp.name);
            fflush(stdin);
            scanf("%s",&emp.office_name);
            fflush(stdin);
            scanf("%s",&emp.designation);
            fwrite(&emp,sizeof(emp),1,fp);
            printf("\n add another record (Y\N) \n");
            fflush(stdin);
            another=getche();

    }
      fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        puts("Cannot open file");
        exit(0);
    }


       while (fread(&emp, sizeof(emp), 1, fp)==1){
   count++;

    }
    struct employee emp1[count]; // Create an array to store employee records

    for (int i = 0; i < count; i++) {
        fread(&emp1[i], sizeof(struct employee), 1, fp);
    }

    fclose(fp);
    struct employee temp;



         for(int i=0;i<count -1;i++){
            for(int j=i+1;j<count;j++){
                if(emp1[i].id>emp1[j].id){
                    temp=emp1[i];
                    emp1[i]=emp1[j];
                    emp1[j]=temp;
                }
            }
         }


    for(int i=0;i<count;i++){
         printf("the name of student is %s and his job is in office %s and his desgination is %s",emp1[i].id,emp1[i].name,emp1[i].office_name,emp1[i].designation);
    }

    fclose(fp);
    return 0;
    }




*/


/*

#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;
    printf("Enter the number of integers you want to insert:\n");
    scanf("%d", &n);
    int num;
    FILE *DATA, *ODD, *EVEN;

    DATA = fopen("data.txt", "w");
    if (DATA == NULL) {
        printf("Cannot open file");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(DATA, "%d\t", num);
    }

    fclose(DATA);

    DATA = fopen("data.txt", "r");
    if (DATA == NULL) {
        printf("Cannot open file");
        exit(1);
    }

    ODD = fopen("odd.txt", "w");
    if (ODD == NULL) {
        printf("Cannot open file");
        exit(1);
    }

    EVEN = fopen("even.txt", "w");
    if (EVEN == NULL) {
        printf("Cannot open file");
        exit(1);
    }

    while (fscanf(DATA, "%d", &num) != EOF) {

        if (num% 2 == 0) {
            fprintf(EVEN, "%d\n", num);
        } else {
            fprintf(ODD, "%d\n", num);
        }

    }

    fclose(DATA);
    fclose(EVEN);
    fclose(ODD);
}

*/

/*

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char w;
    FILE *fp1, *fp2, *fp3, *output;
    int a, b, c;

    fp1 = fopen("student.txt", "r");
    fp2 = fopen("ten3.txt", "r");
    fp3 = fopen("odd.txt", "r");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        printf("Cannot open file");
        exit(1);
    }

    fseek(fp1, 0, SEEK_END);
    a = ftell(fp1);
    fseek(fp2, 0, SEEK_END);
    b = ftell(fp2);
    fseek(fp3, 0, SEEK_END);
    c = ftell(fp3);

    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Cannot create output file");
        exit(1);
    }

    if (a > b && a > c) {
        printf("The f1 file is larger\n");

        rewind(fp1); // Move the file pointer back to the beginning

        while ((w = getc(fp1)) != EOF) {
            putc(w, output);
        }
    } else if (b > a && b > c) {
        printf("The f2 file is larger\n");

        rewind(fp2); // Move the file pointer back to the beginning

        while ((w = getc(fp2)) != EOF) {
            putc(w, output);
        }
    } else {
        printf("The f3 file is larger\n");

        rewind(fp3); // Move the file pointer back to the beginning

        while ((w = getc(fp3)) != EOF) {
            putc(w, output);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(output);

    return 0;
}
*/




/*






*/















/*

#include<stdio.h>
void main()
{
    float x=4,y=5,formula;
    formula=5*x*sqrt(pow(y,2)+5);
    printf("the ans is %f",formula);
}
*/
















/*


#include<stdio.h>
void main(){
    int n=6,sum=0;
  for(int i=0;i<n;i++)
   printf("the sum is %d",fseries(i));
}
int fseries(int i){
    if(i==0){
        return 0;
    }else if(i==1){
        return 1;
    }else{
        return fseries(i - 1) + fseries(i - 2);;
    }

    }
*/




















/*

#include<stdio.h>
void main()
{
    char choice;
    int a=5,b=4;
    printf("enter the operator * - / = \n");
    scanf(" %c",&choice);
    switch(choice){
    case '*':
        printf("the multiply of a and b is %d",a*b);
        break;
        case '-':
        printf("the sub of a and b is %d",a-b);
        break;
        case '+':
        printf("the multiply of a and b is %d",a+b);
        break;
        case '/':
        printf("the multiply of a and b is %d",a/b );
        break;
        default:
            printf("invalid operator");
            break;

    }
}

*/

























/*

#include<stdio.h>
void main()
{
    int sum=1;
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    sum=sum+(pow(x,i))/fact(i);
    printf("the sum is %d",sum);

}
int fact(int n){
    if(n==0 || n==1)
        return 1;
    else return n *fact(n-1);
}


*/






















/*
#include<stdio.h>
void main()
{
    char A[]="NEPAL";
    int a;
    a=strlen(A);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%c",A[j]);
        }
        printf("\n");
    }
}
*/

















/*
#include<stdio.h>
void main()
{
    char A[]="NEPAL";
    int a;
    a=strlen(A);
    for(int i=0;i<a;i++){
        for(int j=0;j<5-i+1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("%c",A[k]);
        }
        printf("\n");
    }
}

*/
/*
#include<stdio.h>
struct student{
    int RollNo;
    char name[20]
};
void main()
{
    FILE *dfp;
    int n;
    printf("enter the number of student \n");
    scanf("%d",&n);
    struct student std[n];
     dfp=fopen("test.txt","w");
    if(dfp==NULL){
        printf("failed...");
    }

    for(int i=0;i<n;i++){
        printf("enter the roll no of student \n");
        scanf("%d",&std[i].RollNo);
        printf("enter the name of stduent \n");
        fflush(stdin);
        gets(std[i].name);
    }
     for(int i=0;i<n;i++){
         fprintf(dfp,"the roll no and name of student : %d %s \n",std[i].RollNo,std[i].name);

     }




    }


*/
/*
#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    char another='Y';
    struct employee
    {
        char name[40];
        char office_name[20];
        char designation[40];
    };
    struct employee emp;
    fp = fopen("employee.dat","wb");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while(another=='Y'){
            printf("enter  name, office name and designation of an employee: \n");
            scanf("%s",&emp.name);
            fflush(stdin);
            scanf("%s",&emp.office_name);
            fflush(stdin);
            scanf("%s",&emp.designation);
            fwrite(&emp,sizeof(emp),1,fp);
            printf("\n add another record (Y\N) \n");
            fflush(stdin);
            another=getche();

    }
fclose(fp);
fp = fopen("employee.dat","rb");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while(fread(&emp,sizeof(emp),1,fp)==1){
    if((strcmp(emp.office_name,"Nepathya")==0)&&(strcmp(emp.designation,"Nodejs")==0))
        printf("\n the name of person is:%s",emp.name);

    }
    fclose(fp);
    return 0;
    }
*/


/*

#include<stdio.h>

#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    char another='Y';
    struct employee
    {
        char name[40];
        char office_name[20];
        char designation[40];
    };
    struct employee emp;
    fp = fopen("employee.dat","wb");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while(another=='Y'){
            printf("enter  name, office name and designation of an employee: \n");
            scanf("%s",&emp.name);
            fflush(stdin);
            scanf("%s",&emp.office_name);
            fflush(stdin);
            scanf("%s",&emp.designation);
            fwrite(&emp,sizeof(emp),1,fp);
            printf("\n add another record (Y\N) \n");
            fflush(stdin);
            another=getche();

    }
fclose(fp);
fp = fopen("employee.dat","rb");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }

    while(fread(&emp,sizeof(emp),1,fp)==1){
        if(strcmp(emp.office_name,"Nepathya")==0){
            printf("the name of employee is %s",emp.name);
        }


    }}




*/

/*

#include<stdio.h>
void main(){
 int n,num;
 scanf("%d",&n);
 FILE *DATA,*EVEN,*ODD;
 DATA=fopen("data.txt","w");
 for(int i=0;i<n;i++){
    scanf("%d",&num);
    fprintf(DATA,"%d\t",num);
 }
 fclose(DATA);
  DATA=fopen("data.txt","r");
  EVEN=fopen("even.txt","w");
  ODD=fopen("odd.txt","w");
  while(fscanf(DATA,"%d",&num)!=EOF){
    if(num%2==0){
        fprintf(EVEN,"%d",num);

    }else{
        fprintf(ODD,"%d",num);
    }
  }
 fclose(DATA);
 fclose(EVEN);
 fclose(ODD);
}


*/

/*

#include<stdio.h>
#include<string.h>
void main(){
    FILE *sfp,*dfp;

       int num1,num2,sum;
    sfp=fopen("test.txt","r");
    if(sfp==NULL){
        puts("cannot open file");
        exit(0);

    }
    fscanf(sfp,"%d",&num1);
    fscanf(sfp,"%d",&num2);

fclose(sfp);
sum=num1+num2;
   dfp=fopen("myfile.txt","w");
    if(dfp==NULL){
        puts("cannot open file");
        exit(0);
    }
    fprintf(dfp,"%d",sum);
    fclose(dfp);

}

*/
/*

#include<stdio.h>
void main()
{
    char c[20];
     FILE *dfp;
       dfp=fopen("myfile.txt","w");
    if(dfp==NULL){
        puts("cannot open file");
        exit(0);
    }
    gets(c);
    fprintf(dfp,"%s",c);
    fclose(dfp);

}


*/
/*


#include<stdio.h>
void main()
{
    int num,sum=0;
    float avg;
    int count=0;

         FILE *dfp,*sfp;
       dfp=fopen("myfile.txt","w");
    if(dfp==NULL){
        puts("cannot open file");
        exit(0);
    }
    for(int i=0;i<10;i++){
        scanf("%d",&num);
        fprintf(dfp,"%d\t",num);
    }
    fclose(dfp);
        dfp=fopen("myfile.txt","r");
    if(dfp==NULL){
        puts("cannot open file");
        exit(0);
    }
         sfp=fopen("output.txt","w");
    if(dfp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while(fscanf(dfp,"%d",&num)!=EOF){
    printf("%d\t",num);
    sum=sum+num;
    count++;




    }
     avg=(float)sum / count;
    printf("%f",avg);
 fprintf(sfp,"%f",avg);
}

*/



#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int salary;
    char post[20];
};

struct employee* hello(struct employee read[]);
void main(){

    struct employee read[3];
    int count;


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

count=counter(read);

struct employee *value=hello(read);


   for(int i=0;i<count;i++)
    printf("the id is %d the name is %s the salary is %d",(value+i)->id,(value+i)->name,(value+i)->salary);


}

int counter(struct employee read[]){
    int count=0;++++
    for(int i=0;i<3;i++){
        if(read[i].salary>10000){
              count++;

        }
    }
    return count;
}



struct employee *hello(struct employee read[]){
    struct employee* value = malloc(sizeof(struct employee) * 3);
    int count = 0;

    for (int i = 0; i < 3; i++) {
        if (read[i].salary > 10000) {
            value[count] = read[i];
            count++;
        }
    }

    return value;
    }


/*
#include<stdio.h>
struct student{
    char name[20];
    int marks[3];
};


void main(){
    struct student std[3];
    for(int i=0;i<3;i++){
        printf("enter the name of student : \n");
        fflush(stdin);
        gets(std[i].name);
         printf("enter the marks of student : \n");
         for(int k=0;k<3;k++){
            scanf("%d",&std[i].marks[k]);
         }
    }
    for(int i=0;i<3;i++){
          printf("the name of student is %s \n",std[i].name);
          int total =0;
          for(int k=0;k<3;k++){
            printf("the marks of student is %d \n ",std[i].marks[k]);
            total=total+std[i].marks[k];
          }
          printf("the total marks of student is %d",total);
    }

}
*/

/*
#include<stdio.h>
void main(){
    int x=7;
    printf("the value of x before change is %d \n",x);
    hello(&x);
}
void hello(int *ptr){
    *ptr=5;
    printf("the value of x after change is %d",*ptr);
}
*/


/*
float add(int *,int *);
void main()
{
    int a=5,b=6;
    float opt;
    opt=add(&a,&b);
     printf("the div is %f",opt);
}
float add(int *x,int *y){
    float result;
    if(*y!=0){
        result =(float) *x / *y;
        return result;
    }else{
        return 0;
    }

}
*/

/*
#include <stdio.h>
struct complex{
    float real;
    float imaginary;
};
void main(){
    struct complex num1,num2;
    printf("enter the real and imaginary part of num1 \n");
    scanf("%f %f",&num1.real,&num1.imaginary);
     printf("\n enter the real and imaginary part of num2 \n");
    scanf("%f %f",&num2.real,&num2.imaginary);
    add(num1,num2);
    mult(num1,num2);
    div(num1,num2);
}
void add(struct complex num1,struct complex num2){
    float add_real,add_imaginary;
    add_real=num1.real+num2.real;
    add_imaginary=num1.imaginary+num2.imaginary;
    printf(" \n the add of two complex number is %f + i%f",add_real,add_imaginary);
}
void mult(struct complex num1,struct complex num2){
     float add_real,add_imaginary;
     add_real=(num1.real*num2.real)-(num1.imaginary*num2.imaginary);
     add_imaginary=(num1.real*num2.imaginary)+(num2.real*num1.imaginary);
     printf(" \n the mult of two complex number is %f + i%f",add_real,add_imaginary);
}


void div(struct complex num1,struct complex num2){
     float add_real,add_imaginary,actual_real,actual_imaginary,add_denominator;
    add_real=(num1.real*num2.real)+(num1.imaginary*num2.imaginary);

    add_imaginary = (num1.imaginary * num2.real) - (num1.real * num2.imaginary);
    add_denominator=pow(num2.real,2)+pow(num2.imaginary,2);
    actual_real=add_real/add_denominator;
    actual_imaginary=add_imaginary/add_denominator;
    printf(" \n the div of two complex number is %f + i%f",actual_real,actual_imaginary);
}

*/

/*



#include<stdio.h>

 struct student{
     int roll_no;
     char name[20];
 };
void main()
{
    FILE *fp;
    fp=fopen("even.dat","wb");

    char another='Y';
    struct student std;
    while(another=='Y'){
        printf("enter the name of student \n");
        scanf("%s",std.name);
        printf("enter the roll no of stduent \n");
        scanf("%d",&std.roll_no);
        fwrite(&std,sizeof(std),1,fp);

        printf(" want to enter another record (Y/N)\n");
          fflush(stdin);
        another=getche();

    }
    fclose(fp);

     fp=fopen("even.dat","rb");
     while(fread(&std,sizeof(std),1,fp)==1){
        printf("the name of student is %s and roll no is %d",std.name,std.roll_no);
     }
fclose(fp);
}
*/

#include<stdio.h>
void main()
{
    int a=4,*ptr;
    ptr=&a;
    printf("%d",*ptr);
}

