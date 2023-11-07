#include <iostream>

class Player;

class PlayerState
{
public:
	virtual ~PlayerState() = default;
	virtual void handle(Player& player) = 0;
};

// 具体类状态：站立
class StandingState :public PlayerState
{
public:
	void handle(Player& player) override
	{
		std::cout << "Player is standing." << std::endl;
	}
};

// 具体类状态：移动
class MovingState :public PlayerState
{
public:
	void handle(Player& player) override
	{
		std::cout << "Player is moving." << std::endl;
	}
};

// 具体类状态：跳跃
class JumpingState : public PlayerState {
public:
	void handle(Player& player) override {
		std::cout << "Player is jumping." << std::endl;
	}
};

class Player
{
private:
	PlayerState* state;

public:
	Player() :state(new StandingState()) {}
	~Player()
	{
		delete state;
	}

	void setState(PlayerState* newState)
	{
		delete state;
		state = newState;
	}

	void performAction()
	{
		state->handle(*this);
	}
};

int main()
{
	Player player;

	player.performAction();

	player.setState(new MovingState());
	player.performAction();

	player.setState(new JumpingState());
	player.performAction();

	return 0;
}