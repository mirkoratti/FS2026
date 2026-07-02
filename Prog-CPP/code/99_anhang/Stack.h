#ifndef STACK_H_
#define STACK_H_
#include <cstddef>
#include "StackException.h"

template<typename T, std::size_t size = 10>
class Stack
{
  public:
    void push(const T& e);
    // legt ein Element auf den Stack, falls der Stack noch nicht voll ist
    // throws StackFullException

    T pop();
    // nimmt ein Element vom Stack, falls der Stack nicht leer ist
    // throws StackEmptyException

    const T& peek() const;
    // liest das oberste Element vom Stack, falls der Stack nicht leer ist
    // throws StackEmptyException

    bool isEmpty() const
    {
      return top == 0;
    }

    bool isFull() const
    {
      return top == size;
    }

  private:
    T elems[size];          // Speicher fuer Speicherung des Stacks
    std::size_t top{0};     // Arrayindex des naechsten freien Elements
};

// template definitions

template<typename T, std::size_t size>
void Stack<T, size>::push(const T& e)
{
  if (isFull())
    throw StackFullException{};
  elems[top] = e;
  ++top;
}

template<typename T, std::size_t size>
T Stack<T, size>::pop()
{
  if (isEmpty())
    throw StackEmptyException{};
  --top;
  return elems[top];
}

template<typename T, std::size_t size>
const T& Stack<T, size>::peek() const
{
  if (isEmpty())
    throw StackEmptyException{};
  return elems[top - 1];
}

#endif // STACK_H_
