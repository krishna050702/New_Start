// #include <stdio.h>

// // void fun(int n)
// // {
// //     if(n>0)
// //     {
// //         printf("%d ",n);
// //         fun(n-1);
// //     }
// // }

// // int main()
// // {
// //     int x=5;
// //     fun(x);
// //     return 0;
// // }

// int fun(int n)
// {
//     static int x = 0;
//     if (n > 0)
//     {
//         x++;
//         return fun(n - 1) + x;
//     }
//     return 0;
// }

// int main()
// {
//     int a = 5;
//     printf("%d ", fun(a));
//     return 0;
// }

// #include <stdio.h>
// #include <pthread.h>

// #define nThread 10
// void *thread_function(void *);
// pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
// int counter = 0;

// int main()
// {
//     pthread_t thread_id[nThread];
//     int i, j;

//     for (i = 0; i < nThread; i++)
//     {
//         pthread_create(&thread_id[i], NULL, thread_function, NULL);
//     }

//     for (j = 0; j < nThread; j++)
//     {
//         pthread_join(thread_id[j], NULL);
//     }

//     printf("Final counter value: %d\n", counter);
// }

// void *thread_function(void *dummyPtr)
// {
//     printf("Thread number %ld\n", pthread_self());
//     pthread_mutex_lock(&mutex1);
//     counter++;
//     pthread_mutex_unlock(&mutex1);
// }

// int pthread_create(pthread_t *thread,
//                    const pthread_attr_t *attr,
//                    void *(*start_routine)(void *),
//                    void *arg);

// #include <sys/types.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <errno.h>
// #include <pthread.h>
// #include <unistd.h>

// void *ethread(void *arg);

// char ret_status[10][100];

// int main(int argc, char **argv)
// {
//     pthread_t tid[10];
//     int i, r;
//     void *status;
//     char buffer[128];

//     int thread_no[5];
//     for (i = 0; i < 5; i++)
//     {
//         thread_no[i] = i;
//         if ((r = pthread_create(&tid[i], NULL, ethread, (void *)&thread_no[i])) != 0)
//         {
//             strerror_r(r, buffer, sizeof(buffer));
//             fprintf(stderr, "Error = %d (%s)\n", r, buffer);
//             exit(1);
//         }
//     }
//     if ((r = pthread_cancel(tid[4])) != 0)
//     {
//         strerror_r(r, buffer, sizeof(buffer));
//         fprintf(stderr, "Error = %d (%s)\n", r, buffer);
//         exit(1);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         if ((r = pthread_join(tid[i], &status)) != 0)
//         {
//             strerror_r(r, buffer, sizeof(buffer));
//             fprintf(stderr, "Error = %d (%s)\n", r, buffer);
//             exit(1);
//         }

//         if (status == PTHREAD_CANCELED)
//             printf("i = %d, status = CANCELED\n", i);
//         else
//             printf("i = %d, status = %s\n", i, (char *)status);
//     }
//     exit(0);
// }

// void *ethread(void *arg)
// {
//     int my_id = *((int *)arg);

//     sleep(1);
//     printf("Thread %d: Hello Krishna!\n", my_id);

//     sprintf(ret_status[my_id], "Thread %d: %d", my_id, my_id + 10);

//     if (my_id == 4)
//         sleep(5);

//     pthread_exit(ret_status[my_id]);
// }

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int sum = 0;
void *sum_runner(void *arg)
{
    int *limit_ptr = (int *)arg;
    int limit = *limit_ptr;
    for (int i = 0; i <= limit; i++)
    {
        sum += i;
    }
    pthread_exit(0);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <num>\n", argv[0]);
        exit(-1);
    }

    int limit = atoll(argv[1]);
    pthread_t tid;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_create(&tid, &attr, sum_runner, &limit);
    pthread_join(tid, NULL);
    printf("Sum is %d\n", sum);
}
