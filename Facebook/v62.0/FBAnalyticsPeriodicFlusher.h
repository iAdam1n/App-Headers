/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAnalyticsPeriodicFlusherDelegate;
@class FBTimer, NSDate;

@interface FBAnalyticsPeriodicFlusher : NSObject {

	FBTimer* _flushTimer;
	NSDate* _lastTimerCreateDate;
	BOOL _enabled;
	id<FBAnalyticsPeriodicFlusherDelegate> _delegate;
	double _interval;

}

@property (assign,nonatomic,__weak) id<FBAnalyticsPeriodicFlusherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double interval;                                                     //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                        //@synthesize enabled=_enabled - In the implementation block
-(void)_createTimer;
-(void)_deleteTimer;
-(void)_flushTimerFired;
-(BOOL)enabled;
-(void)setDelegate:(id<FBAnalyticsPeriodicFlusherDelegate>)arg1 ;
-(id)init;
-(id<FBAnalyticsPeriodicFlusherDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
@end
