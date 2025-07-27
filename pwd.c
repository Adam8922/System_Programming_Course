#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int size = 1024;
    char* buf = (char *)malloc((size_t)size);
    char* ptr;

    if(buf == NULL)
	    return 1;

    if((ptr = getcwd(buf, (size_t)size)) == NULL) {
	    free(buf);
	    return 2;
    }

    printf("%s\n",ptr);
    free(buf);
    return 0;
}
