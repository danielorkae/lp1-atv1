#include <iostream>

#include "stack.cpp"
#include "queue.cpp"

int main()
{
    vector<int> my_stack;
    vector<int> my_queue;

    // Adicionadno elementos à pilha e à fila.
    for (int i = 0; i < 5; i++)
    {
        stack_push(my_stack, i);
        queue_push(my_queue, i);
    }

    // Imprimindo os elementos da pilha.
    cout << "Stack:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << stack_get(my_stack) << endl;
    }

    // Imprimindo os elementos da fila.
    cout << "Queue:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << queue_get(my_queue) << endl;
    }

    return 0;
}
