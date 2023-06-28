#include<stdio.h>
int  length(char string[100]){
	int i;
	int l=0;
	for(i=0;string[i]!='\0';i++){
		l++;
	}	
	return l;
}

main(){
	char string[100];
		
	printf("Enter any string:");
	scanf("%s",string);
	printf("length of string :%d",length(string));
}

