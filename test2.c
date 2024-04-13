#include<stdio.h>

int main()
{
    int n, add = 0;

    printf("Enter a positive integer as the upper limit : ");
    scanf("%d",&n);

    for(int i=1; i<n; i++){
        if(i % 3 == 0 || i % 5 == 0){
            add += i;
        }
    }
    printf("%d\n",add);
    
    return 0;
}