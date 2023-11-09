#include <stdio.h>
void towers_of_hanoi(int n, int source, int destination, int temp) {
	if (n == 1) {
		printf("Move disk 1 from peg %d to peg %d\n", source, destination);
		return;
	}

	towers_of_hanoi(n - 1, source, temp, destination);
	printf("Move disk %d from peg %d to peg %d\n", n, source, destination);
	towers_of_hanoi(n - 1, temp, destination, source);
}
int main() {
	int num_disks = 3;
	int source_peg = 1;
	int destination_peg = 3;
	int temp_peg = 2;

	towers_of_hanoi(num_disks, source_peg, destination_peg, temp_peg);

	return 0;
}

