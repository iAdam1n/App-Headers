/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MSQPrefabViewBase.h>

@protocol MSQObj3DModelProtocol;
@class MQEventHandler, SCNScene, SCNNode;

@interface MSQObj3DView : MSQPrefabViewBase {

	MQEventHandler* onPrefabChangeHandler;
	SCNScene* scene;
	SCNNode* meshModel;
	id<MSQObj3DModelProtocol> _model;

}

@property (assign,nonatomic,__weak) id<MSQObj3DModelProtocol> model;              //@synthesize model=_model - In the implementation block
-(void)onPrefabChange:(id)arg1 ;
-(id)getNode:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(id<MSQObj3DModelProtocol>)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(id<MSQObj3DModelProtocol>)arg1 ;
-(void)destroy;
@end
