#include<stdio.h>
int array(int a[100],int n){
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}	
	return sum;
}

main(){
	int n,a[n];
	int i;
	printf("Enter array size:");
	scanf("%d",&n);
	
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("sum of array elements:%d",array(a,n));
}

