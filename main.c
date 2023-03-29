#include <stdio.h>
#include <mpi.h>

int main(){

	int rank, size;
	MPI_Init(NULL, NULL);
	MPI_Comm_rank( MPI_COMM_WORLD, &rank);
	MPI_Comm_size( MPI_COMM_WORLD, &size);
	printf("rank: %d\n", rank);

	if( rank == 0 ){

		FILE *fd = fopen( "output.csv", "w" );
		fprintf( fd,"%d", size);
		fclose( fd );
	}

	MPI_Finalize();


}
