#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "functionHandler.h"

int main( int argc, char *argv[] )
{
    // NO ARG RETURN
    if(argc==1) 
    {
        checkForNoArgs();
    }
    // INIT
    if(strcmp(argv[2],"init") && argc==2){createInit();}

    //CREATE
    if(strcmp(argv[1],"create")&&strcmp(argv[2],"new"), argc==3){
        	createProjectFiles();
	
	return 0;
    }
    // COMPILE
    if(strcmp(argv[2],"compile") && argc==3){
        char* path = argv[3];
        compile(path);
    }   
    
    return 0;
}