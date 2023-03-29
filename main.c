#include <stdio.h>
#include <mpi.h>

int main(){

	int rank;
	MPI_Init(NULL, NULL);
	MPI_Comm_rank( MPI_COMM_WORLD, &rank);
	printf("rank: %d\n", rank);

	MPI_Finalize();


}
