#include <stdio.h>

#define SIZE 100
int stack[SIZE];

int top = -1;
void push(int value)
{
    if (top > SIZE - 1)
    {
        printf("Stack is Overflow");
    }
    else
    {
        stack[++top] = value;
        printf("value %d push in Stack.", value);
    }
}

int pop()
{
    if (top <= -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        stack[top--];
    }
}

int peep(int pos)
{
    if (top <= -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        return stack[top - pos + 1];
    }
}

void change(int pos, int value)
{
    if (top - pos + 1 < 0 || pos < 0)
    {
        printf("Invalid position");
    }
    else
    {
        stack[top - pos + 1] = value;
        printf("Change is done: %d", value);
    }
}

void display()
{
    if (top <= -1)
        printf("Stack is empty.\n");
    else
    {
        printf("Stack elements: \n\n");
        for (int i = top; i >= 0; i--)
            printf("| %2d |\n", stack[i]);
    }
}

int main()
{
    int choice, value, pos, x;
    while (1)
    {
        printf("\n--- Stack Menu ---\n");
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. PEEP\n5. CHANGE\n6. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            x = pop();
            printf("popped element: %d", value);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Enter position from top (1 for top element): ");
            scanf("%d", &pos);
            x = peep(pos);
            printf("peeped element: %d", x);
            break;
        case 5:
            printf("Enter position from top: ");
            scanf("%d", &pos);
            printf("Enter new value: ");
            scanf("%d", &value);
            change(pos, value);
            break;
        case 6:
            printf("Exiting Program.");
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
}
