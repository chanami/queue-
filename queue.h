#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
#include <iostream>
#include <list>
#include <exception>

template<typename T>
class Queue
{
public:
    T & pop();//throw exception
    void push(T&);
    T & front() const;//throw exception
    T & back() const;//throw exception
    unsigned long size();
    bool isEmpty();

private:
    std::List<T> m_list;
};

template<typename T>
T & Queue<T>::pop()
{

    if(isEmpty())
    {
        //throw exception
    }
    T & tmp = m_list.front();
    m_list.pop_front();
    return tmp;
}

template<typename T>
void Queue<T>::push(T & element)
{
    m_list.push_back(element);
}

template<typename T>
T & Queue<T>::front() const
{
    if(isEmpty())
    {
        //throw exception
    }
    T & tmp = m_list.front();
    return tmp;
}
template<typename T>
T & Queue<T>::back() const
{
    if(isEmpty())
    {
        //throw exception
    }
    T & tmp = m_list.back();
    return tmp;
}

template<typename T>
unsigned long Queue<T>::size()
{
    return m_list.size();
}

template<typename T>
bool Queue<T>::isEmpty()
{
    return m_list.empty();
}
#endif //QUEUE_QUEUE_H
