#include <stdio.h>


struct RADWIMPS;
struct RADWIMPS then();
struct RADWIMPS ��();


struct RADWIMPS {
     struct RADWIMPS (*then)();
     struct RADWIMPS (*��)();
};
struct RADWIMPS RADWIMPS = { then, �� };


struct RADWIMPS then() {
    printf("�O");
     return RADWIMPS;
}
struct RADWIMPS ��() {
    printf("��");
     return RADWIMPS;
}

int main() {
    RADWIMPS.then().then().then().��();
    
    return 0;
}