#include <stdio.h>

int main() {
    // 정수 n과 배열을 입력받습니다.
	int n;
	scanf("%d", &n);
	int arr[100];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	// 2가 나온 횟수를 카운트해 줍니다.
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == 2)
			cnt++;
		
		// 2가 3번째로 등장할 때 그 위치를 출력합니다.
		if(cnt == 3) {
			printf("%d", i + 1);
			break;
		}
	}
	
    return 0;
}
}