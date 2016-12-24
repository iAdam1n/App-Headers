/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQEventDispatcher.h>

@class MQDocumentEffect;

@interface MQDocumentViewBase : MQEventDispatcher {

	MQDocumentEffect* _rootEffect;

}

@property (assign,nonatomic,__weak) MQDocumentEffect * rootEffect;              //@synthesize rootEffect=_rootEffect - In the implementation block
-(void)setRootEffect:(MQDocumentEffect *)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(MQDocumentEffect *)rootEffect;
-(void)drawFace:(id)arg1 ;
-(void)drawFaces:(id)arg1 ;
-(void)removeFromParentNode;
-(void)runAction:(/*^block*/id)arg1 ;
@end
