#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "functionHandler.h"

int main( int argc, char *argv[] )
{
    createProjectFiles(argc,argv);
    checkForNoArgs(argc,argv);
    if(strcmp(argv[2],"init")==0 && argc==2){createInit();}
    
    return 0;
}