#include <stdio.h>

//최대공약수
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }else return gcd(b, a % b);
}

//최소공배수
int lcm(int a, int b) {
    return a*b/gcd(a,b);
}

int main() {
    int a, b;

    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
    printf("%d\n", lcm(a,b));

    return 0;
}