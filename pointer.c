/*void main()
{
    int a[10];

    printf("enter 10 number: \n");
    for(int i=0;i<10;i++){
            scanf("%d",&a[i]);
    }
    seclarger(a);
}
void seclarger(int a[])
{
    int lar,seclar;
    lar=seclar=a[0];
     for(int i=0;i<10;i++){
            if(lar<a[i])
            seclar=lar;
            lar=a[i];
            if(seclar<a[i] && a[i]!=lar)
                seclar=a[i];

    }
    printf(" seclargest number is : %d",seclar);
}
*/

/*
void main()
{
    int a[10];

    printf("enter 10 number: \n");
    for(int i=0;i<10;i++){
            scanf("%d",&a[i]);
    }
    seclarger(a);
}
void seclarger(int *a)
{
    int lar,seclar;
    lar=seclar=*a;
     for(int i=0;i<10;i++){
            if(lar<*(a+i))
            seclar=lar;
            lar=*(a+i);
            if(seclar<*(a+i) && *(a+i)!=lar)
                seclar=*(a+i);

    }
    printf(" seclargest number is : %d",seclar);
}
*/
/*
void main()
{
    int a[10];

    printf("enter 10 number: \n");
    for(int i=0;i<10;i++){
            scanf("%d",&a[i]);
    }
    access(a);
}
void access(int *a)
{
    int sum=0;
      for(int i=0;i<10;i++){
            sum=sum + *(a+i);
    }
    printf("%d",sum);

}

*/

void add(int *,int *,int *);
void main()
{
    int a,b,sum,quotient;
    printf("enter two number a and b \n");
    scanf("%d%d",&a,&b);
    add(&a,&b,&sum);
    divide(&a,&b,&quotient);
    printf("%d\n",sum);
     printf("%d",quotient);


}

void add(int *a,int *b,int *result){
    *result=*a+*b;
}

void divide(int *a,int *b,int *result){
    if(b!=0){
        *result= *a/ *b;
    }else{
        printf("cannot divide by zero");
    }
}


/*
void main()
{
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
    int a[n];
 printf("enter n number \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   sum(a,n);

}

void sum(int *a,int n){
    int sum=0, average;
    for(int i=0;i<n;i++){
    sum=sum+ *(a+i);
    }
    average=sum/n;
    printf("%d \n",sum);
    printf("%d",average);
}

*/


/*
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    sort(a,n);
}
void sort(int *a,int n)
{
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
    printf("the sort of array is : \n");
      for(int i=0;i<n;i++){
        printf("%d",*(a+i));
      }
}
*/

/*

#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    sort(a,n);
}
void sort(int *a,int n)
{
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(a+i)<*(a+j)){
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    printf("the sort of array is : \n");
      for(int i=0;i<n;i++){
        printf("%d",*(a+i));
      }
}
*/

/*
void main(){
    int n,s;
    printf("enter a number that you want : \n");
    scanf("%d",&n);
    s=sum(n);
    printf("the sum of number is %d",s);

}
int sum(int n)
{
    static int sum1=0;

    if(n==0){
        return 0;
    }else{
        sum1=sum1+n%10;

        sum(n/10);
    }
    return sum;
}
*/

/*

void main()
{
    int n,count;
    printf("enter any number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            if(n%i==0)
        count++;
    }
    if(count==2)
        printf("prime number");
    else
        printf("not prime number");
}
*/
