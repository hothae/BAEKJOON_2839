#pragma warning(disable:4996)

#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);

    while (1) {
        if (n % 5 == 0) {
            cnt += n / 5;
            break;
        }

        n -= 3;
        cnt++;
        if (n <= 0) break;
    }

    if (n < 0) printf("-1\n");
    else printf("%d\n", cnt);
}

/*
* 
백준 2839 설탕

3씩 추가해서 값을 맞춘 다음 추가한 값을 비교할 수도 있지만,
주어진 값에서 3씩 빼서 그때마다 카운트한 그 카운트숫자로도 값을 비교할 수 있다
15~17번 째 줄에 대한 무지에 대하여 리뷰
*/