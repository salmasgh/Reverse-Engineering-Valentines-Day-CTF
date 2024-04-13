#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func_234(char* input) {
    if(strlen(input) < 9) return 0;
    const char* p1 = "35T74";
    const char* p2 = "h1AorC";
    const char* p3 = "0XhYc";
    for(int i = 0; i < strlen(p1); i += 2) {
        if(input[strlen(input) - 1 - i / 2] != p1[i]) {
            return 0;
        }
    }

    for(int i = 1; i < strlen(p2); i += 2) {
        if(input[strlen(input) - 4 - i / 2] != p2[i]) {
            return 0;
        }
    }

    for(int i = 0; i < strlen(p3); i += 2) {
        if(input[strlen(input) - 7 - i / 2] != p3[i]) {
            return 0;
        }
    }
    return 1;
}

int func_0928(char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count; // Return count instead of calling func_234
}

// Function to reverse a string
int func_369(char* str) {
    size_t len = strlen(str);
    char* reversed_str = (char*)malloc(len + 1);
    if (reversed_str == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (size_t i = 0; i < len; i++) {
        reversed_str[i] = str[len - i - 1];
    }
    reversed_str[len] = '\0';
    return func_234(str); // Call func_234 with reversed_str
}


int main(int argc, char *argv[]) {
    if(argc == 1) { // Check if no arguments are provided
        printf("Help Sabrina find her post-it.");
    } else {
        if(func_369(argv[1])) {
            printf("Well Done !");
        } else {
            printf("That's not it !");
        }
    }
    return 0;
}
