#include<stdio.h>

bool solution(char * inputString) {
    int length = 0;
    while(inputString[length] != '\0'){
        length++;
    }
    for (int i = 0; i < length; i++) {
        if (inputString[i] != inputString[length - 1 - i]) {
            return false;
        }
    }
    return true;
}
