#pragma once
#include "BaseComponent.hpp"
//#include <SFML\Graphics.hpp>
#include <iostream>

struct Vector3
{
public:
	Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
	Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

	float x, y, z;
};

struct Vector2
{
public:
	Vector2() : x(0.0f), y(0.0f) {}
	Vector2(float _x, float _y) : x(_x), y(_y) {}

	float x, y;
};

class TransformComponent: public BaseComponent
//class TransformComponent
{
public:
	//Vector3f m_Position;
	//Vector3f m_Rotation;
	//Vector3f m_Scale;

	TransformComponent();
	//~TransformComponent();

	void AddTransform(sf::Transform transform);

	//sf::Transform m_Transform;

	void Awake();
	void Start();
	void Update();
	void LateUpdate();

	//void Awake();
	//void Start();
	//void Update();
	//void LateUpdate();
	
	sf::Transform m_Transform;
	//Transform transformMatrix;
};

