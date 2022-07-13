class Queue
{
    int frontt, rear;
    int arr[10000];
    int size;

public:
    Queue()
    {
        size = 100001;
        frontt = 0;
        rear = 0;
    }


    bool isEmpty()
    {
        return (frontt == rear);
    }

    void enqueue(int data)
    {
        if (rear >= size)
        {
            cout << "Queue is full";
        }
        else
        {
            arr[rear++] = data;
        }
    }

    int dequeue()
    {
        if (frontt == rear)
            return -1;

        return arr[frontt++];
    }

    int front()
    {
        if (frontt == rear)
            return -1;
        return arr[frontt];
    }
};
