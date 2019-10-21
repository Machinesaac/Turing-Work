#include <iostream>

using namespace std;

typedef struct
{
	int d[10];
	int top;
}Stack;

int init(Stack *s)
{
	s->top = -1;
} 

bool Is_empty(Stack *s)//判断栈是否为空 
{
	if (s->top == -1)
	{
		return true;
	}
	else 
	    return false;
}

bool Is_full(Stack *s)//判断栈是否满 
{
	if (s->top == 9)
	{
		return true;
	}
	else
	    return false;
}

bool Push(Stack *s,int value)
{
	if (Is_full(s))
	{
		return false;
	}
	else
	{
	    s->top++;
	    s->d[s->top] = value;
	    return true;
	}
	
}

int Pop(Stack *s)
{
	int tmp;
	if (Is_empty(s))
	{
		return -1;
	}
	else
	{
		tmp = s->d[s->top];
		s->top--; 
		return tmp;
	}
}

int Top(Stack *s)
{
	int tmp;
		if (Is_empty(s))
	{
		return -1;
	}
	else
	{
		tmp = s->d[s->top];
		return tmp;
	}
	
}

int Len(Stack *s)
{
	return s->top + 1;
}

int Ergodic(Stack *s)
{
	for (int i=0;i<s->top+1;i++)
	{
		cout << s->d[i];
	}
} 

int main()
{
	Stack s;
    int a,lens;
    init(&s);
    Push(&s,1);
    Push(&s,2);
    Push(&s,3);
    Push(&s,4);
    Push(&s,5);
    Push(&s,6);
    int p = Pop(&s);
    a = Top(&s);      //取栈顶元素
    lens = Len(&s);   //长度
    cout <<"出栈元素:"<<p<< endl;
    cout <<"栈顶元素:"<<a<< endl;
    cout <<"元素长度:"<<lens<< endl;
    Ergodic(&s);      //遍历
    return 0;
}
