/*

#include<stdio.h>
void main(){
    FILE *fp,*dfp;
    char c;
    fp = fopen("test.txt","r");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
      dfp = fopen("hehe.txt","w");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while((c=fgetc(fp))!=EOF){
        if((c!='a')&&(c!='e')&&(c!='i')&&(c!='o')&&(c!='u')){
            fputc(c,dfp);
        }
    }
    fclose(fp);
 fclose(dfp);
}
*/
/*
#include<stdio.h>
void main(){
    FILE *fp,*dfp;
    char c[20];
    fp = fopen("test.txt","r");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
      dfp = fopen("hehe.txt","w");
    if(fp==NULL){
        puts("cannot open file");
        exit(0);
    }
    while((fscanf(fp,"%s",&c))!=EOF){
        if(strcmp(c,"Hari")==0){
            fprintf(dfp,"Ram",c);
            }else if(strcmp(c,"Gita")==0){
            fprintf(dfp,"Sita",c);
            }else{
                 fprintf(dfp,"%s",c);
            }
        }


    fclose(fp);
 fclose(dfp);
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
     output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Cannot create output file");
        exit(1);
    }
    fseek(fp3,0,SEEK_END);
    a=ftell(fp3);
     fseek(fp2,0,SEEK_END);
    b=ftell(fp2);
     fseek(fp1,0,SEEK_END);
    c=ftell(fp1);


    printf("a is %d b is %d and c is %d",a,b,c);
    if(a>b && a>c){
            printf("f3 is larger");
        rewind(fp3);
        while((c=fgetc(fp3))!=EOF){
            fputs(c,output);
        }
    }else if(b>a && b>c){
        printf("f2 is larger");
        rewind(fp2);
        while((c=fgetc(fp2))!=EOF){
            fputs(c,output);
        }
        }else{
            printf("f1 is larger");
        rewind(fp1);
        while((c=fgetc(fp1))!=EOF){
            fputs(c,output);
        }
        }
}
*/
/*


#include <stdio.h>
#include <stdlib.h>
struct number{
    int num;
};

int main() {

    FILE *fp2,*output;
    int count=0,sum=0;
    char another='Y';
    struct number num1;
     fp2 = fopen("ten3.dat", "w");
    while(another=='Y'){
         scanf("%d",&num1.num);
         fwrite(&num1,sizeof(num1),1,fp2);
         fflush(stdin);
         printf("Another record (Y/N) \n");
         another=getche();
    }
    fclose(fp2);
     fp2 = fopen("ten3.dat", "rb");

    if (output == NULL) {
        printf("Cannot create output file");
        exit(1);
    }
    while(fread(&num1,sizeof(num1),1,fp2)==1){
        count++;
        printf("%d \t",num1.num);
        sum=sum+num1.num;
    }
    float avg;
     output = fopen("avg.dat", "wb");
    avg=(float) sum/count;

fwrite(&avg,sizeof(avg),1,output);
fclose(output);

 output = fopen("avg.dat", "rb");
fread(&avg,sizeof(avg),1,output)==1;
    printf("%f",avg);
fclose(output);



}


*/


#include <stdio.h>
#include <stdlib.h>
struct number{
    int num1;
    int num2;
};

int main() {

    FILE *fp2,*output;
    int count=0,sum=0;
    char another='Y';
    struct number num;
     fp2 = fopen("ten3.dat", "w");

         scanf("%d%d",&num.num1,&num.num2);
         fwrite(&num,sizeof(num),1,fp2);


    fclose(fp2);


     fp2 = fopen("ten3.dat", "rb");

    if (output == NULL) {
        printf("Cannot create output file");
        exit(1);
    }
    fread(&num,sizeof(num),1,fp2)==1;

    sum=num.num1+num.num2;
    printf("%d",sum);


}






/*

#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }

        int num=i%2;

        for(int k=0;k<5-i+1;k++){
                printf("%d",num);
            if(k%2==0){
                num=0;
            }else{
                num=1;
            }
        }
        printf("\n");
    }
}
*/
/*
#include<stdio.h>
struct student{
    char name[20];
    char address[20];
    int roll_no;
};

void main(){
    struct student std[3];
    for(int i=0;i<3;i++){
        printf("enter the name of student\n");
        fflush(stdin);
        gets(std[i].name);
        printf("enter the address of student\n");
          fflush(stdin);
        gets(std[i].address);
        printf("enter the roll no of student\n");
        scanf("%d",&std[i].roll_no);
    }
    for(int i=0;i<3;i++){
        if(strcmp(std[i].address,"Kathmandu")==0){
            printf("the name of student is %s and address is %s and rollno is %d",std[i].name,std[i].address,std[i].roll_no);
        }
    }
}

*/


/*

#include<stdio.h>
#include<string.h>
void main(){
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


