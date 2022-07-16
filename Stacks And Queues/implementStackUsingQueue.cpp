class Stack
{
    queue<int> q1;

public:
    Stack()
    {
        // Implement the Constructor.
    }


    int getSize()
    {
        return q1.size();
    }

    bool isEmpty()
    {
        return (q1.size() == 0);
    }

    void push(int element)
    {
        q1.push(element);
        for (int i = 0; i < q1.size() - 1; i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }

    int pop()
    {
        if (q1.size() == 0)
            return -1;
        int x = q1.front();
        q1.pop();
        return x;
    }

    int top()
    {
        if (q1.size() == 0)
            return -1;
        int x = q1.front();
        return x;
    }
};
