/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol T1StatusViewEventHandler;
@class TFNTwitterAccount, TFNDataViewController, T1StatusDwellEventHandler, T1StatusDwellParameters, T1StatusDwellCache, TFNTimer;

@interface T1StatusDwellManager : NSObject {

	BOOL _active;
	TFNTwitterAccount* _account;
	TFNDataViewController* _controller;
	id<T1StatusViewEventHandler> _eventHandler;
	T1StatusDwellEventHandler* _dwellEventHandler;
	T1StatusDwellParameters* _parameters;
	T1StatusDwellCache* _cache;
	TFNTimer* _cellVisibilityHeartbeatTimer;

}

@property (nonatomic,readonly) TFNTwitterAccount * account;                                //@synthesize account=_account - In the implementation block
@property (nonatomic,__weak,readonly) TFNDataViewController * controller;                  //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) id<T1StatusViewEventHandler> eventHandler;                  //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) T1StatusDwellEventHandler * dwellEventHandler;              //@synthesize dwellEventHandler=_dwellEventHandler - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                                //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) T1StatusDwellParameters * parameters;                         //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) T1StatusDwellCache * cache;                                   //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) TFNTimer * cellVisibilityHeartbeatTimer;                      //@synthesize cellVisibilityHeartbeatTimer=_cellVisibilityHeartbeatTimer - In the implementation block
+(double)heartbeatDuration;
+(id)sharedManager;
-(T1StatusDwellEventHandler *)dwellEventHandler;
-(void)configureWithAccount:(id)arg1 dataViewController:(id)arg2 eventHandler:(id)arg3 ;
-(void)willDisplayStatusCell:(id)arg1 ;
-(void)didDisplayStatusCell:(id)arg1 withVisiblePercentage:(double)arg2 ;
-(void)didEndDisplayingStatusCell:(id)arg1 ;
-(void)statusCellDidUpdate:(id)arg1 ;
-(void)applicationDidEnterForeground:(id)arg1 ;
-(BOOL)_isStatusCellCandidateForDwell:(id)arg1 ;
-(void)_didDisplayStatusCell:(id)arg1 withVisiblePercentage:(double)arg2 ;
-(void)_resumeCellVisibilityHeartbeatTimerIfNeeded;
-(void)_didEndDisplayingStatusCell:(id)arg1 ;
-(void)_suspendCellVisibilityHeartbeatTimerIfNeeded;
-(void)_suspendCellVisibilityHeartbeatTimer;
-(void)_cellVisibilityHeartbeat;
-(TFNTimer *)cellVisibilityHeartbeatTimer;
-(void)setCellVisibilityHeartbeatTimer:(TFNTimer *)arg1 ;
-(id<T1StatusViewEventHandler>)eventHandler;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)cleanUp;
-(TFNDataViewController *)controller;
-(T1StatusDwellCache *)cache;
-(void)setCache:(T1StatusDwellCache *)arg1 ;
-(TFNTwitterAccount *)account;
-(T1StatusDwellParameters *)parameters;
-(void)setParameters:(T1StatusDwellParameters *)arg1 ;
@end

