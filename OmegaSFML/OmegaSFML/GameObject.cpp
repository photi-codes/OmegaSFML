#include "GameObject.hpp"

void GameObject::Awake() 
{
	for (std::vector<BaseComponent*>::iterator i = m_Components.begin(); i != m_Components.end(); ++i) {
		(*i)->Awake();
		std::cout << "This" << std::endl;
	}
	    for(std::vector<GameObject*>::iterator i = m_Children.begin(); i != m_Children.end(); ++i) {
	        (*i)->Awake();
	    }
}

void GameObject::Start() 
{
	for (std::vector<BaseComponent*>::iterator i = m_Components.begin(); i != m_Components.end(); ++i) {
		(*i)->Start();
	}
		for(std::vector<GameObject*>::iterator i = m_Children.begin(); i != m_Children.end();    ++i) {
		    (*i)->Start();
		}
}

void GameObject::Update(float msec) 
{
	if (m_Parent) { //This node has a parent...
		//worldTransform = m_Parent->worldTransform * transform;
	}
	else { //Root node, world transform is local transform!
		//worldTransform = TransformComponent mat4(1.0f) * transform.transformMatrix;
	}
}

void GameObject::LateUpdate(float msec) 
{
	for (std::vector<BaseComponent*>::iterator i = m_Components.begin(); i != m_Components.end(); ++i) {
		(*i)->LateUpdate();
		//std::cout << "This" << std::endl;
	}
		for(std::vector<GameObject*>::iterator i = m_Children.begin(); i != m_Children.end();    ++i) {
				(*i)->LateUpdate(msec);
		    }

	//Updates are being cycled for components.
	//std::cout << "The Components are updating." << std::endl;
}

void GameObject::AddComponent(BaseComponent* component, TransformComponent* transform)
{
	m_Components.push_back(component);
	m_Components.push_back(transform);
}

void GameObject::AddChild(GameObject* child) 
{
	m_Children.push_back(child);
}