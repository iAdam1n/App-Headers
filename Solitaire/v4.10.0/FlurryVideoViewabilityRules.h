/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FlurryVideoViewabilityState, NSObject;

@interface FlurryVideoViewabilityRules : NSObject {

	BOOL _consecutiveFlag;
	BOOL _audioFlag;
	int _viewType;
	int _viewabilityDurationInSecs;
	float _viewabilityPercentVisible;
	FlurryVideoViewabilityState* _currentState;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int viewType;                                            //@synthesize viewType=_viewType - In the implementation block
@property (assign,nonatomic) int viewabilityDurationInSecs;                           //@synthesize viewabilityDurationInSecs=_viewabilityDurationInSecs - In the implementation block
@property (assign,nonatomic) float viewabilityPercentVisible;                         //@synthesize viewabilityPercentVisible=_viewabilityPercentVisible - In the implementation block
@property (assign,nonatomic) BOOL consecutiveFlag;                                    //@synthesize consecutiveFlag=_consecutiveFlag - In the implementation block
@property (assign,nonatomic) BOOL audioFlag;                                          //@synthesize audioFlag=_audioFlag - In the implementation block
@property (nonatomic,retain) FlurryVideoViewabilityState * currentState;              //@synthesize currentState=_currentState - In the implementation block
-(float)viewabilityPercentVisible;
-(BOOL)shouldFire:(id)arg1 currentTime:(float)arg2 ;
-(BOOL)consecutiveFlag;
-(void)resetCurrentViewabilityDuration;
-(void)resetViewabilityState;
-(void)setViewabilityPercentVisible:(float)arg1 ;
-(void)setViewabilityDurationInSecs:(int)arg1 ;
-(void)setConsecutiveFlag:(BOOL)arg1 ;
-(void)setAudioFlag:(BOOL)arg1 ;
-(int)viewabilityDurationInSecs;
-(BOOL)audioFlag;
-(id)init;
-(id)description;
-(FlurryVideoViewabilityState *)currentState;
-(int)viewType;
-(void)setCurrentState:(FlurryVideoViewabilityState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setViewType:(int)arg1 ;
@end

