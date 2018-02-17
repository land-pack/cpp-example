#include <iostream>
#include <vector>

int const MAX_SIZE = 10;

template <typename T>
class Stack{

    private:

        int index;
        T elements[MAX_SIZE];

    public:
        Stack();
        void  pop();
        void push(T const& );
        T top();
};

template <typename T>
Stack<T>::Stack(){
    index = 0;
}

template <typename T>
void Stack<T>::pop(){
    //if() is empty throw out_of_range ..
    index--;
}

template <typename T>
void Stack<T>::push(T const & value){
    elements[index++] = value;
}

template <typename T>
T Stack<T>::top(){
    return elements[index];
}

int main(int argc, char * argv[]){
    
    Stack<int> int10stack;
    int10stack.push(9);
    int10stack.push(8);
    int10stack.pop();
    std::cout << int10stack.top() << std::endl;
    int10stack.pop();
    std::cout << int10stack.top() << std::endl;

    return 0;
}


