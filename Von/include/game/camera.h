/*
Camera for level scrolling
*/

#pragma once

#include "utils/general.h"

#include "physics/AABB.h"

class Camera
{
public:
	Camera() { m_collisionBox = { Vector2f(0, 0), SCREEN_WIDTH, SCREEN_HEIGHT }; }

	void update()
	{
		glMatrixMode(GL_MODELVIEW);
		glPopMatrix();
			glLoadIdentity();
			glTranslatef(-m_collisionBox.position.x, -m_collisionBox.position.y, 0.f);
		glPushMatrix();
	}

	void setCoords(Vector2f pos) { m_collisionBox.position = pos; }

	Vector2f getPosition() { return m_collisionBox.position; }

	AABB m_collisionBox;
};
