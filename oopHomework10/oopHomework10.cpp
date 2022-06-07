#include <iostream>
using namespace std;
#include"Worker.h"
#include"Printer.h"


int main()
{
	Queue<Worker> workers;
	Worker w1("Worker1", "WorkerSurname1", 18, 3);
	Worker w2("Worker2", "WorkerSurname2", 10, 2);
	Worker w3("Worker3", "WorkerSurname3", 30, 1);
	workers.request(w1);
	workers.request(w2);
	workers.request(w3);
	

	while (!workers.isEmpty())
	{
		cout << workers.peek() << endl;
		workers.start();
	}


	
}

