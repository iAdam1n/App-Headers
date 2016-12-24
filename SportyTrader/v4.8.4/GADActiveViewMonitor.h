/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, GADActiveViewMonitorDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@class NSObject, GADScheduler, UIView;

@interface GADActiveViewMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	GADScheduler* _updateViewBoundsScheduler;
	id<GADActiveViewMonitorDelegate> _delegate;
	CGRect _monitoredViewVisibleBounds;
	BOOL _monitoredViewVisible;
	UIView* _monitoredView;

}

@property (__weak) id<GADActiveViewMonitorDelegate> delegate; 
@property (assign) CGRect monitoredViewVisibleBounds; 
@property (readonly) BOOL monitoredViewVisible; 
@property (nonatomic,__weak,readonly) UIView * monitoredView;              //@synthesize monitoredView=_monitoredView - In the implementation block
-(void)updateViewBounds;
-(void)setMonitoredViewVisibleBounds:(CGRect)arg1 ;
-(CGRect)monitoredViewVisibleBounds;
-(BOOL)monitoredViewVisible;
-(UIView *)monitoredView;
-(id)init;
-(void)setDelegate:(id<GADActiveViewMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<GADActiveViewMonitorDelegate>)delegate;
-(id)initWithView:(id)arg1 ;
-(void)stopMonitoring;
-(void)sample;
-(void)startMonitoring;
@end
