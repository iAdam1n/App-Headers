/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LPEditorEvent : NSObject {

	long long _trackedControlEvent;
	NSString* _name;

}

@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
+(void)addControlEvents:(id)arg1 forControl:(id)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)sendLeanplumEvent:(unsigned long long)arg1 ;
-(void)sendEventTouchDown;
-(void)sendEventTouchUpInside;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithEvent:(id)arg1 ;
@end
