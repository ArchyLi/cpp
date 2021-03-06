#include <stdio.h>
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int a=0;
        if(stack2.empty())
        {
        	while(!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        a=stack2.top();
        stack2.pop();
        return a;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
}
