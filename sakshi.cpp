#include <iostream>

float *fractional_knapsack(int weight[], int profit[], int Total_weight)
{
    float *fraction = new float(sizeof(weight));
    for (int i = 0; i < sizeof(weight); i++)
    {
        fraction[i] = 0;
    }
    float capacity = 0;
    for (int i = 0; i < sizeof(weight); i++)
    {
        if (capacity + weight[i] <= Total_weight)
        {
            fraction[i] = 1;
            capacity += weight[i];
        }
        else
        {
            fraction[i] = ((float)Total_weight - capacity) / (float)weight[i];
            capacity = Total_weight;
            break;
        }
    }
    return fraction;
}
using namespace std;
int main(int argc, char **argv)
{
    cout << "\n Enter the number of elements" << endl;
    int n;
    cin >> n;
    char *items = new char(n);
    int *profit = new int(n);
    int *weight = new int(n);
    char name = 'A';
    float *ratio = new float(n);
    cout << "Enter Total weight of elements" << endl;
    int Total_weight;
    cin >> Total_weight;
    cout << "\n Enter profit of elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
        items[i] = name + i;
    }
    cout << "\n Enter Weight of elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        ratio[i] = (float)profit[i] / (float)weight[i];
        for (int j = i; ratio[j] > ratio[j - 1] && j > 0; j--)
        {
            swap(ratio[j], ratio[j - 1]);
            swap(items[j], items[j - 1]);
            swap(profit[j], profit[j - 1]);
            swap(weight[j], weight[j - 1]);
        }
    }
    float *fraction = new float(n);
    fraction = fractional_knapsack(weight, profit, Total_weight);
    cout << "Items\tProfit\tWeight\tRatio\tFraction used" << endl;
    float total_profit = 0;
    for (int i = 0; i < sizeof(weight); i++)
    {
        cout << items[i] << "\t" << profit[i] << "\t" << weight[i] << "\t" << ratio[i] << "\t" << fraction[i] << endl;
        total_profit += profit[i] * fraction[i];
    }
    cout << "Total profit = " << total_profit << endl;
    return 0;
}