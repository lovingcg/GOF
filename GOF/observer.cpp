//#include <iostream>
//#include <string>
//#include <memory>
//#include <list>
//
//class AbstractHero//抽象的英雄，抽象的观察者
//{
//public:
//	virtual void Update() = 0;
//};
//
//class HeroA :public AbstractHero//具体的英雄，具体的观察者
//{
//public:
//	HeroA() {
//		std::cout << "英雄A正在撸BOSS" << std::endl;
//	}
//	virtual void Update() {
//		std::cout << "英雄A停止撸，待机状态" << std::endl;
//	}
//};
//
//
//class HeroB :public AbstractHero {
//public:
//	HeroB() {
//		std::cout << "英雄B正在撸BOSS" << std::endl;
//	}
//	virtual void Update() {
//		std::cout << "英雄B停止撸，待机状态" << std::endl;
//	}
//};
//
//class AbstractBoss //定义抽象的观察目标
//{
//public:
//	virtual void addHero(AbstractHero* hero) = 0;//添加观察者
//	virtual void deleteHero(AbstractHero* hero) = 0;//删除观察者
//	virtual void notifv() = 0;
//};
//
//class BOSSA :public AbstractBoss
//{
//public:
//	std::list<AbstractHero*> pHeroList;
//
//	virtual void addHero(AbstractHero* hero)
//	{
//		pHeroList.push_back(hero);
//	}
//	virtual void deleteHero(AbstractHero* hero)
//	{
//		pHeroList.remove(hero);
//	}
//	virtual void notifv()
//	{
//		for (std::list<AbstractHero*>::iterator it = pHeroList.begin(); it != pHeroList.end(); ++it)
//		{
//			(*it)->Update();
//		}
//	}
//};
//
//int main()
//{
//	// 创建观察者
//	AbstractHero* heroA = new HeroA();
//	AbstractHero* heroB = new HeroB;
//
//	//创建观察目标
//	AbstractBoss* bossA = new BOSSA;
//	bossA->addHero(heroA);
//	bossA->addHero(heroB);
//
//	std::cout << "heroA 阵亡" << std::endl;
//	bossA->deleteHero(heroA);
//
//	std::cout << "Boss死了，通知其他英雄停止攻击" << std::endl;
//	bossA->notifv();
//	delete heroA, heroB, bossA;
//
//	return 0;
//}