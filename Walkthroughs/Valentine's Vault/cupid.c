#include <stdio.h>
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/user.h>
#include <fcntl.h>
#include <cstring>
#include <cstdlib>
#include <ctype.h>

int func_0928() {
	    if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1) {
	           return 1; // Process is being debugged
	    } else {
		   ptrace(PTRACE_DETACH, 0, 1, 0); // Detach from debugger
		   return 0; // Process is not being debugged
            }
}

void display_story() {
       	const char *first_line = "For this Valentine's Day, Cupid is very very busy.";
        const char *second_line = "He will be searching for lovebirds to shoot with his love arrows <3";
        const char *third_line = "When Cupid was searching for his love arrows, he forgot that he put them in his vault."; 
	const char *final_line ="However, the vault can only be opened with a code.";
	const char *forgot = "Obviously.. Cupid forgot the code to the vault :(";
        const char *fourth_line = "Help Cupid save Valentine's Day..";    
	puts(first_line);
	sleep(2);
	puts(second_line);
	sleep(2);
	puts(third_line);
	sleep(2);
	puts(final_line);
	sleep(2);
	puts(forgot);
	sleep(2);
	puts(fourth_line);
	sleep(2);
}

int func_1234(const char* str1) {
        int result = 0;
        int shift = 3;
        const char* text = "Fxs1g_4qG_Duu0zv";
        size_t len = (strlen(text) <= strlen(str1)) ? strlen(text) : strlen(str1);
        char c;
        char base;
        for (size_t i = 0; i < len; ++i) {
        if (isalpha(text[i])) {
               base = isupper(text[i]) ? 'A' : 'a';
               c = ((text[i] - base - shift + 26) % 26) + base;
               result |= str1[i] ^ c;
	} else {
		result |= str1[i] ^ text[i];
	}
	}
	return result == 0;
}

void func_5362(const char* string){
        int n = func_1234(string);
        if(n){
                printf("Valentine's day is saved !");
        } else {
                printf("Valentine's day is ruined !!!!");
        }
}

int main(){
	if(func_0928()){
		printf("Debugger detected. Process terminated.");
	       	return 0;
	}
	display_story();
	printf("          ***     ***\n");
	printf("        **   ** **   **\n");
	printf("       **      *      **\n");
	printf("      **  Valentine's  **\n");
	printf("       **     Vault   **\n");
	printf("        **           **\n");
	printf("          **       **\n");
	printf("            **   **\n");
	printf("              ***\n");
	printf("       Enter the vault's code : ");
	char *input = (char*)malloc(20*sizeof(char));
	scanf("%s",input);
	func_5362(input);
	return 0;
}



