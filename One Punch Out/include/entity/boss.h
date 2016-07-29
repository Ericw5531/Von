#pragma once

#include "utils/Vector2f.h"

#include "physics/AABB.h"

#include "gfx/texture.h"
#include "gfx/spritesheet.h"

class Boss
{
	public:
		void Render() {};
		void Update() {};
		void HandleEvents() {};

		void phaseOne() {};
		void phaseTwo() {};
		void phaseThree() {};

		Vector2f& getPosition() { return m_position; }

		AABB& getCollisionBox() { return m_collisionBox; }
	protected:
		Vector2f m_position;
		Vector2f m_velocity;
		Vector2f m_direction;

		float m_angle;

		AABB m_collisionBox;

		Texture m_tex;
		SpriteSheet m_spriteSheet;

		GLubyte m_phaseNumber;
};