/*void main()
{
    int a[5],b;

    printf("enter a array of number \n");
    for (int i=0;i<5;i++){
        scanf("%d\n",a[i]);
    }
    printf("Enter a number that you want to search \n ");
    scanf("%d",&b);
    int found =0;
    for (int i=0;i<5;i++){
    if(a[i]==b){
        found=1;
    printf("the number is found");
    break;
    }
}
if(!found)
    printf("not found");
}
*/

/*
#include<stdio.h>


struct student{
    char name[20];
    int rollno;
    float marks;
    char address[20];
}s1={"Ram prasad",4};
struct teacher{
    char name[20];
    int rollno;
    float marks;
    char address[20];
};

void main()
{
    struct teacher t1;
    struct student s2={"Sudan",4};
    struct student stud1,stud2;
    printf("enter name of student\t");
    gets(stud1.name);
    printf("enter rollno");
    scanf("%d",&stud1.rollno);

    printf("your name is\n");
    printf("%s\n",stud1.name);
    printf("your rollno  is\n");
     printf("%d",stud1.rollno);
     fflush(stdin);

 printf("\n enter name of student\t");
    gets(stud2.name);
    printf("enter rollno");
    scanf("%d",&stud2.rollno);

    printf("your name is\n");
    printf("%s\n",stud2.name);
    printf("your rollno  is\n");
     printf("%d",stud2.rollno);

     printf("\n enter name of student  S1\t");



    printf("your name is\n");
    printf("%s\n",s1.name);
    printf("your rollno  is\n");
     printf("%d",s1.rollno);

        printf("your name is\n");
    printf("%s\n",s2.name);
    printf("your rollno  is\n");
     printf("%d",s2.rollno);

        printf("your name is\n");
    printf("%s\n",t1.name);
    printf("your rollno  is\n");
     printf("%d",t1.rollno);
}
*/
/*

struct student{
    char name[20];
    int rollno;
    char gender[20];
};
struct teacher{
    char name[20];
    int salary;

    char gender;
};

void main()
{
    struct teacher t1;
    struct student s1;


    printf("enter name of teacher\n");
    gets(t1.name);
    printf("enter salary  is\n");
     scanf("%d",&t1.salary);
     printf("enter gender is\n");
      fflush(stdin);
    scanf("%c",&t1.gender);
    fflush(stdin);

      printf("enter name of student \n");
    gets(s1.name);
    printf("enter rollno  is\n");
     scanf("%d",&s1.rollno);
      fflush(stdin);
     printf("enter gender is\n");
      fflush(stdin);
    scanf("%c",&s1.gender);

 fflush(stdin);

    printf("teacher name = %s\n",t1.name);

     printf("salary= %d \n",t1.salary);

    printf("gender= %c\n",t1.gender);

      printf("student name = %s\n",s1.name);

     printf("roll no= %d\n",s1.rollno);

    printf("gender= %c\n",s1.gender);


}
*/

/*
void main()
{
    struct student {
        char name[20];
        int rollno;
    };
    struct student s[3];
    for(int i=0;i<3;i++)
    {
         fflush(stdin);
        printf("enter name: \n");
        gets(s[i].name);
         fflush(stdin);
        printf("enter roll no: \n");
        scanf("%d",&s[i].rollno);


    }
    for(int i=0;i<3;i++){

            printf("name = %s ",s[i].name);

    printf(" rollno = %d",s[i].rollno);
    }
}
*/
/*
void main()
{
    struct student{
        char name[20];
        int rollno;
        struct
        {
            int date;
            int month;
            int year;
        }birthday;
    };
    struct student std;
    printf("enter name: \t");
    gets(std.name);
    printf("enter rollno: \t");
    scanf("%d",&std.rollno);
    printf("enter birthday,enter date:");
    scanf("%d",&std.birthday.date);
    printf("enter birthday,month");
    scanf("%d",&std.birthday.month);
    printf("enter birthday,year");
    scanf("%d",&std.birthday.year);
    printf("\n \t \t \t your biodata is: \n");
    printf("\nName = %s",std.name);
    printf("\nrollno = %d",std.rollno);
    printf("\n birthday date: %d-%d-%d",std.birthday.year,std.birthday.month,std.birthday.date);


}
*/
/*

void main()
{
     struct birthday
        {
            int date;
            int month;
            int year;
        };
    struct student{
        char name[20];
        int rollno;
        struct birthday bd;
    };


    struct student std;
    printf("enter name: \t");
    gets(std.name);
    printf("enter rollno: \t");
    scanf("%d",&std.rollno);
    printf("enter birthday,enter date:");
    scanf("%d",&std.bd.date);
    printf("enter birthday,month");
    scanf("%d",&std.bd.month);
    printf("enter birthday,year");
    scanf("%d",&std.bd.year);
    printf("\n \t \t \t your biodata is: \n");
    printf("\nName = %s",std.name);
    printf("\nrollno = %d",std.rollno);
    printf("\n birthday date: %d-%d-%d",std.bd.year,std.bd.month,std.bd.date);


}

*/
/*

void main()
{
    struct book{
        char title[20];
        float price;
    };
    struct book bk,*ptr;
    ptr=&bk;
    printf("enter title of book : \t");
    gets(ptr->title);
    printf("enter price of book : \t");
    scanf("%f",&ptr->price);
    printf("%s",ptr->title);
    printf("%f",ptr->price);
}
*/


//  . with struct/union variable
//  -> with address of struct/union
/*
void display(char [],float );

void main()
{
    struct book{
        char title[20];
        float price;
    };
    struct book bk,*ptr;
    ptr=&bk;
    printf("enter title of book : \t");
    gets(ptr->title);
    printf("enter price of book : \t");
    scanf("%f",&ptr->price);
    display(bk.title,bk.price);

}
void display(char tt[],float pp)
{
    printf("title=%s,price =%.2f",tt, pp);
}
*/

/*
 struct book{
        char title[20];
        float price;
    };
    void display(struct book);

void main()
{

    struct book bk,*ptr;
    ptr=&bk;
    printf("enter title of book : \t");
    gets(ptr->title);
    printf("enter price of book : \t");
    scanf("%f",&ptr->price);
    display(bk);

}
void display(struct book b)
{
    printf("title=%s,price =%.2f",b.title,b.price);
}

*/
/*
struct book{
        char title[20];
        float price;
    };
    void display(struct book *);

void main()
{

    struct book bk;

    printf("enter title of book : \t");
    gets(bk.title);
    printf("enter price of book : \t");
    scanf("%f",&bk.price);
    display(&bk);

}
void display(struct book *b)
{
    printf("title=%s,price =%.2f",b->title,b->price);
}
*/


struct book{
    char title[20];
    float price;

};
void display(struct book *);

void main()
{
    struct book bk,*ptr;
    ptr=&bk;
    gets(bk.title);
    scanf("%f",&bk.price);
    display(&bk);

}
void display(struct book *b){
    printf("%s%f",b->title,b->price);
}
