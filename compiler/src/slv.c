#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "functionHandler.h"

int main( int argc, char *argv[] )
{
    createProjectFiles(argc,argv);
    checkForNoArgs(argc,argv);

    // INIT
    if(strcmp(argv[2],"init") && argc==2){createInit();}

    //CREATE
    if(strcmp(argv[2],"create")&&strcmp(argv[3],"new"), argc==4){
        char* path = argv[4];

    }
    // COMPILE
    if(strcmp(argv[2],"compile") && argc==3){
        char* path = argv[3];
        compile(path);
    }   
    
    return 0;
}