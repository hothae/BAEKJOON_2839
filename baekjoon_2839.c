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
���� 2839 ����

3�� �߰��ؼ� ���� ���� ���� �߰��� ���� ���� ���� ������,
�־��� ������ 3�� ���� �׶����� ī��Ʈ�� �� ī��Ʈ���ڷε� ���� ���� �� �ִ�
15~17�� ° �ٿ� ���� ������ ���Ͽ� ����
*/