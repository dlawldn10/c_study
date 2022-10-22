#include <stdio.h>

int main(){

    // char a;
    // scanf("%c", &a);
    // printf("%c", a+1);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", a/b);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", a%b);

    // long long int a;
    // scanf("%lld", &a);
    // printf("%lld", a+1);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d\n", a+b);
    // printf("%d\n", a-b);
    // printf("%d\n", a*b);
    // printf("%d\n", a/b);
    // printf("%d\n", a%b);
    // printf("%.2f\n", (float)a/(float)b);


    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // int sum = a + b + c;
    // float avg = (float)sum / 3;
    // printf("%d\n%.1f", sum, avg);


    // // >> n : 왼쪽에 0을 n개 붙인다. n을 2**n으로 나눈 값.
    // // << n : 오른쪽에 0을 n개 붙인다. n을 2**n배 한다.
    // int a;
    // scanf("%d", &a);
    // printf("%d", a << 1);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", a << b);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // if (a>b) printf("1");
    // else printf("0");

    // int a, b;
    // scanf("%d %d", &a, &b);
    // if (a==b) printf("1");
    // else printf("0");

    // int a, b;
    // scanf("%d %d", &a, &b);
    // if (a<=b) printf("1");
    // else printf("0");

    // int a, b;
    // scanf("%d %d", &a, &b);
    // if (a!=b) printf("1");
    // else printf("0");

    // int a;
    // scanf("%d", &a);
    // printf("%d", !a);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // if(a == 1 && b == 1){
    //     printf("1");
    // }else{
    //     printf("0");
    // }

    // int a, b;
    // scanf("%d %d", &a, &b);
    // if(a == 1 || b == 1){
    //     printf("1");
    // }else{
    //     printf("0");
    // }

    // int a, b;
    // scanf("%d %d", &a, &b);
    // // printf("%d", (a != b));
    // // 또는 이렇게도 표현 가능.
    // printf("%d", (!a&&b)||(a&&!b));

    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", (a == b));
    // // 또는 이렇게도 표현 가능.
    // // printf("%d", (a&&b)||(!a&&!b));

    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", (!a && !b));

    // // 비트 연산자 ~틸드. ex) 100101 을 011010으로 바꾼다.
    // int a;
    // scanf("%d", &a);
    // printf("%d", ~a);

    // // 비트단위 AND 연산
    // // 0100 와
    // // 1101 를 하나씩 비교해서
    // // => 0100 두개 모두 1이면 1로 표현.
    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", (a&b));

    // // 비트단위 OR 연산
    // // 0100 와
    // // 1101 를 하나씩 비교해서
    // // => 1101 둘 중 하나가 1이면 1로 표현.
    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", (a|b));


    // // 비트단위 XOR 연산(caret)
    // // 0100
    // // 1101
    // // => 1001 둘이 서로 같으면 0, 둘이 서로 다르면 1로 표현.
    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", (a^b));

    // int a, b;
    // scanf("%d %d", &a, &b);
    
    // // if(a>b){
    // //     printf("a");
    // // }else{
    // //     printf("b");
    // // }
    // // 위와 같은 코드를 아래와 같이 입력할 수 있다.
    // printf("%d", (a>b)? a:b);


    // // 조건문 사용
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // if(a <= b && a <= c){
    //     printf("%d", a);
    // }else if (b <= a && b <= c)
    // {
    //     printf("%d", b);
    // }else if (c <= a && c <= b)
    // {
    //     printf("%d", c);
    // }

    // // 위와 같은 코드를 아래와 같이 입력할 수 있다.
    // // 배열 사용
    // #include <limits.h>
    // int a[3];
    // scanf("%d %d %d", &a[0], &a[1], &a[2]);
    // int min = INT_MAX;
    // if(a[0] < min){
    //     min = a[0];
    // }
    // if(a[1] < min){
    //     min = a[1];
    // }
    // if(a[2] < min){
    //     min = a[2];
    // }
    // printf("%d", min);

    // // 위와 같은 코드를 아래와 같이 입력할 수 있다.
    // // 삼항 연산자 사용
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // printf("%d", (a<b ? a:b)<c ? (a<b ? a:b):c);

    // int i, a[3];
    // scanf("%d %d %d", &a[0], &a[1], &a[2]);
    // for(i=0;i<3;i++){
    //     if(a[i]%2==0) printf("%d\n", a[i]);
    // }

    // int i, a[3];
    // scanf("%d %d %d", &a[0], &a[1], &a[2]);
    // for(i=0;i<3;i++){
    //     if(a[i]%2==0) printf("even\n");
    //     else printf("odd\n");
    // }

    // int a;
    // scanf("%d", &a);
    // if(a > 0){
    //     printf("plus\n");
    // }else{
    //     printf("minus\n");
    // }

    // if(a%2==0){
    //     printf("even\n");
    // }else{
    //     printf("odd\n");
    // }

    // int a;
    // scanf("%d", &a);
    // if (90<=a){
    //     printf("A");
    // } else if (70<=a && a<90)
    // {
    //     printf("B");
    // } else if (40<=a && a<70)
    // {
    //     printf("C");
    // }else if (0<=a && a<40)
    // {
    //     printf("D");
    // }


    int a;
    scanf("%d", &a);

    switch (a)
    {
        case 1:
        case 2:
        case 12:
            printf("winter");
            break;
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("fall");
            break;
        
    }
    

    return 0;
}
