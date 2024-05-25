 /*#include<stdio.h>
 #include<stdlib.h>
 void main()
 {
     float *p, sum=0, avg;
     int n, i;
     printf("How many courses of a student: \t");
     scanf("%d", &n);
     printf("\n Enter marks of each subject:\t");
     p= (float*) malloc(n*sizeof(float));
     for(i=0; i<n; i++){
        scanf("%f", (p+i));
        sum+= *(p+i);

    }

     avg = sum/n;
     printf("\n sum = %.2f  avg=%.2f", sum, avg);
      free(p);




    printf("\n Enter new size(no of courses):");
     scanf("%d", &n);

     printf("\n Enter marks of all subject:");
     p= (float*) realloc(p, n*sizeof(float));
     sum=0;
     for(i=0; i<n; i++)
     {
         scanf("%f", (p+i));
         sum+= *(p+i);

     }
     avg= sum/n;
     printf("\n sum= %.2f  avg= %.2f", sum, avg);
     free(p);
 }
*/

/*

#include<stdio.h>
void main()
{


    float sum=0,*p,avg;
    int n,i;
    printf("enter a size  of array:\n");
    scanf("%d",&n);
    printf("enter the element of array:\n");
    p=(float *)malloc(n*sizeof(float));
    for(i=0;i<n;i++){
        scanf("%f",(p+i));
        sum=sum+*(p+i);

    }

    avg=sum/n;
    printf("the sum is %.2f and average is %.2f",sum,avg);
    int a;

    sum=0;
    printf("enter a size  of new array:\n");
    scanf("%d",&a);
    printf("enter the element of array:\n");
    p=(float *)realloc(p,n*sizeof(float));
    for(i=0;i<a;i++){
        scanf("%f",(p+i));
        sum=sum+*(p+i);

    }
    avg=sum/(n);
    printf("the sum is %.2f and average is %.2f",sum,avg);

}
*/




/*

#include<stdio.h>
void main()
{
        int n,i,*p;
    printf("enter a size  of array:\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    swap(p,n);
    free(p);


}
void swap(int *p,int n){
    int i,j,temp;

    for( i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
                if(*(p+i)>*(p+j)){
                    temp=*(p+i);
                    *(p+i)=*(p+j);
                    *(p+j)=temp;
                }

        }
    }
   for( i=0;i<n;i++){
       printf("the sort is %d",*(p+i));
   }



}
*/
/*

#include<stdio.h>
 struct employee{
    char names[20];
    int salaries[5];
};
void main(){
     struct employee emp[5];
     int count=0;
    printf("Enter the details of 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        fflush(stdin);
        gets(emp[i].names);
        printf("Salary: ");
        scanf("%d", &emp[i].salaries);
    }
struct employee salariesGreaterThan10000;

     salariesGreaterThan10000 = findSalariesGreaterThan10000(emp,count);


    printf("Salaries greater than 10000:\n");
    for (int i = 0; i < count; i++) {
        printf("Salary: %d\n", salariesGreaterThan10000[i]);
    }




}

struct employee findSalariesGreaterThan10000(struct employee emp,int count) {


    for (int i = 0; i < 5; i++) {
        if (salaries[i] > 10000) {
            return emp[i];
            count++;

        }
    }


}
*/
/*
#include<stdio.h>
struct employee{
    char name[20];
    float salary;
};
void main()
{
    struct employee emp[3];
    for (int i = 0; i < 3; i++) {
            printf("Enter the name of employee \n");
            fflush(stdin);
    gets(emp[i].name);
    printf("enter the salary of employee\n");
    scanf("%f",&emp[i].salary);
    }
    int highsalary1,highsalary2;
    highsalary1=highsalary2=0;

    for (int i = 0; i < 3; i++) {
        if(emp[highsalary1].salary<emp[i].salary){
                highsalary2=highsalary1;
            highsalary1=i;
        }else if(emp[highsalary2].salary<emp[i].salary && emp[i].salary!=emp[highsalary1].salary){
            highsalary2=i;
        }

    }
    printf("the name of employee with highsalary is %s and salary is %f",emp[highsalary2].name,emp[highsalary2].salary);
}
*/


/*
#include<stdio.h>
void main(){
    int a[3][5]={{3,7,5,-2,8},{2,5,8,3,-4},{-6,9,3,6,5}};
int b[5][3];
    printf("the array of matrix is \n");
    for(int j=0;j<5;j++){
    for(int i=0;i<3;i++){

          b[j][i]=a[i][j];
        }

    }
    for(int j=0;j<5;j++){
    for(int i=0;i<3;i++){

          printf("%d\t",b[j][i]);
        }
        printf("\n");
    }
}
*/
/*
void main(){
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
struct student{
    char name[20];
    int run;
    int wickets;
};
void main()
{
    int n;
    scanf("%d",&n);
    struct student *ptr;
    ptr==(struct student*)calloc(n,sizeof(struct student));


    for(int i=0;i<3;i++){
        printf("\n enter the player name");
        fflush(stdin);
        gets((ptr+i)->name);
        printf("\n enter their run scored:");
        scanf("%d",&(ptr+i)->run);
                printf("\n enter their wicket taken:");
                scanf("%d",&(ptr+i)->wickets);

    }
    hello(ptr);
}
void hello(struct student *ptr){
    struct student temp;
 for(int i=0;i<2;i++){
     for(int j=i+1;j<3;j++){
        if(strcmp((ptr+i)->name,(ptr+j)->name)>0){
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

/*
#include<stdio.h>
void main()
{
    for(int i=1;i<=4;i++){
        for(int space=5;space>i;space--){
                printf(" ");

        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=i-1;k>=1;k--){
            printf("%d",k);
        }

        printf("\n");
    }
}
*/

/*
void main(){
    for(int i=0;i<=3;i++){
        for(int j=i+1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
*/

/*
void main()
{
    char word[]="NEPAL";
    int a=strlen(word);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%c",word[j]);
        }
        printf("\n");
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
    int count=0;
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

*/
/*
void main()
{

    for(int i=2;i<=100;i++){
            int count=0;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                count++;
            }


        }
          if(count==1){
                printf("%d \t",i);
            }

    }
}

*/

/*

int main() {
    char c[] = "bishal";
    int a=strlen(c);
    char temp[a];
    strcpy(temp, c);

    strrev(c);

    if (strcmp(c, temp) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}


*/

/*


#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++){
            printf("\t");
        }
        for(int k=i;k<=5;k++){
            printf("\t%d",k%2);
        }
        printf("\n");
    }
}
*/

/*
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int n) {
    printf("Fibonacci Series up to %d terms: \n", n);

    for (int i = 0; i < n; i++) {
        printf("%d, ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;

    // Input the number of terms
    printf("Enter the number of terms for Fibonacci Series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return -1; // Error code for invalid input
    }

    // Print Fibonacci Series
    printFibonacciSeries(terms);

    return 0;
}

*/
#include <stdio.h>

int main() {
    int rows = 4; // You can change this to adjust the number of rows

    for (int i = 1; i <= 4; i++) {
        // Print leading spaces
        for (int space = 1; space <= 4 - i; space++) {
            printf("\t");
        }

        // Print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            printf("\t%d ", j);
        }

        // Print numbers in descending order (excluding 1)
        for (int k = i - 1; k >= 1; k--) {
            printf("\t%d ", k);
        }

        printf("\n");
    }

    return 0;
}


