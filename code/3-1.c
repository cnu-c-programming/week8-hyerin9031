#include <stdio.h>
#include <string.h>

int main(){
    char *names[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(strcmp(*(names+j), *(names+j+1)) > 0){
                char *tmp = *(names+j);
                *(names+j) = *(names+1+j);
                *(names+1+j) = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s\n", names[i]);
    }

    return 0;
}
