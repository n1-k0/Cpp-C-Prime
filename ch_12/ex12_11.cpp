
#include <iostream>
#include <memory>

using namespace std;

void process(shared_ptr<int> ptr)
{
	std::cout << "inside the process function:" << ptr.use_count() << "\n";
}

int main()
{
	shared_ptr<int> p(new int(42));
	process(shared_ptr<int> (p.get()));
	std::cout << p.use_count() << "\n";
	std::cout << "the int p now points to is:" << *p << "\n";
	/*
		shared_ptr<int> (p.get()) 创建了一个临时变量并值传递给函数参数，并非是p的拷贝，
		在process()结束时会释放p的内存，而main函数结束时还会再释放一次。
		造成二次释放。
	*/
	return 0;
}
