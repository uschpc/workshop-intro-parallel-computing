#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    //  Initialize MPI environment
    MPI_Init(NULL, NULL);

    // Decide the number of processes
    int nprocs;
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
    
    // Rank of the process
    int myid;
    MPI_Comm_rank(MPI_COMM_WORLD, &myid);


    // printf() displays the string inside quatation
    printf("Hello, C World! from processor %d out of %d processors\n",
           myid, nprocs);

    // Finalize MPI environment
    MPI_Finalize();

    return 0;
}

