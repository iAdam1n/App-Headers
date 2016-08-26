/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/POPSpringAnimation.h>

@class CALayer, NSString, NSNumber;

@interface FBUnfoldableSpringAnimation : POPSpringAnimation {

	id _previousVelocityUpdateToValue;
	double _previousVelocityUpdateTime;
	CALayer* _animatingLayer;
	NSString* _animatingKey;
	NSNumber* _velocityCacheKey;

}

@property (nonatomic,readonly) CALayer * animatingLayer;              //@synthesize animatingLayer=_animatingLayer - In the implementation block
@property (nonatomic,readonly) NSString * animatingKey;               //@synthesize animatingKey=_animatingKey - In the implementation block
+(id)unfoldableSpringAnimationForLayer:(id)arg1 key:(id)arg2 ;
-(CALayer *)animatingLayer;
-(NSString *)animatingKey;
-(void)_restoreVelocityMetadataFromCache;
-(void)_saveVelocityMetadataToCache;
-(void)setToValue:(id)arg1 ;
@end
