#include<stdlib.h>
#include<stdio.h>
void main()
{
    int *ptr, size ,i ;
    printf("\nEnter Size :");
    scanf("%d",&size);
    int arr[size] ;
    ptr = arr ;
   /* ptr = (int *)malloc(size *sizeof(int));
    if(ptr == NULL)
    {
        printf("\n Memory allocation Failure");
    }
    else
    {
        for(i = 0 ; i < size ; i++)
        {
            printf("\n Enter Next element :");
            scanf("%d",(ptr+i));
        }
        for(i = 0 ; i < size ; i++)
        {
            printf("\n %d",*(ptr+i));
        }
    printf("\nEnter the Size to reallocate : ");
    scanf("%d",&size);
    ptr = (int *)realloc(ptr,size *sizeof(int));
    if(ptr == NULL)
    {
        printf("\n Memory allocation Failure in Reallocation.");
    }
    else
    {   for(i = i ; i < size ; i++)
        {
            printf("\n Enter Next element :");
            scanf("%d",(ptr+i));
        }
        for(i = 0 ; i < size ; i++)
        {
            printf("\n %d",ptr[i]);
        }
        free(ptr);
        ptr = NULL ;
    }
    */
    for(i = 0 ; i < size ; i++)
        {
            printf("\n %d",ptr[i]);
        }

//    }
}


