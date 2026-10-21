#include <stdio.h>
void stringcopy(char *, char *);
int main(){
    char a[30] = "@#Hello World!";
    stringcopy(a, a + 2);
    printf("%s\n", a);
    
    int i = 10;
    printf("%d\n", ++i);


    return 0;

}
void stringcopy(char *s, char *t) {
while(*t)
*s++ = *t++;
}