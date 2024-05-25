
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",&a[i]);
    }
    return 0;
}



/*

#include<stdio.h>
int main()
{
      int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int large=a[0];

    for(int i=0;i<n;i++){
        if(large<a[i]){
            large=a[i];
        }
    }
    printf("%d",large);
    return 0;
}
*/










