#include"Queue.h"
int main()
{
	Queue q;

 	q.EnQueue(10);
 	q.EnQueue(20);
 	q.EnQueue(30);
 	cout<<"\n Display Called.\n";
 	q.Display();
 	q.EnQueue(40);
 	q.EnQueue(50);
 	q.EnQueue(60);
 	cout<<"\n Display Called.\n";
 	q.Display();
 	cout<<"\nelement removed \t"<<q.DeQueue();
 	cout<<"\nelement removed \t"<<q.DeQueue();
 	cout<<"\nelement removed \t"<<q.DeQueue();
 	cout<<"\n Display Called.\n";
 	q.Display();
 	cout<<"\nelement removed \t"<<q.DeQueue();
 	cout<<"\nelement removed \t"<<q.DeQueue();
 	cout<<"\n Display Called.\n";
 	q.Display();
 	return 0;
} 
