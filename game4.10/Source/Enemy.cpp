#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "audio.h"
#include "gamelib.h"
#include "Enemy.h"

namespace game_framework {
	// Enemy
	Enemy::Enemy() {
		posX = 0;
		posY = 0;
		angle = 0;
	}

	Enemy::Enemy(int x, int y, int ang) {
		posX = x;
		posY = y;
		angle = ang;
	}

	void Enemy::setPos(int x, int y) {
		posX = x;
		posY = y;
	}

	void Enemy::setAngle(int ang) {
		angle = ang;
	}

	CAnimation Enemy::getTexture() {
		return texture;
	}

	//void Enemy::getEnemiesData(int (&array)[][MAX_ENEMY_SIZE][3]) {
	//	for (int i = 0; i < static_cast<int>(LEVELS::COUNT); ++i)
	//		for (int j = 0; j < MAX_ENEMY_SIZE; ++j)
	//			for (int k = 0; k < 3; k++) 
	//				array[i][j][k] = enemiesData[i][j][k];
	//}

	//void Enemy::getEnemiesData(int (&array)[][3], int level) {
	//	for (int i = 0; i < MAX_ENEMY_SIZE; ++i)
	//		for (int j = 0; j < 3; ++j)
	//			array[i][j] = enemiesData[level][i][j];
	//}

	// Bamboo
	Bamboo::Bamboo() : Enemy::Enemy() {}

	Bamboo::Bamboo(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Bamboo::OnInit() {
		//texture.AddBitmap(IDB_BITMAP115);

	}

	void Bamboo::OnMove() {
		texture.OnMove();
	}

	void Bamboo::OnShow() {
		texture.OnShow();
	}



	// Chef
	Chef::Chef() : Enemy::Enemy() {}

	Chef::Chef(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Chef::OnInit() {

	}

	void Chef::OnMove() {
		texture.OnMove();
	}

	void Chef::OnShow() {
		texture.OnShow();
	}



	// Earthworm
	Earthworm::Earthworm() : Enemy::Enemy() {}

	Earthworm::Earthworm(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Earthworm::OnInit() {

	}

	void Earthworm::OnMove() {
		texture.OnMove();
	}

	void Earthworm::OnShow() {
		texture.OnShow();
	}



	// Fly
	Fly::Fly() : Enemy::Enemy() {}

	Fly::Fly(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Fly::OnInit() {

	}

	void Fly::OnMove() {
		texture.OnMove();
	}

	void Fly::OnShow() {
		texture.OnShow();
	}



	// Groundhog
	Groundhog::Groundhog() : Enemy::Enemy() {}

	Groundhog::Groundhog(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Groundhog::OnInit() {
		texture.AddBitmap(IDB_BITMAP116);
		texture.AddBitmap(IDB_BITMAP117);
		texture.AddBitmap(IDB_BITMAP118);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Groundhog::OnMove() {
		texture.OnMove();
	}

	void Groundhog::OnShow() {
		texture.OnShow();
	}



	// Insect
	Insect::Insect() : Enemy::Enemy() {}

	Insect::Insect(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Insect::OnInit() {
		texture.AddBitmap(IDB_BITMAP119);
		texture.AddBitmap(IDB_BITMAP120);
		texture.AddBitmap(IDB_BITMAP121);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Insect::OnMove() {
		texture.OnMove();
	}

	void Insect::OnShow() {
		texture.OnShow();
	}



	// Ladybug
	Ladybug::Ladybug() : Enemy::Enemy() {}

	Ladybug::Ladybug(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Ladybug::OnInit() {
		texture.AddBitmap(IDB_BITMAP122);
		texture.AddBitmap(IDB_BITMAP123);
		texture.AddBitmap(IDB_BITMAP124);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Ladybug::OnMove() {
		texture.OnMove();
	}

	void Ladybug::OnShow() {
		texture.OnShow();
	}



	// Mosquito
	Mosquito::Mosquito() : Enemy::Enemy() {}

	Mosquito::Mosquito(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Mosquito::OnInit() {
		texture.AddBitmap(IDB_BITMAP125);
		texture.AddBitmap(IDB_BITMAP126);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Mosquito::OnMove() {
		texture.OnMove();
	}

	void Mosquito::OnShow() {
		texture.OnShow();
	}



	// Penguin
	Penguin::Penguin() : Enemy::Enemy() {}

	Penguin::Penguin(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Penguin::OnInit() {
		texture.AddBitmap(IDB_BITMAP127);
		texture.AddBitmap(IDB_BITMAP128);
		texture.AddBitmap(IDB_BITMAP129);
		texture.AddBitmap(IDB_BITMAP130);
		texture.AddBitmap(IDB_BITMAP131);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Penguin::OnMove() {
		texture.OnMove();
	}

	void Penguin::OnShow() {
		texture.OnShow();
	}



	// PinkMonster
	PinkMonster::PinkMonster() : Enemy::Enemy() {}

	PinkMonster::PinkMonster(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void PinkMonster::OnInit() {
		texture.AddBitmap(IDB_BITMAP132);
		texture.AddBitmap(IDB_BITMAP133);
		texture.AddBitmap(IDB_BITMAP134);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void PinkMonster::OnMove() {
		texture.OnMove();
	}

	void PinkMonster::OnShow() {
		texture.OnShow();
	}



	// Rocket
	Rocket::Rocket() : Enemy::Enemy() {}

	Rocket::Rocket(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Rocket::OnInit() {
		texture.AddBitmap(IDB_BITMAP135);
		texture.AddBitmap(IDB_BITMAP136);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Rocket::OnMove() {
		texture.OnMove();
	}

	void Rocket::OnShow() {
		texture.OnShow();
	}



	// Shark
	Shark::Shark() : Enemy::Enemy() {}

	Shark::Shark(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Shark::OnInit() {
		texture.AddBitmap(IDB_BITMAP137);
		texture.AddBitmap(IDB_BITMAP138);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Shark::OnMove() {
		texture.OnMove();
	}

	void Shark::OnShow() {
		texture.OnShow();
	}



	// Snails
	Snails::Snails() : Enemy::Enemy() {}

	Snails::Snails(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Snails::OnInit() {
		texture.AddBitmap(IDB_BITMAP139);
		texture.AddBitmap(IDB_BITMAP140);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Snails::OnMove() {
		texture.OnMove();
	}

	void Snails::OnShow() {
		texture.OnShow();
	}



	// Spider
	Spider::Spider() : Enemy::Enemy() {}

	Spider::Spider(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Spider::OnInit() {
		texture.AddBitmap(IDB_BITMAP141);
		texture.AddBitmap(IDB_BITMAP142);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Spider::OnMove() {
		texture.OnMove();
	}

	void Spider::OnShow() {
		texture.OnShow();
	}



	//// Blue
	Blue::Blue() : Enemy::Enemy() {}

	Blue::Blue(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Blue::OnInit() {
		texture.AddBitmap(IDB_BITMAP143);
		texture.AddBitmap(IDB_BITMAP144);
		texture.AddBitmap(IDB_BITMAP145);
		texture.AddBitmap(IDB_BITMAP146);
		texture.AddBitmap(IDB_BITMAP147);
		texture.AddBitmap(IDB_BITMAP148);
		texture.AddBitmap(IDB_BITMAP149);
		texture.AddBitmap(IDB_BITMAP150);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Blue::OnMove() {
		texture.OnMove();
	}

	void Blue::OnShow() {
		texture.OnShow();
	}



	// FlyShield
	FlyShield::FlyShield() : Enemy::Enemy() {}

	FlyShield::FlyShield(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void FlyShield::OnInit() {
		texture.AddBitmap(IDB_BITMAP151);
		texture.AddBitmap(IDB_BITMAP152);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void FlyShield::OnMove() {
		texture.OnMove();
	}

	void FlyShield::OnShow() {
		texture.OnShow();
	}



	//// Red
	Red::Red() : Enemy::Enemy() {}

	Red::Red(int x, int y, int ang) : Enemy::Enemy(x, y, ang) {}

	void Red::OnInit() {
		texture.AddBitmap(IDB_BITMAP153);
		texture.AddBitmap(IDB_BITMAP154);
		texture.AddBitmap(IDB_BITMAP155);
		texture.SetDelayCount(3);
		texture.SetTopLeft(posX, posY);
	}

	void Red::OnMove() {
		texture.OnMove();
	}

	void Red::OnShow() {
		texture.OnShow(DEFAULT_SCALE);
	}


}
