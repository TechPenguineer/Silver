#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "functionHandler.h"

int createProjectFiles ( int argc, char *argv[] )
{
    if(!argc)
    {
    }
    // CREATE COMMAND
    if(argv[1] == "create")
    {
        if (argc == 1)
        {
            printf("Not enough arguments supplied to execute this command");
        }
        
        if(argv[2] == "new")
        {

            if(argc == 3)
            {
                 char projectname[50]; 
                 strcpy(projectname, argv[3]);
                 printf(projectname);
            } 
            if(argc == 2)
            {
               printf("Not enough arguments supplied to execute this command");
            }
        }
    } 
    return 0;
}