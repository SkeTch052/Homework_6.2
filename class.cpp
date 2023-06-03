#include "class.h"

Counter::Counter(int count){}
Counter::Counter() { count = 1; }
int Counter::get_count() { return count; }
int Counter::plus() { return count + 1; }
int Counter::minus() { return count - 1; }
void Counter::set_count(int num) { count = num; }