#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
};

struct Stack
{
	Node* top;
	Node* key;
};

Node* init_List()
{
	Node* head = new Node;
	head->data = NULL;
	head->next = NULL;
	return head;
}

Node* Create_New_Node(int value)
{
	Node* newnode = new Node;
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}

Node* Insert(Node *head, int value)
{
	Node* newnode = Create_New_Node(value);
	newnode->next = head->next;
	head->next = newnode;
	return newnode;
}

void init_Stack(Stack* s, Node* head)
{
	s->top = head;
	s->key = s->top;
}

bool Is_empty(Stack *s)
{
	if (s->top->next == NULL)
	{
		return true;
	}
	else
		return false;
}

void push(Stack *s, int value)
{
	s->top = Insert(s->top,value);
	s->key = s->top;
}

bool pop(Stack *s)
{
	if (Is_empty(s))
	{
		return false;
	}
	else
	{
		s->top = s->top->next;
		s->key = s->top;
		return true;
		cout << s->top->data;
	}

}

bool top(Stack *s)
{
	if (Is_empty(s))
	{
		return false;
	}
	else
	{
		cout << s->top->data;
		return true;
	}

}

void Ergodic(Stack *s)
{
	while (s->top->next != Null)
	{
		cout << s->top->data;
		s->key = s->key->next;
	}
}

/*int put(int s)
{
	for (int i = 0; i < s; i++)
	{
		push()
	}
}
*/

int main()
{
	Stack s;
	init_Stack(&s, init_List());
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	Ergodic(&
		s);
	pop(&s);
	Ergodic(&s);
	top(&s);
	push(&s, 3);
	Ergodic(&s);

}
