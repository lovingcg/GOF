//#include<iostream>
//#include<memory.h>
//#include<string>
//
//// ����ģʽ
//class SingletonHungry
//{
//public:
//	static SingletonHungry* getInstance()
//	{
//		return pSingleton;
//	}
//
//private:
//	SingletonHungry() {}
//	static SingletonHungry* pSingleton;
//};
//
//SingletonHungry* SingletonHungry::pSingleton = new SingletonHungry;//�ڼ��ص�ʱ��ʹ���
//
//class SingletonLazy
//{
//public:
//	static SingletonLazy* getInstance()
//	{
//		if (pSingleton == nullptr)
//		{
//			pSingleton = new SingletonLazy;
//		}
//		return pSingleton;
//	}
//private:
//	SingletonLazy() {}
//	static SingletonLazy* pSingleton;
//};
//
//SingletonLazy* SingletonLazy::pSingleton = nullptr;
//
//int main()
//{
//	SingletonHungry* test1 = SingletonHungry::getInstance();
//	SingletonHungry* test2 = SingletonHungry::getInstance();
//	if (test1 == test2)	std::cout << "��������ģʽ" << std::endl;
//	else std::cout << "Not ��������ģʽ" << std::endl;
//
//	SingletonLazy* test3 = SingletonLazy::getInstance();
//	SingletonLazy* test4 = SingletonLazy::getInstance();
//	if (test3 == test4) std::cout << "��������ģʽ" << std::endl;
//	else std::cout << "Not ��������ģʽ" << std::endl;
//
//	return 0;
//}