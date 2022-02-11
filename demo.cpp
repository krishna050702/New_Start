#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    visited[i] = 101;
    printf("%d\n", visited[i]);
    cout<<i<<endl;
    printf("%d\n", visited[71]);
    printf("%d\n", visited[70]);
    printf("%d\n", visited[80]);
    int arrSize = sizeof(visited)/sizeof(visited[0]);
    cout<<arrSize<<endl;
}