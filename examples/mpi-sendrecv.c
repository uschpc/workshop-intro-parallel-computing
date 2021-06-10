#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    //  Initialize MPI environment
    MPI_Init(&argc, &argv);

    // Decide the number of processes
    int nprocs, myid, message;

    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
    
    // Rank of the process
    MPI_Comm_rank(MPI_COMM_WORLD, &myid);

    int tag, source, dest, count;
    message=123;
    tag=1;
    source=0;
    dest=1;
    count=1;

    if(myid == source) {
      MPI_Send(&message, count, MPI_INT, dest, tag, MPI_COMM_WORLD);
      printf("Processor %d sent %d\n", myid, message);
    }

    if(myid == dest) {
      MPI_Recv(&message, count, MPI_INT, source, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
      printf("Processor %d received %d\n", myid, message);
    } 

    // Finalize MPI environment
    MPI_Finalize();

    return 0;
}

