/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString, NSValue;

@interface FBAnimationGroupElement : NSObject {

	CALayer* _layer;
	NSString* _keyPath;
	NSValue* _fromValue;
	NSValue* _toValue;
	double _duration;
	double _velocity;

}

@property (assign,nonatomic,__weak) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,copy) NSString * keyPath;                    //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) NSValue * fromValue;               //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,readonly) NSValue * toValue;                 //@synthesize toValue=_toValue - In the implementation block
@property (nonatomic,readonly) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double velocity;                   //@synthesize velocity=_velocity - In the implementation block
+(id)elementWithLayer:(id)arg1 keyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 duration:(double)arg5 velocity:(double)arg6 ;
-(CALayer *)layer;
-(double)duration;
-(void)setLayer:(CALayer *)arg1 ;
-(NSString *)keyPath;
-(NSValue *)fromValue;
-(NSValue *)toValue;
-(void)setKeyPath:(NSString *)arg1 ;
-(double)velocity;
@end
