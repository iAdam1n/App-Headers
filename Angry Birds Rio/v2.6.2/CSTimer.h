/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface CSTimer : NSObject {

	BOOL _sourceIsSet;
	BOOL _repeats;
	id _target;
	SEL _selector;
	NSObject*<OS_dispatch_source> _source;
	double _interval;
	id _userInfo;
	NSString* _timerId;

}

@property (nonatomic,retain) id target;                                         //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                      //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL sourceIsSet;                                  //@synthesize sourceIsSet=_sourceIsSet - In the implementation block
@property (assign,nonatomic) double interval;                                   //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) BOOL repeats;                                      //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,retain) id userInfo;                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSString * timerId;                                //@synthesize timerId=_timerId - In the implementation block
-(NSString *)timerId;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 source:(id)arg3 sourceIsSet:(BOOL)arg4 interval:(double)arg5 repeats:(BOOL)arg6 userInfo:(id)arg7 timerId:(id)arg8 ;
-(BOOL)sourceIsSet;
-(void)setSourceIsSet:(BOOL)arg1 ;
-(void)setTimerId:(NSString *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)target;
-(SEL)selector;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(BOOL)repeats;
-(void)setRepeats:(BOOL)arg1 ;
@end

