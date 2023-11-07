//#include <iostream>
//#include <map>
//#include <memory>
//
//// 享元类
//class TreeType
//{
//private:
//	std::string species;
//	std::string color;
//
//public:
//	TreeType(const std::string& species, const std::string& color) :species(species), color(color) {}
//	void display(int x, int y)
//	{
//		std::cout << "Displaying a " << color << " " << species << " at (" << x << ", " << y << ")" << std::endl;
//	}
//};
//
//// 享元工厂
//class TreeFactory
//{
//private:
//	static std::map<std::pair<std::string, std::string>, std::shared_ptr<TreeType>> treeTypes;
//
//public:
//	static std::shared_ptr<TreeType> getTreeType(const std::string& species, const std::string& color)
//	{
//		auto key = std::make_pair(species, color);
//		if (treeTypes.find(key) == treeTypes.end())
//		{
//			treeTypes[key] = std::make_shared<TreeType>(species, color);
//		}
//		return treeTypes[key];
//	}
//};
//
//std::map<std::pair<std::string, std::string>, std::shared_ptr<TreeType>> TreeFactory::treeTypes;
//
//int main()
//{
//	auto oakTree = TreeFactory::getTreeType("Oak", "Green");
//	oakTree->display(10, 20);
//
//	auto pineTree = TreeFactory::getTreeType("Pine", "Dark Green");
//	pineTree->display(50, 60);
//
//	// Reuse the same data
//	auto anotherOak = TreeFactory::getTreeType("Oak", "Green");
//	anotherOak->display(30, 40);
//
//	return 0;
//}