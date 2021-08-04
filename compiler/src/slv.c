#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main( int argc, char *argv[] )
{
    bool commandFound;
    if(commandFound){}else{printf("SLV: Command not found");}
    if(argc == 1)
    {
         commandFound=false;
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
            } else if(argc == 2)
            {
               printf("Not enough arguments supplied to execute this command");
            }
        }
    } 
    return 0;
}