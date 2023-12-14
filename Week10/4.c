#include <stdio.h>

struct student {
    char name[50];
    int age;
};

int main() {
    struct student s1 = {"John", 20};
    struct student s2;

    // Copying s1 to s2
    s2 = s1;

    printf("s1.name = %s, s1.age = %d\n", s1.name, s1.age);
    printf("s2.name = %s, s2.age = %d\n", s2.name, s2.age);

    return 0;
}
