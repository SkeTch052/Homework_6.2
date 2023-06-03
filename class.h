#pragma once

class Counter {
	int count;
public:
	Counter(int count);
	Counter();
	int get_count();
	int plus();
	int minus();
	void set_count(int num);
};