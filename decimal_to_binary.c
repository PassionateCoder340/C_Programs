#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n); //input an integer
	int binaryNum[32];
	int index = 0;
	while (n>0){
		binaryNum[index] = n%2;
		n/=2;
		index++;		
	}
	for (int i = index-1; i>=0; i--){
		printf("%d",binaryNum[i]);
	}
	printf("\n");
	return 0;
}
