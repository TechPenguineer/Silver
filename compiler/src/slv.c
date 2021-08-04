#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "functionHandler.h"

int main( int argc, char *argv[] )
{
    createProjectFiles(argc,argv);
    checkForNoArgs(argc,argv);
    if(strcmp(argv[2],"init") && argc==2){createInit();}
    if(strcmp(argv[2],"create")&&strcmp(argv[3],"new"), argc==4){
        char* path = argv[4];
        compile(path);
    }
    return 0;
}