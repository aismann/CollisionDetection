/*
 * Config.h
 *
 *  Created on: 2015年2月9日
 *      Author: yong
 */

#ifndef TESTS_CPP_EMPTY_TEST_CLASSES_CONFIG_H_
#define TESTS_CPP_EMPTY_TEST_CLASSES_CONFIG_H_

// TAGs
const int TAG_ENEMY_PLANE = 100;
const int TAG_BULLET = 200;
const int TAG_BULLET_SUPER = 300;

// Physical related
const int PHYSICAL_BODY_HERO_GROUP = -1;
const int PHYSICAL_BODY_HERO_BITMASK_CATEGORY = 0x01;
const int PHYSICAL_BODY_HERO_BITMASK_CONTACT_TEST = 0x02;
const int PHYSICAL_BODY_HERO_BITMASK_COLLISION = 0x02;

const int PHYSICAL_BODY_ENEMY_GROUP = -2;
const int PHYSICAL_BODY_ENEMY_BITMASK_CATEGORY = 0x02;
const int PHYSICAL_BODY_ENEMY_BITMASK_CONTACT_TEST = 0x01;
const int PHYSICAL_BODY_ENEMY_BITMASK_COLLISION = 0x01;

// Role settings
const int ROLE_BULLET_SUPER_FORCE = 10000;

#endif /* TESTS_CPP_EMPTY_TEST_CLASSES_CONFIG_H_ */