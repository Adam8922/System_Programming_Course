#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc == 1) {
        printf("\n");
	return 0;
    }
    
    int i;
    for(i = 1; i < argc; i++)
        if(i < argc - 1)
            printf("%s ", argv[i]);
        else
            printf("%s\n", argv[i]);
            
    return 0;
}
