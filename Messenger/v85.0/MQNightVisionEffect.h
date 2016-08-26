/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEffectBase.h>

@class SCNScene, SCNNode, SCNMaterial;

@interface MQNightVisionEffect : MQEffectBase {

	float _backgroundAverage;
	SCNScene* _scene;
	SCNNode* _container;
	SCNNode* _head;
	SCNNode* _armature;
	SCNMaterial* _material;
	SCNNode* _light;
	float _lightAlphaTarget;
	float _lightAlpha;
	SCNNode* _light2;
	float _light2AlphaTarget;
	float _light2Alpha;
	float _alphaMultiplyer;
	float _alphaCurrent;
	SCNNode* _leftEyeNode;
	SCNNode* _rightEyeNode;
	BOOL _opened;
	BOOL _firstFrame;
	float _lastHeadRotation;
	BOOL _timerBlock;
	SCNNode* _nvPlane;
	SCNMaterial* _nvMaterial;
	SCNNode* _fgPlane;
	SCNMaterial* _fgMaterial;

}
-(void)drawFace:(id)arg1 ;
-(void)initScene;
-(void)onEnterFrame:(double)arg1 ;
-(id)customVideoMaterials;
-(void)openHelmForDurationRate:(float)arg1 ;
-(void)closeHelmForDurationRate:(float)arg1 ;
-(void)clearBlock;
-(void)disableInteractive;
-(void)alignForeground:(id)arg1 ;
-(void)createLensFlare:(id)arg1 ;
-(id)createForeground:(id)arg1 blend:(id)arg2 order:(int)arg3 ;
-(void)bindVideoMaterial:(id)arg1 width:(float)arg2 height:(float)arg3 ;
-(id)init;
@end
