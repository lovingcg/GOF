//#include <iostream>
//#include <string>
//#include <memory>
//#include <list>
//
//class AbstractHero//�����Ӣ�ۣ�����Ĺ۲���
//{
//public:
//	virtual void Update() = 0;
//};
//
//class HeroA :public AbstractHero//�����Ӣ�ۣ�����Ĺ۲���
//{
//public:
//	HeroA() {
//		std::cout << "Ӣ��A����ߣBOSS" << std::endl;
//	}
//	virtual void Update() {
//		std::cout << "Ӣ��Aֹͣߣ������״̬" << std::endl;
//	}
//};
//
//
//class HeroB :public AbstractHero {
//public:
//	HeroB() {
//		std::cout << "Ӣ��B����ߣBOSS" << std::endl;
//	}
//	virtual void Update() {
//		std::cout << "Ӣ��Bֹͣߣ������״̬" << std::endl;
//	}
//};
//
//class AbstractBoss //�������Ĺ۲�Ŀ��
//{
//public:
//	virtual void addHero(AbstractHero* hero) = 0;//��ӹ۲���
//	virtual void deleteHero(AbstractHero* hero) = 0;//ɾ���۲���
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
//	// �����۲���
//	AbstractHero* heroA = new HeroA();
//	AbstractHero* heroB = new HeroB;
//
//	//�����۲�Ŀ��
//	AbstractBoss* bossA = new BOSSA;
//	bossA->addHero(heroA);
//	bossA->addHero(heroB);
//
//	std::cout << "heroA ����" << std::endl;
//	bossA->deleteHero(heroA);
//
//	std::cout << "Boss���ˣ�֪ͨ����Ӣ��ֹͣ����" << std::endl;
//	bossA->notifv();
//	delete heroA, heroB, bossA;
//
//	return 0;
//}