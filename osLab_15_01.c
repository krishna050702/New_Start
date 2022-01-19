// #include <stdio.h>
// #include <stdlib.h>
// #include <pthread.h>
// #include<unsitd.h>

// int global=0;

// // void *thread(void *vargp)
// // {
// //     pthread_exit((void *)42);
// // }
// // int main()
// // {
// //     int i;
// //     pthread_t tid;
// //     pthread_create(&tid, NULL, thread, NULL);
// //     pthread_join(tid, (void **)&i);
// //     printf("%d\n", i);
// // }

// // void *thread(void *vargp)
// // {
// //     exit(42);
// // }
// // int main()
// // {
// //     int i;
// //     pthread_t tid;
// //     pthread_create(&tid, NULL, thread, NULL);
// //     pthread_join(tid, (void **)&i);
// //     printf("%d\n", i);
// // }

// void *threadfun1(void *vargp)
// {
//     int id;
//     static int s;
//     sleep(3);
//     printf("It's Lucifer,from thread: 1\n");
//     id=(int)vargp;
//     global++;
//     s++;
//     printf("id :::::: %d\n",id);
//     printf("S :::::: %d\n",s);
//     printf("Global :::::: %d\n",global);
//     return NULL;
// }

// // void *threadfun2(void *vargp)
// // {
// //     sleep(3);
// //     printf("Inside thread function 2\n");
// //     return NULL;
// // }

// int main()
// {
//     int i;
//     pthread_t tid;
//     for (i = 0; i < 3; i++)
//     {
//         printf("Before threading task %d\n", i);
//         pthread_create(&tid, NULL, threadfun1, (void *)i);
//         pthread_join(tid, NULL);
//         // if (i == 2)
//         // {
//         //     pthread_create(&tid, NULL, threadfun2, NULL);
//         //     pthread_join(tid, NULL);
//         // }
//     }
//     pthread_exit(NULL);
//     printf("After threading\n");
//     exit(0);
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <pthread.h>

// void *threadfun(void *argp)
// {
//     unsigned long i=0;
//     pthread_t id=pthread_self();
//     if(pthread_equal(id,tid[0]))
//     {
//         printf("\n First thread processing\n");
//     }
//     else{
//         printf("\n Second thread processing");
//     }
//     return NULL;
// }

// int main()
// {
//     int i=0;
//     int err;
//     while(i<2)
//     {
//         err=pthread_create((&tid[i]),NULL,&threadfun,NULL);
//         if(err!=0)
//         printf("Cannot be created: [%s]\n",strerror(err));
//         elseprintf("\n It is created successfully\n");
//         i++;
//     }
//     sleep(3);
//     return 0;
// }

// #include <pthread.h>
// #include <stdlib.h>
// #include <stdio.h>

// typedef struct data
// {
//     int *arr;
//     int thread_num;
// } data;

// int arrSize = 10;

// void *halfSum(void *p)
// {
//     data *ptr = (data *)p;
//     int n = ptr->thread_num;

//     int *thread_sum = (int *)calloc(1, sizeof(int));

//     if (n == 0)
//     {
//         for (int i = 0; i < arrSize / 2; i++)
//             thread_sum[0] = thread_sum[0] + ptr->arr[i];
//     }
//     else
//     {
//         for (int i = arrSize / 2; i < arrSize; i++)
//             thread_sum[0] = thread_sum[0] + ptr->arr[i];
//     }

//     pthread_exit(thread_sum);
// }

// int main(void)
// {
//     // Declare integer array [1,2,3,4,5,6,7,8,9,10]:
//     int *int_arr = (int *)calloc(arrSize, sizeof(int));
//     for (int i = 0; i < arrSize; i++)
//         int_arr[i] = i + 1;

//     // Declare arguments for both threads:
//     data thread_data[2];
//     thread_data[0].thread_num = 0;
//     thread_data[0].arr = int_arr;
//     thread_data[1].thread_num = 1;
//     thread_data[1].arr = int_arr;

//     // Declare thread IDs:
//     pthread_t tid[2];

//     // Start both threads:
//     pthread_create(&tid[0], NULL, halfSum, &thread_data[0]);
//     pthread_create(&tid[1], NULL, halfSum, &thread_data[1]);

//     // Declare space for sum:
//     int *sum1;
//     int *sum2;

//     pthread_join(tid[0], (void **)&sum1);
//     pthread_join(tid[1], (void **)&sum2);

//     printf("Sum of whole array = %i\n", *sum1 + *sum2);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <pthread.h>

// typedef struct
// {
//         int *a;
//         int length;
//         int sum;
// } MyData;

// #define N 5
// #define L 6

// MyData mData;
// pthread_t myThread[N];
// pthread_mutex_t mutex;

// void *threadWork(void *arg)
// {
//         /* Define and use local variables for convenience */
//         long offset = (long)arg;
//         int sum = 0;
//         int start = offset * mData.length;
//         int end = start + mData.length;

//         /* each thread calculates its sum */
//         for (int i = start; i < end ; i++)  sum += mData.a[i];

//         /* mutex lock/unlock */
//         pthread_mutex_lock(&mutex);
//         mData.sum += sum;
//         pthread_mutex_unlock(&mutex);

//         pthread_exit((void*) 0);
// }

// int main ()
// {
//         void *status;

//         /* fill the structure */
//         int *a = (int*) malloc (N*L*sizeof(int));
//         for (int i = 0; i < N*L; i++) a[i] = i + 1;
//         mData.length = L;
//         mData.a = a;
//         mData.sum = 0;

//         pthread_mutex_init(&mutex, NULL);

//         /* Each thread has its own  set of data to work on. */
//         for(long i=0; i < N; i++)
//                 pthread_create(&myThread[i], NULL, threadWork, (void *)i);

//         /* Wait on child threads */
//         for(int i=0; i < N; i++) pthread_join(myThread[i], &status);

//         /* Results and cleanup */
//         printf ("Sum = %d \n", mData.sum);
//         free (a);

//         pthread_mutex_destroy(&mutex);
//         pthread_exit(NULL);
// }

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread(void *vargp)
{
    int *ptr = (int *)vargp;
    pthread_exit((void *)*ptr);
}
void *thread2(void *vargp)
{
    int *ptr = (int *)vargp;
    *ptr = 0;
    pthread_exit((void *)31);
}
int main()
{
    int i = 42;
    pthread_t tid, tid2;
    pthread_create(&tid, NULL, thread, (void *)&i);
    pthread_create(&tid2, NULL, thread2, (void *)&i);
    pthread_join(tid, (void **)&i);
    pthread_join(tid2, NULL);
    printf("%d\n", i);
}