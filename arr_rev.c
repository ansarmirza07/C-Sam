#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    //int n=num;
    int rev[num],j=0;
    for(int i=num-1;i>=0;i--)
    {
        rev[j]=arr[i];
        j++;
       
    }


    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", rev[i]);
    return 0;
}
