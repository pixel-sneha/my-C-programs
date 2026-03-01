#include<stdio.h> 
#include<sys/time.h>

int semiBubblesort(int a[],int n){
    int temp,count=0; 
    for(int i=0;i<n-1;i++){
    printf("pass: %d \n",i); 
    for(int j=0;j<n-i-1;j++)
    {
    count++; 
    if(a[j]>a[j+1]){
        temp = a[j]; 
        a[j] = a[j+1]; 
        a[j+1] = temp;
        }
    for(int k=0;k<n;k++){
    printf("\t%d",a[k]);
    }
    printf("\n");
    }
}
    printf("Total Comparisons = %d\n", count); 
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
    semiBubblesort(a,n); 
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