/*#include<stdio.h>
int sum(int x,int y);
void main(){
    int x=5,y=6,total;
    total=sum(x,y);
    printf("total =%d",total);


}
int sum(int x,int y){
    return x+y;
}*/



/*#include<stdio.h>
int factorial(int);
void main(){

    int n=5,r=3,C;

    C=factorial(n)/(factorial(r)*factorial(n-r));
    printf("the combination is : %d",C);
}
int factorial(int x){

    int i, fact=1;
    for(i=1;i<=x;i++){
        fact=fact*i;
        }
       return fact;


}*/

/*#include<stdio.h>
void greater(int , int);
void main(){
    int a,b;
    printf("enter values of a and b:\n");
    scanf("%d%d", &a,&b);
    greater(a,b);
    printf("thanks");

}
void greater(int x,int y){
    if(x>y)
        printf("\n %d is greater than %d",x,y);
    else
        printf("\n %d is greater than %d",y,x);
}*/



/*#include<stdio.h>
int greater(int , int);
void main(){
    int a,b,g;
    printf("enter values of a and b:\n");
    scanf("%d%d", &a,&b);
    g=greater(a,b);
    printf("%d is greater",g);

}
int greater(int x,int y){
    if(x>y)
        return x;
    else
       return y;
}*/





/*#include<stdio.h>
float totalValue();
void main(){
   float sum;
   printf("this program claculates sum:\n");
   sum=totalValue();
   printf("total Value is %f",sum);

}
float totalValue(){
    float x,y;
    printf("enter value of x,y:\n");
    scanf("%f%f", &x,&y);
    return x-y;
}*/


/*#include<stdio.h>
void totalValue();
void main(){

   printf("this program claculates sum:\n");
   totalValue();
   printf("Done");

}
void totalValue(){
    float x,y;
    printf("enter value of x,y:\n");
    scanf("%f%f", &x,&y);
     printf("total value is %f",x+y)
}*/




// recursion


/*#include<stdio.h>
void main(){
    int n,f;
    scanf("%d",&n);
    f= factorial(n);
    printf("factorial = %d",f);
}
int factorial(int n)
{
    if(n==1|| n==0)
        return 1;
    else
        return n*factorial(n-1);
}
*/









/*#include<stdio.h>
void main(){
    int n=10,s;
    s= sum(n);
    printf("Sum = %d",s);
}
int sum(int n){
{
    if( n==0)
        return 0;
    else
        return n + sum(n-1);
}



}*/





/*#include<stdio.h>
void main(){
    int n=4,pow;
    pow= power(n);
    printf("power = %d",pow);
}
int power(int n){
{
    if( n==0)
        return 1;
    else
        return n * pow(n,n-1);
}



}*/

/*#include<stdio.h>
int power(int, int);
void main()
{
    int b, n, result;
    printf("Enter value of b & n:\n ");
    scanf("%d%d", &b, &n);

    result= power(b,n);
    printf("power is %d", result);


}

int power(int b, int n){
    if(n==0)
    return 1;

    else
    return b*(power(b, n-1));

}*/








// ARRAY IN FUNCTION

/*#include<stdio.h>
void main()
{
    int a[2][3],sum;
    for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
        printf("\n enter element of array:");
        scanf("%d",&a[i][j]);
    }
    }

    sum=addition(a);
    printf("\n sum of array is: %d",sum);
    output(a);
}

int addition(int a[2][3])
{
  int sum=0;
    for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
        sum=sum+a[i][j];
            }
    }
    return sum;
}
void output(int a[2][3]){
    printf("\n Element of array are:");
    for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
        printf("%d ",a[i][j] );
            }
            printf("\n");
    }
}*/








/*void main(){
    int x=5,y=6;
    printf("\n before swap x=%d y=%d",x,y);
    swap(x,y);
    printf("\n after swap x=%d y=%d",x,y);
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\n in swap function x=%d, y=%d",x,y);
}
*/



//POINTER

/*

void main(){
    int x=5,y=6;
    printf("\n before swap x=%d y=%d",x,y);
    swap(&x,&y);
    printf("\n after swap x=%d y=%d",x,y);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\n in swap function x=%d, y=%d",x,y);
    printf("\n in swap function x=%d, y=%d",*x,*y);
}


*/


/*#include<stdio.h>
void main(){
    int x=10,*p=&x;
    printf("\n the address of x is %u",&x);
    printf("\n the value of p (address pointed by p) is %u",p);
    printf("\n the value of x is : %d",x);
    printf("\n the value of x(the value pointed by p) is %d",*p);
    printf("\n the address of p %u",&p);
    return 0;

}*/







/*#include<stdio.h>
void main(){
    int x=10;
    int *p=&x;
    int **q=&p;
    int ***r=&q;
    printf("\n using x:%d",x);
    printf("\n using p:%d",*p);
    printf("\n using q:%d",**q);
    printf(" \n using r:%d",***r);
    printf("\n adress of x =%u",&x);
printf("\n **r=%u",**r);
printf("\n ***r=%u",***r);
printf("\n adress of p =%u",&p);
printf("\n adress of q =%u",&q);

    printf("\n *r=%u",*r);
    printf( "\n adress of r =%u",&r);
    printf("\n **q=%u",**q);
    printf("\n **q=%u",*q);

}

*/

/*#include<stdio.h>
void main(){
    int a=1,b=2,c=3,d=4,e=5;
    int *p[5];
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    p[3]=&d;
    p[4]=&e;
    for(int i=0;i<5;i++){
        printf("\n value at %u=%d",p[i],*p[i]);
    }*/

  /* #include<stdio.h>
void main(){
    int id=1;
    float salary=1000;
    char sec='A';
    myFunction(&id,&salary,&sec);
    printf("id=%d,salary=%f,sec=%c",id,salary,sec);
}
void myFunction(int *x,float *y,char *z)
{
    *x=2;
    *y=2000.20;
    *z='B';


}*/



/*void main(){
    int a[]={10,20,30,40,50};
    int i, *ptr;
    ptr=&a[0];
    printf("\n Array and pointer equivalent");
    printf("\n a[i]\t\t &a[i] \t\t *ptr \t \t ptr+i \t *(a+i)\t a[i]");
    printf("\n");
    for(int i=0;i<5;i++)
        printf("\n a[%d]=%d:\t%p\t%d\t%p \t%d \t%d",i,a[i],a[i],*ptr,ptr+i,*(a+i),a[i]);
}


*/


// &a[i][j]==*(a+i)+j;
//  &a[0][0]==*(a+0)+0; // address


//&a[0][0]==*(*(a+0)+0));   // value


/*#include<stdio.h>
void main()
{
    int a[2][3]={{50,60,70},{80,90,100}};
    int i,j;
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                printf("Value at %p =%d \t", *(a+i)+j,*(*(a+i)+j));
                printf("\n");
            }
        }
}*/




//pg-236 (point haru tei bata herne)

/*#include<stdio.h>
void main(){
   float a[]={1,2,3,4,5};
   float *f1,*f2;
   f1=a;
   f2=a+3;
   printf("%d \n",f2-f1);
   printf("%d \n",f1-f2);
   printf("%f \t %f",*f1,*f2);
}
*/


/*
#include<stdio.h>
void minmax(int *,int);
void main()
{
    int n,i;
    int *num;
    printf("Enter no of elements in your array :");
    scanf("%d",&n);
    num=(int *)calloc(n,sizeof(int));
    printf("\n Enter %d integers: \n",n);
    for(i=0;i<n;i++)
        scanf("%d",num+i);
    minmax(num,n);
}
void minmax(int *no,int n)
{
    int i;
    int min,max;
    max=*no;
    min=*no;
    for(i=0;i<n;i++)
    {
        if(max< *(no+i))
            max=*(no+i);
        if(min>*(no+i))
            min=*(no+i);
    }
    printf("min=%d,max=%d",min,max);
}

*/



/*#include<stdlib.h>
void main()
{
    int n,i,sum,avg;
    int *num;
    printf("Enter no of elements in your array :");
    scanf("%d",&n);
    num=(int *)malloc(n*sizeof(int));
    printf("\n Enter %d marks of subject: \n",n);
    for(i=0;i<n;i++)
        scanf("%d",num+i);
        marks(num,n);
        printf("\n Enter new size(no of course):");
        scanf("%d",&n);
        printf("enter marks of all subject: \n");
        num=(int *)realloc(num,n*sizeof(int));
        for(i=0;i<n;i++){
            scanf("%f",(num+i));
            sum=sum + *(num+i);

        }
        avg=sum/n;
         printf("\n sum=%d, avg=%d",sum,avg);
         free(num);

}
void marks(int *no,int n){
     int sum,avg;
   for(int i=0;i<n;i++){
       sum=sum+*(no+i);

   }
   avg=sum/n;
   printf("\n sum=%d, avg=%d",sum,avg);
}
*/

/*


#include<stdio.h>
void main(){
    int a=4,b=5,p1;
    p1=product();
    printf("%d",p1);
}
void product()
{
    int p,a=5,b=4;
    p=a*b;
    return p;
}


*/

/*

#include<stdio.h>
void main(){
    int a,p;
    scanf("%d",&a);
    p= digit(a);
    printf("power = %d",p);
}
int digit(int a){
{
     static int rev=0;
     if(a!=0){
        rev= rev*10+ a%10;
        digit(a/10);
    }
    return rev;
}
}
*/




/*


#include<stdio.h>
void main()
{
    int n,p;
    printf("enter a number: \n");
    scanf("%d",&n);
    p=reverse(n);
    printf("the reverse is %d",p);
}
int reverse(int n){
    static int rev=0;
    int dig;

    if(n==0){
        return 0;
    }else{
dig=n%10;
        rev=rev*10+dig;
        reverse(n/10);


    }
    return rev;
}
*/

/*
#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    minimum(a);
    printf("done");

}
void minimum(int a ){
    int i;
    for (i=2;i<a;i++){
        if(a%i==0){
            printf("not a prime number");
        }else{
            printf("prime number");
        }
    }
*/






/*
#include<stdio.h>
void main(){
    int num[50] , i,n;
    printf("enter a number \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
            printf("enter element of array");
    scanf("%d",&num[i]);

    }
    sort(num,n);

}
void sort(int num[5] , int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;i<n;j++){
            if (num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }

        }
    }
    for(i=0;i<5;i++){
        printf("%d",num[i]);
    }

}

*/

/*
#include<stdio.h>
void main(){
    int a[3][3],b[3][3],i,j,add[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter elem \n");
            scanf("%d%d",&a[i][j],&b[i][j]);
        }
    }
    read(a,b);
    add1(a,b,add);
    print(a,b,add);

}
void read(int a[3][3], int b[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("%d \t",a[i][j]);
        }
        printf("\n");

    }
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("%d \t",b[i][j]);
        }
        printf("\n");

    }

}
void add1(int a[3][3], int b[3][3],int add[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                add[i][i]=a[i][j]+b[i][j];
        }
        printf("\n");

    }

}
void print(int a[3][3], int b[3][3],int add[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("%d",add[3][3]);
        }
        printf("\n");

    }

}


*/
/*
#include <stdio.h>

void main()
{
    int num1_real,num1_imagainary,num2_real,num2_imagainary;
    printf("enter a num1 real part");
    scanf("%d",&num1_real);
    printf("enter a num1 imagainary part");
    scanf("%d",&num1_imagainary);
    printf("enter a num2 real part");
    scanf("%d",&num2_real);
     printf("enter a num2 imagainary part");
    scanf("%d",&num2_imagainary);
    complex(num1_real,num1_imagainary,num2_real,num2_imagainary);
}

void complex(  int num1_real, int num1_imagainary, int num2_real, int num2_imagainary)


{
    int sum_real,sum_imaginary;
    sum_real= num1_real+num2_real;
    sum_imaginary=num1_imagainary+num2_imagainary;
    printf("the sum of complex number  is %d +%d i ",sum_real,sum_imaginary);


}


*/

/*

#include <stdio.h>

void main()
{
    int num1_real,num1_imagainary,num2_real,num2_imagainary;
    printf("enter a num1 real part");
    scanf("%d",&num1_real);
    printf("enter a num1 imagainary part");
    scanf("%d",&num1_imagainary);
    printf("enter a num2 real part");
    scanf("%d",&num2_real);
     printf("enter a num2 imagainary part");
    scanf("%d",&num2_imagainary);
    complex(num1_real,num1_imagainary,num2_real,num2_imagainary);
}

void complex(  int num1_real, int num1_imagainary, int num2_real, int num2_imagainary)


{
    int sum_real,sum_imaginary;
     sum_real = (num1_real * num2_real) - (num1_imagainary * num2_imagainary);
    sum_imaginary = (num1_real * num2_imagainary) + (num1_imagainary * num2_real);
    printf("the sum of complex number  is %d +%d i ",sum_real,sum_imaginary);


}
*/




/*
#include<stdio.h>
void main()
{
    int arr[5],p;
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    p=secondlar(arr);
    printf("%d",p);
}
int secondlar(int *arr)
{
    int lar1,lar2;
    lar1=*arr;
    lar2=*arr;
    for(int i=0;i<5;i++){
    if(lar1<*(arr+i)){
        lar2=lar1;
        lar1=*(arr+i);
    }else if(lar2<*(arr+i) && lar1!=*(arr+i))
    lar2=*(arr+i);


    }
    return lar2;

}


*/
/*
#include<stdio.h>
void main(){
    int arr[5];
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    accessArr(arr);
}
void accessArr(int *arr){
    int *ptr=arr;
    for(int i=0;i<5;i++){
        printf("the array is %d",*(ptr+i));
    }
}



*/

/*
#include<stdio.h>
#include<stdio.h>
void main(){
    int arr[10],n;
    printf("n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    accessArr(arr ,n);
}
void accessArr(int *arr ,int n){
    int temp,i;
    for ( i =0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
        if(*(arr+i)>*(arr+j)){
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;


        }
    }

    }
    printf("after sort");
    for(i=0;i<n;i++)

    printf("%d\n",*(arr+i));
}

*/
/*
#include<stdio.h>
#include<stdio.h>
void main(){
    int arr[10],n;
    printf("n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    accessArr(arr ,n);
}
void accessArr(int arr[] ,int n){
    int temp,i;
    for ( i =0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;


        }
    }

    }
    printf("after sort");
    for(i=0;i<n;i++)

    printf("%d\n",arr[i]);
}
*/


/*#include<stdio.h>
void main()
{
    int a[5];
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    sumElement(a);
}


void sumElement(int *a)

{
    int sum=0;
    for(int i=0;i<5;i++)
        sum=sum+*(a+i);
    printf("%d",sum);

}*/


/*#include<stdio.h>
void main(){
    int n,i;
    int *num;
    printf("enter a number of array:\n");
    scanf("%d",&n);
    num=(int *)calloc(n,sizeof(int));
    printf("\n Enter %d integers: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",num+i);
    }
        minmax(num,n);

}
void minmax(int *no,int n){
    int min,max;
     max=*no;
     min=*no;
    for(int i=0;i<n;i++){
            if(max<*(no+i))
            max=*(no+i);
            if(min>*(no+i))
                min=*(no+i);


    }
    printf("max=%d",max);
    printf("min=%d",min);
}*/




#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
}
void sort(int a ,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;


            }
        }
    }
    printf("after sorting");
    for(int i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
}



/*
#include<stdio.h>
#include<stdio.h>
void main(){
    int n;
    printf("n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    accessArr(arr ,n);
}
void accessArr(int arr[] ,int n){
    int temp,i;
    for ( i =0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;


        }
    }

    }
    printf("after sort");
    for(i=0;i<n;i++)

    printf("%d\n",arr[i]);
}
*/
/*
#include<stdio.h>
void main()
{
    int x=5,y=5;
    float cal;
    y=divide(&x,&y,&cal);
    printf("%d",y);
}
int divide(int *x,int *y,float *result)
{
    if(y!=0){
        *result=(float) *x/ *y;
    }else{
        printf("it cannot be divide by zero");
    }
    return *result;
}

*/

/*




#include<stdio.h>
void main()
{
    int arr[5],p;
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    p=secondlar(arr);
    printf("%d",p);
}
int secondlar(int *arr)



{
    int lar1,lar2;
    lar1=*arr;
    lar2=*arr;
    for(int i=0;i<5;i++){
    if(lar1<*(arr+i)){
        lar2=lar1;
        lar1=*(arr+i);
    }


    }
    return lar2;

}

*/

/*

#include<stdio.h>
void main(){
    int a[5];
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    access(a);
}
void access(int *a)
{
    int i;
    int *ptr=a;
    for(int i=0;i<5;i++)
    {
        printf("%d",*(ptr+i));
    }
}

*/

/*
#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                printf("enter element of %d%d",i,j);
            scanf("%d%d",&a[i][j],&b[i][j]);
        }
    }
    add(a,b,c);
}
void add(int a[2][2],int b[2][2],int c[2][2])
{
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}

*/

/*
#include<stdio.h>
void main()
{
    int i,j;
    for(i=5;i>=0;i--){
        for(j=5;j>=i;j--){
            printf("*\t");
        }
        printf("\n");
    }
}
*/
#include<stdio.h>
void main()
{
    int key,a[5];
    printf("enter the element of array:\t");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
        printf("\n enter the key number that you want to search in array:");
    scanf("%d",&key);
    int found=0;
     for(int i=0;i<5;i++){
        if(a[i]==key){
            found=1;
            printf("the is found");
            break;
        }
     }
     if(!found){
        printf("the key element is not found");
     }

}
