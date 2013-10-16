#include <stdio.h>
#include <unistd.h>

int main() {

	// fork() makes a copy of the current process. The calling process (the
	// parent) gets the created process's process ID as the return value for the
	// fork() call, whereas the newly created process (the child) gets 0 as the
	// return from the fork() call
	pid_t child_pid = fork();

	// If the call to fork() fails, just print an error message
	if(child_pid < 0) {

		printf("fork call failed\n");

	}

	// Child process code
	else if(child_pid == 0) {

		// usleep: sleep for microseconds
		usleep(2000000);

		printf("child done\n");

	}

	// Parent process code
	else {
	
		printf("parent waiting for child\n");
		wait();

		usleep(2000000);
		
		printf("parent done\n");

	}
}