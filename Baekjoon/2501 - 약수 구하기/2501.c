#include <stdio.h>

int main() {
    int n, k, cnt = 0;
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++) {
        if(n%i) continue;
        else {
            cnt++;
            if(k == cnt) {
                printf("%d", i);
                return 0;
            }
        }
    }
    printf("0");
}
