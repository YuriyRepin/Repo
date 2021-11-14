#include <iostream>
using namespace std;
#define T int
#define SIZE 1000
#define SZ 10


int cursor = -1;
T Stack[SIZE];
void Push(T data)
{
    while(data > 0)
    {
        Stack[++cursor] = data % 2;
        data /= 2;

    }
}
void Pop()
{
    while(cursor != -1)
    {
        cout <<  Stack[cursor--] << " ";
    }
}



//void printQueue()
//{
//    cout << "[ ";
//    for (size_t i = 0; i < SZ; i++)
//    {
//        if (arr[i] == NULL)
//        {
//            cout << "[*, *]";
//        }
//        else
//        {
//            cout << "[" << arr[i]->pr << ", " << arr[i]->dat << "]";
//        }
//    }
//    cout << " ]" << endl;
//
//}

void DAQWAPE()
{

}

int main()
{
    std::cout << "Hello Denis!\n";
    Push(45);
    Pop();
}
//    init();
//    for (size_t i = 0; i < SZ; i++)
//    {
//        ins(rand() % 10, rand() % 100);
//    }
//    printQueue();
//    for (size_t i = 0; i < 3; i++)
//    {
//        rem();
//    }
//    printQueue();
//    for (size_t i = 0; i < 2; i++)
//    {
//        ins(rand() % 10, rand() % 100);
//    }
//    printQueue();
//    for (size_t i = 0; i < 3; i++)
//    {
//        rem();
//    }
//    printQueue();
//    ins(1, 5);
//    printQueue();
//}
//
////Describe a queue with a priority exception
//typedef struct
//{
//    int pr;
//    int dat;
//
//
//} Node;
//
//Node* arr[SZ];
//int head;
//int tail;
//int items;
//
//void init()
//{
//    for (size_t i = 0; i < SZ; i++)
//    {
//        arr[i] = NULL;
//    }
//    head = 0;
//    tail = 0;
//    items = 0;
//}
//
//void ins(int pr, int dat)
//{
//    Node* node = (Node*)malloc(sizeof(Node));
//    node->dat = dat;
//    node->pr = pr;
//    int flag;
//
//    if (items == 0)
//    {
//        arr[tail++] = node;
//        items++;
//    }
//    else if (items == SZ)
//    {
//        cout << "Queue is full" << endl;
//        return;
//    }
//    else
//    {
//        int i = 0;
//        int idx = 0;
//        Node* tmp;
//        for (i = head; i < tail; ++i)
//        {
//            idx = i % SZ;
//            if (arr[idx]->pr > pr)
//            {
//                break;
//            }
//            else
//            {
//                idx++;
//            }
//        }
//        flag = idx % SZ;
//        i++;
//        while (i <= tail)
//        {
//            idx = i % SZ;
//            tmp = arr[idx];
//            arr[idx] = arr[flag];
//            arr[flag] = tmp;
//            i++;
//        }
//        arr[flag] = node;
//        items++;
//        tail++;
//    }
//
//}
//
//Node* rem()
//{
//    if (items == 0)
//    {
//        return NULL;
//    }
//    else
//    {
//        int idx = head++ % SZ;
//        Node* tmp = arr[idx];
//        arr[idx] = NULL;
//        items--;
//        return tmp;
//    }
//}