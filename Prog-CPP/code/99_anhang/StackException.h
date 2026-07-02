#ifndef STACKEXCEPTION_H_
#define STACKEXCEPTION_H_

class StackException
{};

class StackEmptyException : public StackException
{};

class StackFullException : public StackException
{};

#endif /* STACKEXCEPTION_H_ */
