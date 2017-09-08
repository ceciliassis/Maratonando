#include <cstdio>

int main(){
	long long int n1,n2,n3;
	while((scanf("%lld %lld %lld", &n1,&n2,&n3)==3)){
		if(n1==0 && n2==0 && n3==0)
			break;
		if(n3%10 != 6 && n3%10 !=1)
			printf("Não Achou.\n");
		else
			printf("Achou.\n");
	}
}
