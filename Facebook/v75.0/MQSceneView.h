/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQSceneObjectView.h>

@protocol MQSceneModelProtocol;
@interface MQSceneView : MQSceneObjectView {

	id<MQSceneModelProtocol> _model;

}

@property (assign,nonatomic,__weak) id<MQSceneModelProtocol> model;              //@synthesize model=_model - In the implementation block
-(id)initWithSceneModel:(id)arg1 ;
-(id)initWithSceneObjectModel:(id)arg1 ;
-(void)unbindTransform:(id)arg1 ;
-(void)bindTransform:(id)arg1 ;
-(void)onTransformChange:(id)arg1 ;
-(id<MQSceneModelProtocol>)model;
-(void)setModel:(id<MQSceneModelProtocol>)arg1 ;
@end
