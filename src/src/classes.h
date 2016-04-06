#pragma once
#include <vector>
#include <time.h>

class Algorithm;
class VirtualMachine;
class Timer;

class Process
{
private:
	friend Algorithm;
	friend VirtualMachine;
	int s;
	long t;
	int priority;
	int d;
	double beta;
public:
	int F();
};

class Algorithm
{
public:
	int Next(VirtualMachine source);
};

class Timer
{
private:
	long count;
public:
	long GetCurrentTime();
	void Start();
	void Stop();
	void NextSecond();
	void CreateAndCloseProcess();
};

class VirtualMachine
{
private:
	friend Algorithm;
	std::vector<Process> processlist;
	Timer timer;
	Algorithm algorithm;
	int tau;
	int n;
	long clock;
	long time;
public:
	void Start();

	void Shutdown();

	VirtualMachine();
	VirtualMachine(long Clock, long StopTime);
};


int Algorithm::Next(VirtualMachine source)
{
	return rand() % source.processlist.size();//сложные вычисления
}