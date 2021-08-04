#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../functionHandler.h"

int createInit(int argc, char *argv[])
{
    char publisherName[50]; char version[50]; char description[50]; bool private; char license[50];
    if(argv[0]=="init"){
        printf("INIT COMMAND WORKS");
    }
    return 0;
    
}
