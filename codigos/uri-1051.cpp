#include <bits/stdc++.h>
using namespace std;

int main(){
	float sal;
	while(cin>> sal){
		// scanf("%f", &sal);

		if(sal <=2000)
			printf("Isento\n");
		else{
			float final;
			if(sal>=2000.01 && sal <= 3000){
				final = (sal - 2000) * 0.08;
			}else if(sal >= 3000.01 && sal <= 4500){
				final = (sal - 3000)* 0.18 + (1000 * 0.08);
			}else {
				final = ((sal - 4500) * 0.28) + (1500 * 0.18) + (1000 * 0.08);
			}
			printf("R$ %.2f\n", final);
		}
	}

	
}