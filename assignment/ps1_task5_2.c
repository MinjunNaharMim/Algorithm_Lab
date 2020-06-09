#include <stdio.h>

int FibList(int n) {
    int F[n + 1];
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= n; i++) F[i] = F[i - 1] + F[i - 2];
    return F[n];
}

int main() {
    int n;
    printf("Fn: ");
    scanf("%d",&n);

    printf("%d", FibList(n));

    return 0;
}
