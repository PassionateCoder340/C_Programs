#include <stdio.h>
#include <string.h>

int main()
{
	//insertion sort
	int arr[] = {31,41,59,26,41,58};
	for (int j=1; j<=5; j++){
		int i = j-1;
		int key = arr[j];
		while (i>=0 && arr[i]>key){
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1]=key;
	}
	for (int k=0; k<=5; k++){
		printf("%d ",arr[k]);
	}
	printf("\n");
	for (int j=1; j<=5; j++){
		int i = j-1;
		int key = arr[j];
		while (i>=0 && arr[i]<key){
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1]=key;
	}
	for (int k=0; k<=5; k++){
		printf("%d ",arr[k]);
	}
	return 0;
}
