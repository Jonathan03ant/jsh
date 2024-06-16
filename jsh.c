#include <stdio.h>








int main (int argc, char **argv){
	//we need to load any config files (if any)
	// interpret commands
		// Read the command, 
		// Parse he command, separate command stirings in to argument
		// Excute the command
	// Terminate
	
	jsh_lop();


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

	} while(status);

}

