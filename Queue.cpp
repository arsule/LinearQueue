#include"Queue.h"
//////////////////////////////////////
Queue::	Queue()
{
	front = -1;
	rare = -1;
}
//////////////////////////////////////
bool Queue:: isEmpty()
{
	if(front == -1 && rare == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//////////////////////////////////////
bool Queue:: isFull()
{
	if(rare == size-1)
	{
		return true;
	}
	else{
		return false;
	}
}

//////////////////////////////////////
void Queue:: EnQueue(int i)
{
	if(!isFull())
	{
		if(isEmpty())
		{
			front = 0;
			rare = 0;
		}
		else
		{
			
			rare++;
		}
		arr[rare] = i;
	}
	else
	{
		cout<<"\nQueue is full. Insertion not possible.\n";	
	}	
}	
//////////////////////////////////////
int Queue:: DeQueue()
{
	int x = 0;
	if(!isEmpty())
	{
		x = arr[front];
		if(front == rare)
		{
			front = -1;
			rare = -1;
		}
		else
		{
			front++;
		}
	}
	else
	{
		cout<<"\nQueue is empty. Deletion not possible.\n";	
	}
	return x;
}
//////////////////////////////////////
void Queue::Display()
{
	if(!isEmpty())
	{
		for(int i = front ; i <= rare ; i++)
		{
			cout << " \t " << arr[i];
		}
	}
	else
	{
			cout<<"\nQueue is empty. Display not possible.\n";
		
	}
}
//////////////////////////////////////
