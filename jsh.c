#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <sys/wait.h>
#include <sys/types.h>

char *ReadLine(void){
	char *line = NULL;
	ssize_t buffer_size = 0;
 
	if (getline(&line, &buffer_size, stdin) == -1){
		

	}

}





int main (int argc, char **argv){
	//we need to load any config files (if any)
	// interpret commands
		// Read the command, 
		// Parse he command, separate command stirings in to argument
		// Excute the command
	// Terminate
	
	jsh_lo();


	return EXIT_SUCCESS;
}


void jsh_lo(void){
	//read line, pharse the commmands, then execute the command 

	char *line;
	char **args;
	int status;
	
	do {
		printf(">");
		line = ReadLine();
		args = PharseLine();
		status = Execute();
		
		free(line);
		free(args);
	} while(status);

}




char **PharseLine(char *line){
};

