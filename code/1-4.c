#include <stdio.h>

int my_strcmp(const char *a, const char *b){
    while(*a != '\0' || *b !='\0'){
        if(*a == *b){
            a++;
            b++;
            continue;
        }
        return *a - *b;
    }
}

int main(){
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}
