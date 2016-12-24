/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString;

@interface MASavedAnimationState : NSObject {

	CALayer* _layer;
	NSString* _keyPath;
	id _oldValue;

}

@property (retain) CALayer * layer;               //@synthesize layer=_layer - In the implementation block
@property (copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (retain) id oldValue;                   //@synthesize oldValue=_oldValue - In the implementation block
+(id)savedStateWithLayer:(id)arg1 keyPath:(id)arg2 ;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)oldValue;
-(void)setOldValue:(id)arg1 ;
@end
