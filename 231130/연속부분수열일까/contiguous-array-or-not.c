#include <stdio.h>
#include <stdbool.h>
int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int arr1[100];
	int arr2[100];
	for(int i = 0; i < n1; i++)
		scanf("%d", &arr1[i]);
	for(int i = 0; i < n2; i++)
		scanf("%d", &arr2[i]);

	for(int i = 0; i < n1; i++) 
    {
		bool success = true;
		
		for(int j = 0; j < n2; j++) 
        {

			if(i + j >= n1) 
            {
				success = false;
				break;
			}
			

			if(arr1[i + j] != arr2[j]) {
				success = false;
				break;
			}
		}
		if(success) 
        {
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	
    return 0;
}