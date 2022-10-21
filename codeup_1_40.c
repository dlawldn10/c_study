#include <stdio.h>

int main(){

    // printf("Hello\nWorld\n");
    // printf("\'Hello\'");
    // printf("\"Hello World\"");
    // printf("\"!@#$%%^&*()\"");
    // printf("\"C:\\Download\\hello.cpp\"");

    // int a;
    // scanf("%d", &a);
    // printf("%d", a);

    // char a;
    // scanf("%c", &a);
    // printf("%c", a);

    // float a;
    // scanf("%f", &a);
    // printf("%f", a);

    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d %d", a, b);

    // int a, b;
    // scanf("%c %c", &a, &b);
    // printf("%c %c", b, a);

    // float a;
    // scanf("%f", &a);
    // printf("%.2f", a);

    // int a;
    // scanf("%d", &a);
    // printf("%d %d %d", a, a, a);

    // int a, b;
    // scanf("%d:%d", &a, &b);
    // printf("%d:%d", a, b);

    // int year, month, day;
    // scanf("%d.%d.%d", &year, &month, &day);
    // // 02d 이처럼 넣을 경우 1월의 경우 01 이렇게 앞에 0이 채워져서 출력됨.
    // printf("%04d.%02d.%02d", year, month, day);

    // int a, b;
    // scanf("%d-%d", &a, &b);
    // printf("%06d%07d", a, b);

    // // 배열을 이용하여 문자열 string표현한다.
    // char word[51] = "";
    // // 배열의 포인터는 기본적으로 배열의 맨 앞자리를 가리키고 있으므로, 배열은 &빼고 넣어도 무방하다.
    // scanf("%s", &word);
    // printf("%s", word);

    // char a[2001];
    // // pintf는 공백 기준으로 구분하여 받기때문에, 한 줄을 공백 포함하여 입력받을때는 fgets 를 이용하여 입력받을 수 있다.
    // // a라는 문자열에 2000자까지 stdin으로 입력받겠다. 
    // fgets(a, 2000, stdin);
    // printf("%s", a);

    // int a, b;
    // scanf("%d.%d", &a, &b);
    // printf("%d\n%d", a, b);

    // // 배열로 입력이 들어왔을 때 마지막에 null값이 들어감.
    // // 따라서 배열의 첫번째 부터 null값의 바로 전까지 값들을 읽는 것.
    // // abc\0
    // char a[21];
    // scanf("%s", a);
    // // C언어는 반복문 돌리는 변수를 바깥쪽에 선언한다.
    // int i;
    // for(i=0; i<21 ;i++){
    //     if(a[i] == '\0') break;
    //     printf("\'%c\'\n", a[i]);
    // }

    // int a, b, c, d, e;
    // scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    // printf("[%d0000]\n", a);
    // printf("[%d000]\n", b);
    // printf("[%d00]\n", c);
    // printf("[%d0]\n", d);
    // printf("[%d]\n", e);

    // int h, m, s;
    // scanf("%d:%d:%d", &h, &m, &s);
    // printf("%d", m);

    // int y, m, d;
    // scanf("%d.%d.%d", &y, &m, &d);
    // printf("%02d-%02d-%04d", d, m, y);

    // // 음의 부호 쪽은 표현하지 않는 자료형.
    // // unsigned int 데이터형을 사용하면 0 ~ 4294967295 범위의 정수를 저장할 수 있다.
    // unsigned int a;
    // scanf("%u", &a);
    // printf("%u", a);

    // // double 데이터형을 사용하면 flaot의 2배에 해당하는 범위를 커버할 수 있다.
    // double a;
    // scanf("%lf", &a);
    // printf("%.11lf", a);


    // // long long int 데이터형을 사용하면 
    // // -9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807 범위의 정수값을 저장시킬 수 있다.
    // long long int a;
    // scanf("%lld", &a);
    // printf("%lld", a);

    // // 10진수는 %d, 8진수는 %o (octal).
    // // 10진수: 0 1 2 3 4 5 6 7 8 9 10
    // // 8진수: 0 1 2 3 4 5 6 7 10 11 12
    // int a;
    // scanf("%d", &a);
    // printf("%o", a);

    // // 16진수는 %x
    // // 0 1 2 3 4 5 6 7 8 9 a b c d e f
    // int a;
    // scanf("%d", &a);
    // printf("%x", a);


    // // %x를 %X와 같이 대문자로 적어주면 출력도 대문자로 할 수 있다.
    // int a;
    // scanf("%d", &a);
    // printf("%X", a);

    // int a;
    // scanf("%o", &a);
    // printf("%d", a);

    // int a;
    // scanf("%x", &a);
    // printf("%o", a);

    // // char를 받아서 %d로 출력하게 되면 저절로 아스키 코드 값을 얻을 수 있다.
    // char a;
    // scanf("%c", &a);
    // printf("%d", a);

    // // int를 받아서 %c로 출력하게 되면 저절로 그 정수 = 아스키코드 값에 해당하는 char를 출력해준다.
    // // 아스키코드의 범위를 넘어가면 알수없는 문자 나옴.
    // int a;
    // scanf("%d", &a);
    // printf("%c", a);

    // long long int a, b;
    // scanf("%lld %lld", &a, &b);
    // printf("%lld", a+b);

    // int a;
    // scanf("%d", &a);
    // printf("%d", -a);


    return 0;
}
