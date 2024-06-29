#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char n[500];
		scanf("%s",n);
		int x=strlen(n);
		int sum=0;
		for(int i=0; i<x; i++){
			sum+=n[i]-'0';
		}
		if(sum%3==0)	
			printf("YES\n");
		else	
			printf("NO\n");
	}
	return 0;
}
