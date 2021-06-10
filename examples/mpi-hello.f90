program hello_world_mpi
include 'mpif.h'

integer :: nprocs, myid, ierr      
! Initializing the MPI environment
call MPI_INIT(ierr)

! The total size of environment in terms of process quantity
call MPI_COMM_SIZE(MPI_COMM_WORLD, nprocs, ierror)

! Returns process ID for each process
call MPI_COMM_RANK(MPI_COMM_WORLD, myid, ierror)

! Printing Hello World from each process & reporting its rank
print*, 'Hello, Fortran World! from process: ', myid, 'of ', nprocs 

! Finalizing the MPI environment
call MPI_FINALIZE(ierr)

end program
