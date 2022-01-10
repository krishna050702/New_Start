#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXTHREADS 8

pthread_mutex_t mutex_sum = PTHREAD_MUTEX_INITIALIZER;
int sum = 0;
void *Addup(int Id)
{
    pthread_mutex_lock(&mutex_sum);
    {
        sum += Id;
    }
    pthread_mutex_unlock(&mutex_sum);
    return 0;
}

main(int argc, char *argv[])
{

    int ret_count;
    pthread_t *threads;
    pthread_attr_t pta;
    int i, NumThreads;
    if (argc != 2)
    {
        printf(" Missing Argument: Number of Threads.\n");
        return 0;
    }

    NumThreads = abs(atoi(argv[1]));
    if (NumThreads == 0)
    {
        printf("\nNumber of Threads are Assumed as 4");
        NumThreads = 4;
    }

    if (NumThreads > MAXTHREADS)
    {
        printf("\n\t Error : Number of threads should be less than 8\n");
        exit(-1);
    }

    printf("\n The Number of threads is %d.\n", NumThreads);

    threads = (pthread_t *)malloc(sizeof(pthread_t) * NumThreads);
    ret_count = pthread_attr_init(&pta);
    if (ret_count)
    {
        printf("ERROR; return code from pthread_attr_init() is %d\n", ret_count);
        exit(-1);
    }

    for (i = 0; i < NumThreads; i++)
    {
        ret_count = pthread_create(&threads[i], &pta, (void *(*)(void *))Addup, (void *)(i + 1));
        if (ret_count)
        {
            printf("ERROR; return code from pthread_create() is %d\n", ret_count);
            exit(-1);
        }
    }

    for (i = 0; i < NumThreads; i++)
    {
       ret_count = pthread_join(threads[i], NULL);
        if (ret_count)
        {
            printf("ERROR; return code from pthread_join() is %d\n", ret_count);
            exit(-1);
        }
    }

    ret_count = pthread_attr_destroy(&pta);
    if (ret_count)
    {
        printf("ERROR; return code from pthread_attr_destroy() is %d\n", ret_count);
        exit(-1);
    }

    printf("\n Number of threads: %d. Sum: %d.\n", NumThreads, sum);
    return 0;
}

