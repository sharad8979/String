#include<stdio.h>
#include<string.h>
void swap(char str[],int st,int end){
	int t;
	t=str[st];
	str[st]=str[end];
	str[end]=t;
}
void reverse(char str[],int n){
	int st=0,end=n-1;
	while(st<end){
		swap(str,st,end);
		st++;
		end--;
	}
}
int main(){
	char str[10],n;
	printf("Enter the string=");
	scanf("%s",str);
	n=strlen(str);
	reverse(str,n);
	printf("String After reverse=");
	printf("%s",str);
	return 0;
}
