#include <stdio.h>
int main(int argc, char *argv[] ){
	if(argc != 1){
		printf("usage %s filename", argv[0]);
	}
	else{
		FILE *inputfile = fopen(argv[1], "r");
		if(inputfile == 0){
			printf("Could not open file\n");
		}
		else{
			//this is where the code now starts
		}
	}
}
