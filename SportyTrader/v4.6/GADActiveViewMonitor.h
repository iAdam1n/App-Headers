/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, GADActiveViewMonitorDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@class NSObject, UIView, NSArray, NSTimer;

@interface GADActiveViewMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	id<GADActiveViewMonitorDelegate> _delegate;
	CGRect _monitoredViewVisibleBounds;
	BOOL _monitoredViewVisible;
	BOOL _activeViewMonitorEnabled;
	UIView* _monitoredView;
	NSArray* _refreshIntervals;
	unsigned long long _nextRefreshIntervalIndex;
	NSTimer* _updateViewBoundsTimer;

}

@property (__weak) id<GADActiveViewMonitorDelegate> delegate; 
@property (assign) CGRect monitoredViewVisibleBounds; 
@property (getter=isMonitoredViewVisible,readonly) BOOL monitoredViewVisible; 
@property (nonatomic,__weak,readonly) UIView * monitoredView;                              //@synthesize monitoredView=_monitoredView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * refreshIntervals;                            //@synthesize refreshIntervals=_refreshIntervals - In the implementation block
@property (assign,nonatomic) unsigned long long nextRefreshIntervalIndex;                  //@synthesize nextRefreshIntervalIndex=_nextRefreshIntervalIndex - In the implementation block
@property (nonatomic,retain) NSTimer * updateViewBoundsTimer;                              //@synthesize updateViewBoundsTimer=_updateViewBoundsTimer - In the implementation block
@property (assign,nonatomic) BOOL activeViewMonitorEnabled;                                //@synthesize activeViewMonitorEnabled=_activeViewMonitorEnabled - In the implementation block
-(BOOL)activeViewMonitorEnabled;
-(NSTimer *)updateViewBoundsTimer;
-(double)nextRefreshInterval;
-(void)setActiveViewMonitorEnabled:(BOOL)arg1 ;
-(void)updateViewBoundsTimerCallback:(id)arg1 ;
-(void)setUpdateViewBoundsTimer:(NSTimer *)arg1 ;
-(void)updateViewBounds;
-(NSArray *)refreshIntervals;
-(unsigned long long)nextRefreshIntervalIndex;
-(void)setNextRefreshIntervalIndex:(unsigned long long)arg1 ;
-(UIView *)monitoredView;
-(id)initWithView:(id)arg1 refreshIntervals:(id)arg2 ;
-(void)setMonitoredViewVisibleBounds:(CGRect)arg1 ;
-(CGRect)monitoredViewVisibleBounds;
-(BOOL)isMonitoredViewVisible;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)dealloc;
-(void)setDelegate:(id<GADActiveViewMonitorDelegate>)arg1 ;
-(id<GADActiveViewMonitorDelegate>)delegate;
-(void)sample;
@end
