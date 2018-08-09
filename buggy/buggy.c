#include <stdio.h>

void buggy(){
    char *null_pointer = NULL;
    null_pointer[0] = 'a';
}

int main(int argc, char** argv){
    buggy();
}
