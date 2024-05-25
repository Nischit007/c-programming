
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
                printf(" %d \t",a[j][i]);

        }
        printf("\n");
       }
}



/*
void main()
{

   int  a[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter the element of %d%d \t",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]>10){
                sum=sum+a[i][j];
            }
        }
    }
    printf("the sum is %d",sum);

}
*/

/*
void main()
{
    int a[10],sum=0,large,small;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        large=a[0];
        small=a[0];



    }
    for(int i=0;i<10;i++){
            if(large<a[i])
            large=a[i];

       if(small>a[i])
            small=a[i];


    }
    printf("large=%d , small=%d",large,small);
}
*/
/*

void main()
{
   int  a[2][2],b[2][2],c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter the element of %d%d",i,j);
            scanf("%d%d",&a[i][j],&b[i][j]);
        }
    }

       for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                c[i][j]=a[i][j]+b[i][j];

        }


       }
       for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                printf("%d \t",c[i][j]);

        }
        printf("\n");
       }
}
*/







/*
void main()
{
    int n;
    printf("enter a size of array\t");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);




    }
    for(int i=0;i<n;i++){
            a[i]=a[i]+3;



    }
     for(int i=0;i<n;i++){
            printf("%d\n",a[i]);



    }

}
*/


/*
void main()
{
   int  a[2][3],b[2][3],sum;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("enter the element of %d%d",i,j);
            scanf("%d%d",&a[i][j],&b[i][j]);
        }
    }

       for(int i=0;i<2;i++){
           sum=0;

        for(int j=0;j<3;j++){
            sum=sum+a[i][j]+b[i][j];



        }
        printf("%d",sum);

        printf("\n");
       }
}
*/

/*
void main()
{
   int  a[3][3],sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the element of %d%d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<3;i++){
         sum=sum+a[i][i];
     }
    printf("%d",sum);



}
*/

/*

void main()
{
    int n,f;
    printf("enter a number \n");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial is %d",f);
}
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}
*/

/*
void main()
{
    int n,f;
    printf("enter a number \n");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial is %d",f);
}
int fact(int n)
{
    if(n==0 )
        return 0;
    else
        return n+fact(n-1);
}
*/
/*
void main()
{
    int n,f,m;
    printf("enter a number \n");
    scanf("%d %d",&n,&m);
    f=fact(n,m);
    printf("the factorial is %d",f);
}
int fact(int n,int m)
{
    if(n==0 ||m==0)
        return 0;
    else
        return n*m;
}

*/

/*
void main()
{
    int a,b;
    printf("enter a number \n");
    scanf("%d %d",&a,&b);
    min( a, b);

}
void min(int a,int b)
{
    if(a>b){
        printf("%d is minimum",b);
    }else{
        printf("%d is minimum",a);
    }
}

*/
