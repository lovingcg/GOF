//#include<iostream>
//#include<memory.h>
//#include<string>
//
//// 饿汉模式
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
//SingletonHungry* SingletonHungry::pSingleton = new SingletonHungry;//在加载的时候就创建
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
//	if (test1 == test2)	std::cout << "饿汉单例模式" << std::endl;
//	else std::cout << "Not 饿汉单例模式" << std::endl;
//
//	SingletonLazy* test3 = SingletonLazy::getInstance();
//	SingletonLazy* test4 = SingletonLazy::getInstance();
//	if (test3 == test4) std::cout << "懒汉单例模式" << std::endl;
//	else std::cout << "Not 懒汉单例模式" << std::endl;
//
//	return 0;
//}