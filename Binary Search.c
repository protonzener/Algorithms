#include<stdio.h>
#include<conio.h>
int main()

{
    int i,first,last,mid,n,arr[100],key;

// Getting Length of array
    printf("Enter the number of elements \n");
    scanf("%d",&n);

    printf("Enter %d integer : \n",n);
// storing values in array

    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

// Getting search value which is to be find
    printf("Enter the value to find : \n");
    scanf("%d",&key);

// Applying algorithm
    first = 0;
    last = n-1;
    mid =(first+last)/2;

// Checking condition
    while(first<=last)
    {
        if(arr[mid]<key)
        first = mid +1;
        else if (arr[mid] == key){
            printf("%d is present at index %d ",key,mid + 1);
            break;
        }
    else
        last = mid -1;
        mid = (first + last )/2;

    }
    if (first>last)
        printf("%d is not present",key);

return 0;
}
