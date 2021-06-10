
### Compiling MPI codes


> mpicc -o <your_executable_binary_name> mpi-hello.c (for C code)

> mpif90 -o <your_executable_binary_name> mpi-hello.f90 (for Fortran code)



### Compiling  OpenMP codes

Using gcc

> gcc -fopenmp -o <your_executable_binary_name> mpi-hello.c (for C code)

> gfortran -fopenmp -o <your_executable_binary_name> mpi-hello.f90 (for Fortran code)


Using intel compiler

> icc -fopenmp -o <your_executable_binary_name> mpi-hello.c (for C code)

> ifort -fopenmp -o <your_executable_binary_name> mpi-hello.f90 (for Fortran code)
