#include <iostream>
 
#include "Queue.h"
 
int main()
{
        try
        {
        NodeQueue<int> Queue; /**< создаем объект класса  NodeQueue  >*/
        Queue.enqueue(10);
        Queue.enqueue(20);
        Queue.enqueue(30);
        std::cout<<"Top is: "<<Queue.front()<<'\n';
        Queue.dequeue();
        Queue.print();
        }
        catch(const std::string& e)
        {
             std::cout<<e<<'\n';
        }
}