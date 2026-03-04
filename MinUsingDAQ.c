#include<stdio.h>
int findMinDAQ(int a[],int beg,int end){
    int mid,min1,min2; 
    if(beg==end){
        return a[beg];
    }
    else if(beg+1==end){
        if(a[beg]<=a[end]){
            return a[beg];
        }
        else{
            return a[end];
        }
    }
    else{
        mid=(beg+end)/2;
        min1=findMinDAQ(a,beg,mid);
        min2=findMinDAQ(a,mid+1,end);
        if(min1<=min2){
            return min1;
        }
        else{
            return min2;
        }
    }
}

int main(){
int a[10],n,result;
printf("Enter Total Number of Elements:"); 
scanf("%d",&n);
printf("Enter Elements:"); 
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
result= findMinDAQ(a,0,n-1); 
printf("\nMinimum Number:%d",result);
return 0;
}