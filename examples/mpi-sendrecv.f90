program sendrecv
include 'mpif.h'

integer :: nprocs, myid, message, source, dest, tag, count, ierr      
! Initializing the MPI environment
call MPI_INIT(ierr)

! The total size of environment in terms of process quantity
call MPI_COMM_SIZE(MPI_COMM_WORLD, nprocs, ierror)

! Returns process ID for each process
call MPI_COMM_RANK(MPI_COMM_WORLD, myid, ierror)

source = 0
dest = 1
count = 1
tag = 1
message = 124

IF(myid == source) THEN
  call MPI_SEND(message, count, MPI_INT, source, tag, MPI_COMM_WORLD, ierr)
  print*, 'Process ', myid, 'has sent ', message 
ELSEIF(myid == dest) THEN
call MPI_RECV(message, count, MPI_INT, source, tag, MPI_COMM_WORLD, & 
MPI_STATUS_IGNORE, ierr)
  print*, 'Process ', myid, 'has received ', message
ENDIF

! Finalizing the MPI environment
call MPI_FINALIZE(ierr)

end program
