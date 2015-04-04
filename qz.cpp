#include<iostream.h>
#include<stdlib.h>
#include<time.h>

class Quiz
{
private:
	char answer;
	int score;
public:
	Quiz();
	void Order();
	void q1();
	void q2();
	void q3();
	void q4();
	void q5();
	void q6();
	void q7();
	void q8();
	void q9();
	void q10();
};

Quiz::Quiz()
{
	score=0;
}

void Quiz::Order()
{
	int order[10]={1,2,3,4,5,6,7,8,9,10};

	for (int x=0;x<100;x++)
	{
		int temp=0;

		int a=rand()%9+1;
		int b=rand()%9+1;

		temp=order[a];
		order[a]=order[b];
		order[b]=temp;
	}

	for (int q=0;q<10;q++)
	{
		if (q=1)
			q1();
		if (q=2)
			q2();
		if (q=3)
			q3();
		if (q=4)
			q4();
		if (q=5)
			q5();
		if (q=6)
			q6();
		if (q=7)
			q7();
		if (q=8)
			q8();
		if (q=9)
			q9();
		if (q=10)
			q10();
	}

}

void Quiz::q1()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q2()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q3()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q4()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q5()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q6()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q7()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q8()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q9()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

void Quiz::q10()
{
	cout<<"question?"<<endl;
	cout<<"<A> answer   <B> answer"<<endl;
	cout<<"<C> answer   <D> answer"<<endl;
	cin>>answer;

	if (answer=='A')
	{
		cout<<"Correct answer"<<endl;
		score=score++;
	}
	else
		cout<<"Incorrect answer"<<endl;

}

int main()
{
	srand(time(0));
	Quiz thisquiz;

	thisquiz.Order();	


	return 0;
}