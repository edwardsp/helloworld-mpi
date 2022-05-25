#include <mpi.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int rank, size;
    char name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Get_processor_name(name, &name_len);
    printf("Hello World from %s - rank %d of %d\n", name, rank, size);
    MPI_Finalize();
    return 0;
}
