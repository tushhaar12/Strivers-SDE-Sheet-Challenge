struct Item
{
    int value;
    int weight;
};

static bool comp(Item a, Item b)
{
    double r1 = (double)(a.value) / (double)(a.weight);
    double r2 = (double)(a.value) / (double)(a.weight);
    return r1 > r2;
}

// TC -> O(N*logN) + O(N)
// SC -> O(1)
double fractionalKnapsack(int W, Item arr[], int n)
{
    sort(arr, arr + n, comp);

    int currWeight = 0;
    double finalValue = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (currWeight + arr[i].weight <= W)
        {
            currWeight += arr[i].weight;
            finalValue = arr[i].value;
        }
        else
        {
            int remain = W - currWeight;
            finalValue += ((arr[i].value / (double)arr[i].weight) * (double)remain);
            break;
        }
    }
    return finalValue;
}
