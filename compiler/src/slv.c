#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "functionHandler.h"

int main( int argc, char *argv[] )
{
    createProjectFiles(argc,argv);
    checkForNoArgs(argc,argv);
    createInit(argc,argv);
    
    return 0;
}