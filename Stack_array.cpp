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

bool Is_empty(Stack *s)//�ж�ջ�Ƿ�Ϊ�� 
{
	if (s->top == -1)
	{
		return true;
	}
	else 
	    return false;
}

bool Is_full(Stack *s)//�ж�ջ�Ƿ��� 
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
    a = Top(&s);      //ȡջ��Ԫ��
    lens = Len(&s);   //����
    cout <<"��ջԪ��:"<<p<< endl;
    cout <<"ջ��Ԫ��:"<<a<< endl;
    cout <<"Ԫ�س���:"<<lens<< endl;
    Ergodic(&s);      //����
    return 0;
}
