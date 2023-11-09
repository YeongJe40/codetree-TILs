#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 문자열을 구현합니다.
	char a[9];
	char b[9];
	char str1[9];
	char str2[9];
	
	// 문자열을 입력받습니다.
	scanf("%s", a);
	scanf("%s", b);
	
	// 문자열의 길이를 구합니다.
	int len_a = strlen(a);
	int len_b = strlen(b);
	
	int idx1 = 0;
	int idx2 = 0;
	
	// a의 정수로 변환 가능한 최대 인덱스를 찾습니다.
	for(int i = 0; i < len_a; i++)
		if(a[i] <= '9' && a[i] >= '0')
			idx1++;
		else break;
	
	// b의 정수로 변환 가능한 최대 인덱스를 찾습니다.
	for(int i = 0; i < len_b; i++)
		if(b[i] <= '9' && b[i] >= '0')
			idx2++;
		else break;
	
	// a의 정수로 변환 가능한 부분을 다른 문자열로 옮깁니다.
	for(int i = 0; i < idx1; i++)
		str1[i] = a[i];
	str1[idx1] = '\0';
	
	// b의 정수로 변환 가능한 부분을 다른 문자열로 옮깁니다.
	for(int i = 0; i < idx2; i++)
		str2[i] = b[i];
	str2[idx2] = '\0';
	
	// 합쳐진 문자열을 숫자로 바꿉니다.
	int str1_int = atoi(str1);
	int str2_int = atoi(str2);
	
	// 두 숫자의 합을 출력합니다.
	printf("%d", str1_int + str2_int);
	
    return 0;
}