/*#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("C:\\Users\\User\\Desktop\\nisil\\test.txt","a");
    if(fp==NULL){
        printf("\n Cannot create file");
         exit(0);
    }else{
        printf("\n file is created");

    fputs(" pravesh study bca at nepathya",fp);
    fclose(fp);
}
}

*/
/*
#include<stdio.h>
int main()
{
    FILE *fp;
    char s[100];
    fp=fopen("C:\\Users\\User\\Desktop\\nisil\\test.txt","r");
    if(fp==NULL){
        printf("\n Cannot open file");
        exit(0);
    }else{
        printf("\n file is opened");
        fgets(s,19,fp);
        printf("\n Text from file is :%s",s);
        fclose(fp);
    }

}
*/


















/*

#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[20];
    char c;
    printf("enter filename: \t");
    gets(filename);
    fp=fopen(filename,"w");
    if(fp==NULL){
        printf("\n Cannot open file");
        exit(0);
    }else{

        printf("\n enter your text until enter key: \n");
        while((c=getchar()) != '\n')
        fputc(c,fp);
        fclose(fp);
    }

}
*/
/*

#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[20];
    char c;
    printf("enter filename: \t");
    gets(filename);
    fp=fopen(filename,"r");
    if(fp==NULL){
        printf("\n Cannot open file");
        exit(0);
    }else{

        printf("\n the content of file: \n");
        while((c=fgetc(fp)) != EOF)
        putchar(c);
        fclose(fp);
    }

}
*/



/*

#include<stdio.h>
int main()
{
    FILE *sfp,*dfp;
    char sfilename[20],dfilename[20];
    char c;
    printf("enter source filename");
    gets(sfilename);
    printf("enter destination filenae:");
    gets(dfilename);
    sfp=fopen(sfilename,"r");
    if(sfp==NULL){
        printf("cannnot open sfilename");
        exit(0);
    }
    dfp=fopen(dfilename,"w");
    if(dfp==NULL){
        printf("cannot open dfilename");
        exit(0);
    }
    while((c=fgetc(sfp)) !=EOF)
        fputc(c,dfp);
    printf("\n copied....");
    fclose(dfp);
    fclose(sfp);
}

*/
/*

#include<stdio.h>
void main()
{
    FILE *fp;
    char name[20];
    int id;
    char address[20];
    float salary;
    fp=fopen("nishant.txt","w");
    if(fp==NULL){
        printf("cannot open file:");
        exit(0);
    }
    printf("\n enter name of employee: \t");
    gets(name);
    printf("\n Enter id");
    scanf("%d",&id);
    printf("\n Ebter address of %s: \t",name);
    fflush(stdin);
    gets(address);
    printf("enter salary:");
    scanf("%f",&salary);
    printf("\n Now Writing to file ..");
    fprintf(fp,"Name=5s \n ID=%d \n Address =%s \n salary=%.2f",name,id,address,salary);
    printf("\n completed");
    fclose(fp);
}
*/
/*
#include<stdio.h>
int main()
{

    FILE *fp;
    char another='Y';
    struct employee
    {
        char name[40];
        int age;
        float salary;
    };
    struct employee emp;
    fp = fopen("employee.dat","wb");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while(another=='Y'){
            printf("enter  name,age and salary of an employee: \n");
            scanf("%s %d %f",&emp.name,&emp.age,&emp.salary);
            fwrite(&emp,sizeof(emp),1,fp);
            printf("\n add another record (Y\N) \n");
            fflush(stdin);
            another=getche();

    }
    fclose(fp);
    return 0;
    }
    */
/*
    #include<stdio.h>
int main()
{

    FILE *fp;
    char another='Y';
    struct employee
    {
        char name[40];
        int age;
        float salary;
    };
    struct employee emp;
    fp = fopen("employee.dat","rb");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    printf("\n The records of employee are: \n");
    while(fread(&emp,sizeof(emp),1,fp)==1)
        printf("\n %s %d %f",emp.name,emp.age,emp.salary);
    fclose(fp);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    FILE *fp;
    fp =fopen("student.txt","rb");
    if(fp==NULL){
        printf("\n Error opening file !!!");
        exit(0);
    }
    printf("\n Position pointer = %ld \n",ftell(fp));
    fseek(fp,0,2);
    printf("\n Position pointer = %ld \n",ftell(fp));
    rewind(fp);
    printf("\n Position pointer = %ld \n",ftell(fp));
    fclose(fp);
    return 0;
}
*/
/*

#include<stdio.h>
void main(){
    FILE *sfp, *dfp;
    char sfilename[10],dfilename[10];
    char c;
    gets(sfilename);

    gets(dfilename);
        sfp=fopen(sfilename,"r");


    if(sfp==NULL){
        printf("\n cannot open file");
    }

    sfp=fopen(dfilename,"w");
    if(dfp==NULL){
        printf("\n create destination file first");
    }
    while((c=fgetc(sfp))!= EOF)
        putc(c,dfp);
        printf("\n copied...");
    fclose(sfp);
    fclose(dfp);



}
*/

/*

#include<stdio.h>
void main()
{
    FILE *fp;
    char str[100];
    fp=fopen("test.txt","a");
    if(fp==NULL){
        printf("\n cannot open file");
        exit(0);
    }

    fputs("coder 2024 winner is nisil",fp);
    fclose(fp);

}


*/

/*
#include<stdio.h>
void main()
{
    FILE *sfp,*dfp;
    char c;
    sfp=fopen("myfile.txt","r");
      if(sfp==NULL){
        printf("\n cannot open file");
        exit(0);
      }
        dfp=fopen("change.txt","w");
         if(dfp==NULL){
        printf("\n cannot open file");
        exit(0);
         }
        while((c=fgetc(sfp))!= EOF){
            if(c!='a' && c!='e' && c!='i' &&c!='o' &&c!='u')
                fputc(c,dfp);

        }
         printf("\n copied....");
            fclose(sfp);
            fclose(dfp);



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
void main(){
    FILE *sfp,*dfp;
    char c;
       int num1,num2,sum;
    sfp=fopen("test.txt","r");
    if(sfp==NULL){
        puts("cannot open file");
        exit(0);

    }
    fscanf(sfp,"%d",&num1);
    fscanf(sfp,"%d",&num1);

    fclose(sfp);
    sum=num1+num2;

    dfp=fopen("myfile.txt","w");
    if(dfp==NULL){
        puts("cannot open file");
        exit(0);
    }

   fprintf(dfp,"%d",sum);
printf("the sum is calculted:");



    fclose(dfp);


}
*/

/*
#include<stdio.h>
void main()
{
    FILE *fp;
    int num1,num2;
    char filename[20];
    gets(filename);
    fp=fopen(filename,"w");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);

    }
    scanf("%d%d",&num1,&num2);
    fprintf(fp,"the num1 is %d and num2 is %d",num1,num2);
    fclose(fp);
}
*/


