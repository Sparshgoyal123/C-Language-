#include <stdio.h>    
     
int main()    
{    
    int arr[] = {1, 2, 3, 4, 5};     
    int length = sizeof(arr)/sizeof(arr[0]);    
    int n = 3,i,j;    
    printf("Original array: \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
	for(i = 0; i < n; i++){    
        int j, first;    
        first = arr[0];    
        for(j = 0; j < length-1; j++){    
            arr[j] = arr[j+1];    
        }    
        arr[j] = first;    
    }    
    printf("\n");      
    printf("Array after left rotation: \n");    
    for(i = 0; i < length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    
