#include<stdio.h>
int main() {
	for(int i=1;i<=5;i++) {
		for(int j=1;j<=i;j++) printf("*");
		for(int k=5;k>=i;k--) printf(" ");
		for(int m=5;m>=i;m--) printf(" ");
		for(int l=1;l<=i;l++) printf("*");
		printf("\n");
	}
	for(int i=1;i<=5;i++) {
		for(int j=5;j>=i;j--) printf("*");
		for(int k=1;k<=i;k++) printf(" ");
		for(int l=1;l<=i;l++) printf(" ");
		for(int m=5;m>=i;m--) printf("*");
		printf("\n");
	}
	return 0;
}