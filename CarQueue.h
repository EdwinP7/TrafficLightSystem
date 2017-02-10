#include "Vehicle.h"
#include <mutex>
#include <pthread.h>


#pragma once

const int MAX = 10;

class CarQueue
{
public:
	CarQueue();
	bool tryInsert(int item);
	bool tryRemove(int *item);
	void getItems();
	int items[MAX];
	int id;
	pthread_mutex_t lock1;
	~CarQueue();
private:
	int count;
	
	
	int front;
	int nextEmpty;
	Vehicle car_list[MAX];
};

