//
//  MyScene.h
//  SpriteKitSimpleGame
//

//  Copyright (c) 2014 Guido Wehner. All rights reserved.
//

static const uint32_t projectileCategory        = 0x1 << 0;
static const uint32_t monsterCategory           = 0x1 << 1;

#import <SpriteKit/SpriteKit.h>

@interface MyScene : SKScene

@property (nonatomic) SKSpriteNode *player;

@property (nonatomic)NSTimeInterval lastSpawnTimeInterval;
@property (nonatomic)NSTimeInterval lastUpdateTimeInterval;


-(void)addMonster;
@end
