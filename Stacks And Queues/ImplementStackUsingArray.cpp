// Implement Stack using stack

class Stack
{
    int topp;
    int arr[10000];
    int size;

public:
    Stack(int capacity)
    {
        topp = -1;
        size = capacity;
    }

    void push(int num)
    {
        if (topp >= size)
            return;
        arr[++topp] = num;
    }

    int pop()
    {
        if (topp != -1)
            return arr[topp--];
        return -1;
    }

    int top()
    {
        if (topp != -1 && topp < size)
            return arr[topp];
        return -1;
    }

    int isEmpty()
    {
        return (topp == -1);
    }

    int isFull()
    {
        return (topp == size - 1);
    }
};
