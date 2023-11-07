//#include <iostream>
//#include <memory.h>
//#include <string>
//
//class Prototype
//{
//public:
//	virtual ~Prototype() {}
//	virtual Prototype* Clone() const = 0;
////protected:
//	Prototype() = default;
//};
//
//class ConcreatePrototype :public Prototype
//{
//public:
//	ConcreatePrototype()  = default;
//	ConcreatePrototype(const ConcreatePrototype& cp)
//	{
//		std::cout << "ConcreatePrototype copy ..." << std::endl;
//	}
//	~ConcreatePrototype() {}
//	Prototype* Clone() const
//	{
//		return new ConcreatePrototype(*this);
//	}
//
//};
//
//int main()
//{
//	Prototype* p = new ConcreatePrototype();
//	Prototype* p1 = p->Clone();
//
//	return 0;
//}