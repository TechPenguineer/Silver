#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "functionHandler.h"

int checkForNoArgs( int argc, char *argv[] )
{
    if(argc == 0)
    {
        printf("No arguments were supplied");
    }
    return 0;
}