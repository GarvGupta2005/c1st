#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for( int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
            arr[j]=0;
            printf("%d ",arr[j]); 
        }
        else
        {
            arr[j]=1;
            printf("%d ",arr[j]); 
        }
    }
            
  
}
