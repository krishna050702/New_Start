// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, x, y;
//     cin >> a >> b >> x >> y;
//     cout << (a * x) + (b * y) << endl;
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *AProcess();
void *BProcess();

pthread_t tid_A[5], tid_B[5];
int d = 0;
pthread_mutex_t wrt = PTHREAD_MUTEX_INITIALIZER;
int main()
{
    int i = 0;
    d = 1000;
    for (i = 0; i < 5; i++)
        pthread_create(&tid_A[i], NULL, AProcess, NULL);
    for (i = 0; i < 5; i++)
        pthread_create(&tid_B[i], NULL, BProcess, NULL);
    for (i = 0; i < 5; i++)
        pthread_join(tid_A[i], NULL);
    for (i = 0; i < 5; i++)
        pthread_join(tid_B[i], NULL);
    return 0;
}
void *AProcess()
{
    int i;
    pthread_mutex_lock(&wrt);
    d = d + 200;
    printf("\nA is incrementing:%d\n", d);

    pthread_mutex_unlock(&wrt);
}
void *BProcess()
{
    int i;
    pthread_mutex_lock(&wrt);
    d = d + 100;
    printf("\nB is incrementing:%d\n", d);
    pthread_mutex_unlock(&wrt);
}