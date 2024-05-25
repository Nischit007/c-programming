/*#include<stdio.h>
#include<conio.h>
void main(){
    int arr[2][3];
    int arr1[3][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
                printf("enter a number %d%d",i,j);
        scanf("%d",&arr[i][j]);
        }}

for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
                arr1[i][j]=arr[j][i];

        }}



printf("Transpose of matrix is:\n");
 for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<2;j++){
                printf(" %d\t",arr1[i][j]);
        }}

}*/


//wap to read two m*n matrix and display their sum and difference type #define M   #define N 3




/*#include<stdio.h>
void main(){
    int i ,key,a[5];
    printf("enter 5 number:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a key value:\n");
    scanf("%d",&key);
    int found=0;
    for(i=0;i<5;i++){
        if(key==a[5]){
                found=1;
            printf("found\n");
            break;

        }
        }
        if(!found)
            printf("Not found");


}
*/

/*#include<stdio.h>

void main(){
    int A[3][3],B[3][3],SUM[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("enter a number %d%d \n",i,j);
        scanf("%d",&A[i][j]);
        printf("enter a  number for 2nd matrix %d%d \n",i,j);
        scanf("%d",&B[i][j]);

}
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                SUM[i][j]=A[i][j]+B[i][j];
        }
     }
     printf("the sum of two matrix is : \n");

for(int i=0;i<3;i++){
    printf("\n");
         for(int j=0;j<3;j++){
                printf("%d\t",SUM[i][j]);
        }
}
}*/




/*#include <stdio.h>
void main(){
    int a[3][3];

    int sum;
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
               printf("enter a number %d%d",i,j);
        scanf("%d",&a[i][j]);

        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
                sum = sum + a[i][j];
        }}
        printf(" sum of all elements is %d\t",sum);*/




 /*       #include <stdio.h>
void main(){
    int a[3][3];
    int b[3][3];
    int sum;
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
               printf("enter a number %d%d",i,j);
        scanf("%d",&a[i][j]);

        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
                sum = sum + a[i][j];
        }}
        printf(" sum of all elements is %d\t",sum);
}*/













/*#include<stdio.h>
void main(){
    char name[20];

            printf("enter your name:\n");

            scanf("%[A-Z]",name);
    printf("%s\n",name);

}*/

/*#include<string.h>
void main(){
    char str1[]="hello";
    char str2[6];
    strcpy(str2,str1);
    printf("Copied string is %s",str2);

}*/

/*#include<string.h>
void main(){
    int length;
    char str[50];
    printf("enter string:\n");
    gets(str);
    length=strlen(str);
    printf("\n length=%d",length);
}*/

/*#include<string.h>
void main(){
    char x[50]="happy ";
    char y[]="new year";
    strcat(x,y);
    printf("string after concating=%s",x);
}
*/


/*#include<string.h>
void main(){
    int length;
    char str[50];
    printf("enter string:\n");
    gets(str);
    strrev(str);
    printf("revese string is :%s",str);
}*/



/*#include<string.h>
void main(){
    int length;
    char str[50];
    printf("enter string:\n");
    gets(str);
    strupr(str);
    printf("string to uppercase is :%s",str);
}*/


/*#include<string.h>
void main(){
    int length;
    char str[50];
    printf("enter string:\n");
    gets(str);
    strlwr(str);
    printf("string to uppercase is :%s",str);
}
*/


/*#include<string.h>
void main(){
    char str1[50];
    char str2[50];
    printf("enter str1:");
    scanf("%s",str1);
    printf("enter str2:");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0)
        printf("the two string are identical");
    else if(strcmp(str1,str2)>0)
        printf("str1 is greater than str2");
    else
        printf("str2 is greater than str1");
}*/




// PRACTICE-----------------------------------
/*
#include<stdio.h>
#include<conio.h>

void main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("enter a number %d%d",i,j);
        scanf("%d",&arr[i][j]);
        }}





printf("element of matrix is:\n");
 for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
                printf(" %d\t",arr[i][j]);
        }}

}*/





/*

#include<stdio.h>
void main(){
    int a[2][3];
    int b[3][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
                printf("enter the element of matrix: \n");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
                b[i][j]=a[j][i];
                }
    }
    printf("the transpose of matrix is :");
    for(int i=0;i<3;i++){
            printf("\n");
        for(int j=0;j<2;j++){
                printf("%d\t",b[i][j]);

        }

                }

}
*/

/*#include<stdio.h>
void main(){
    int a[2][3];
  int sum=0;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
                printf("enter the element of matrix: \n");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
                sum=sum+a[i][j];

                }
    }
    printf("the sum of all the element of matrix is %d",sum);

}*/



/*#include<stdio.h>
void main(){
    char name[]="i am ";
    char name1[]="nisil";
    strcat(name,name1);
    printf("%s",name);
}
/*




/*#include<string.h>
void main(){
    char name[20];
    char name1[18];
    printf("enter your name:\n");
    gets(name);
    printf("enter your 2nd name:\n");
        gets(name1);
        if(strcmp(name,name1)==0){
            printf("it is equal");
        }else if(strcmp(name,name1)>0){
            printf("%s is greater than %s",name,name1);
        }else{
            printf("%s is greater than %s",name1,name);
        }

}*/

/*

#include <stdio.h>
#define M 3
#define N 3
void main(){
    int max,min;
    int a[M][N];


    for(int i=0;i<M;i++){
        for (int j=0;j<N;j++){
               printf("enter a number %d%d",i,j);
        scanf("%d",&a[i][j]);

        }
    }
    max=a[0][0];
    min=a[0][0];

    for(int i=0;i<M;i++){
        for (int j=0;j<N;j++){
                if(max<a[i][j])
                max=a[i][j];
                 if(min>a[i][j])
                min=a[i][j];


        }
    }
    printf("%d\n",min);
    printf("%d\n",max);
}
*/




/*#include <stdio.h>
void main(){
    int a[2][2];
    int sum;


    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
               printf("enter a number %d%d",i,j);
        scanf("%d",&a[i][j]);

        }
    }
    for(int i=0;i<2;i++){
            sum=0;
        for (int j=0;j<2;j++){
                sum = sum + a[j][i];
        }
        printf(" sum of all elements is %d\t",sum);
        }

}

*/

/*#include<stdio.h>
void main(){
    int a[100],i,sum=0;
    for(i=1;i<10;i++){
        scanf("%d",&a[i]);
            sum=sum+a[i];

    }
    for(i=1;i<10;i++){
        printf("%d",a[i]);
    }
    for(i=1;i<10;i++){
        printf("%d",sum);
    }
}*/



/*
#include<stdio.h>
void main(){
    int n,m;
     printf("enter a size of array i");
    scanf("%d",&n);
    printf("enter a size of array j");
    scanf("%d",&m);

    int i,j,a[n][m],b[n][m],c[m][n];


    for(i=0;i<n;i++){
             for(j=0;j<m;j++){
                    printf("enter a element of array:\n");
             scanf("%d %d",&a[i][j],&b[i][j]);

             }
    }

 for(i=0;i<n;i++){
             for(j=0;j<m;j++){

c[m][n]=a[n][m]+b[n][m];

             }
 }
  for(i=0;i<n;i++){
             for(j=0;j<m;j++){
                    printf("%d",c[m][n]);
             }
             printf("\n");
  }

    }


*/
/*
#include<string.h>
#include<stdio.h>
void main()
{
     char str[100];
     printf("enter a string that you wantto enter");
     gets(str);
    reverse(str);
}
void reverse(char str[100])
{
    int length;
    length=strlen(str);
    strrev(str);
    puts(str);
    printf("%d",length);
}


*/





