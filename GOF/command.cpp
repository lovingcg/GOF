//#include <iostream>
//#include <memory>
//#include <vector>
//
//class Command
//{
//public:
//	virtual ~Command() {}
//	virtual void execute() = 0;
//};
//
//
//class MoveUpCommand :public Command
//{
//public:
//	void execute() override
//	{
//		std::cout << "Move Up" << std::endl;
//	}
//};
//
//class MoveDownCommand :public Command
//{
//public:
//	void execute() override
//	{
//		std::cout << "Move Down" << std::endl;
//	}
//};
//
//class InputHandler
//{
//private:
//	std::unique_ptr<Command> buttonup;
//	std::unique_ptr<Command> buttondown;
//
//public:
//	InputHandler()
//	{
//		buttonup = std::make_unique<MoveUpCommand>();
//		buttondown = std::make_unique<MoveDownCommand>();
//	}
//
//	void handleInput(char input)
//	{
//		if (input == 'w')
//			buttonup->execute();
//		else if (input == 's')
//			buttondown->execute();
//	}
//};
//
//int main()
//{
//	InputHandler handler;
//
//	char input;
//	std::cout << "Press 'w' for UP and 's' for DOWN. Press 'q' to quit." << std::endl;
//
//	do {
//		std::cin >> input;
//		handler.handleInput(input);
//	} while (input != 'q');
//
//	return 0;
//}


// 撤销功能的命令模式
//#include <iostream>
//#include <memory>
//#include <stack>
//
//class Command
//{
//public:
//	virtual ~Command() {}
//	virtual void execute() = 0;
//	virtual void undo() = 0;
//};
//
//class Number
//{
//	int value;
//public:
//	Number(int v) :value(v) {}
//	void increment()
//	{
//		value++;
//		std::cout << "Value: " << value << std::endl;
//	}
//	void decrement()
//	{
//		value--;
//		std::cout << "Value: " << value << std::endl;
//	}
//};
//
//class IncrementCommand :public Command
//{
//	Number& num;
//public:
//	IncrementCommand(Number& n):num(n){}
//	void execute() override
//	{
//		num.increment();
//	}
//	void undo() override
//	{
//		num.decrement();
//	}
//};
//
//class DecrementCommand : public Command {
//	Number& num;
//public:
//	DecrementCommand(Number& n) : num(n) {}
//	void execute() override {
//		num.decrement();
//	}
//	void undo() override {
//		num.increment();
//	}
//};
//
//class Invoker
//{
//	std::stack<std::unique_ptr<Command>> commandHistory;
//
//public:
//	void execute(std::unique_ptr<Command> cmd)
//	{
//		cmd->execute();
//		commandHistory.push(std::move(cmd));
//	}
//
//	void undo() {
//		if (!commandHistory.empty()) {
//			commandHistory.top()->undo();
//			commandHistory.pop();
//		}
//		else {
//			std::cout << "No commands to undo!" << std::endl;
//		}
//	}
//};
//
//int main() {
//	Number num(0);
//	Invoker invoker;
//
//	invoker.execute(std::make_unique<IncrementCommand>(num));
//	invoker.execute(std::make_unique<DecrementCommand>(num));
//	invoker.execute(std::make_unique<IncrementCommand>(num));
//
//	std::cout << "--- Undoing ---" << std::endl;
//	invoker.undo();
//	invoker.undo();
//	invoker.undo();
//	invoker.undo();
//
//	return 0;
//}
