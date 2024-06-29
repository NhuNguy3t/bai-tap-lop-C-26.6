#include<stdio.h>
#include<math.h>
int dem(long long n){
	int dem=0;
	while(n>0){
		dem++;
		n/=10;
	}
	return dem;
}
long long ucln(long long a,long long b){
	while(b!=0){
		int tmp=b;
		b=a%b;
		a=tmp;
	}
	return a;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(dem(n)%2==1){
			printf("INVALID\n");
		}
		else{
			long long nua=dem(n)/2,b=1;
			for(int i=1;i<=nua;i++){
				b*=10;	
			}
			long long x=n%b,y=n/b;
			printf("%lld\n",ucln(x,y));
		}
	}
}
