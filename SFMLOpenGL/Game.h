#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <MyVector3.h>
#include <MyMatrix3.h>

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	Clock clock;
	Time elapsed;

	MyVector3 m_displacementVec{ 0, 0, 0 };

	float m_scale = 1.0f;
	float m_rotationX = 0.0f;
	float m_rotationY = 0.0f;
	float m_rotationZ = 0.0f;
};
