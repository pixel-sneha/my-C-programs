#include<stdio.h> 
#include<sys/time.h>

int optBubblesort(int arr[], int n)
{
    int i,j,count=0;
    printf("pass: %d \n",i);
    for(i=0;i<n;i++){
    int swapped = 0;
    for(j=0;j<n-i-1;j++)
    {
        count++;
      if(arr[j]>arr[j+1])
      {
        count++;
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        swapped = 1; 
      }
      for(int k=0;k<n;k++){
        printf("\t%d",arr[k]);
        }
        printf("\n");
    }
    if(swapped == 0){
        break;
        }
  }
printf("No of comparisons: %d\n",count);
return -1;
}

int main(){
    int a[10],n,i,t1,t2;
    printf("Enter number of elements: "); 
    scanf("%d",&n);
    printf("Enter elements: "); 
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    struct timeval tt; 
    struct timezone tz; 
    gettimeofday(&tt,&tz); 
    t1=tt.tv_usec;
    optBubblesort(a,n); 
    gettimeofday(&tt,&tz); 
    t2=tt.tv_usec; 
    printf("\nSorted Seq: \n"); 
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\ntime taken=%d micro seconds \n",t2-t1); 
    return 0;
    }
