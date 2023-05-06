#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void malicious() {
    printf("malicious code\n");
}

void processuserInput(char* input){
    char buf[12];
    strcpy(buf, input);
    printf("%s\n", buf);
}
int main(int argc, char** argv){
    processuserInput(argv[1]);
    return 0;
}