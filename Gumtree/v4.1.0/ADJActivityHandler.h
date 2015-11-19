/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ADJActivityHandler.h>

@protocol ADJActivityHandler <NSObject>
@required
-(void)trackSubsessionEnd;
-(void)trackSubsessionStart;
-(void)launchAttributionDelegate;
-(void)setAskingAttribution:(BOOL)arg1;
-(void)trackEvent:(id)arg1;
-(void)finishedTracking:(id)arg1;
-(void)appWillOpenUrl:(id)arg1;
-(void)setDeviceToken:(id)arg1;
-(BOOL)updateAttribution:(id)arg1;
-(void)setIadDate:(id)arg1 withPurchaseDate:(id)arg2;
-(void)setOfflineMode:(BOOL)arg1;
-(void)setEnabled:(BOOL)arg1;
-(BOOL)isEnabled;
-(id)attribution;
-(void)setAttribution:(id)arg1;
-(id)initWithConfig:(id)arg1;

@end


@protocol ADJPackageHandler, ADJAttributionHandler, ADJLogger, AdjustDelegate;
@class ADJActivityState, ADJTimerCycle, NSObject, ADJAttribution, ADJConfig, ADJDeviceInfo, NSString;

@interface ADJActivityHandler : NSObject <ADJActivityHandler> {

	BOOL _enabled;
	BOOL _offline;
	dispatch_queue_sRef _internalQueue;
	id<ADJPackageHandler> _packageHandler;
	id<ADJAttributionHandler> _attributionHandler;
	ADJActivityState* _activityState;
	ADJTimerCycle* _timer;
	id<ADJLogger> _logger;
	NSObject*<AdjustDelegate> _delegate;
	ADJAttribution* _attribution;
	ADJConfig* _adjustConfig;
	ADJDeviceInfo* _deviceInfo;

}

@property (assign,nonatomic) dispatch_queue_sRef internalQueue;                         //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) id<ADJPackageHandler> packageHandler;                      //@synthesize packageHandler=_packageHandler - In the implementation block
@property (nonatomic,retain) id<ADJAttributionHandler> attributionHandler;              //@synthesize attributionHandler=_attributionHandler - In the implementation block
@property (nonatomic,retain) ADJActivityState * activityState;                          //@synthesize activityState=_activityState - In the implementation block
@property (nonatomic,retain) ADJTimerCycle * timer;                                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) id<ADJLogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSObject*<AdjustDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) ADJAttribution * attribution;                                //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,copy) ADJConfig * adjustConfig;                                    //@synthesize adjustConfig=_adjustConfig - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL offline;                                              //@synthesize offline=_offline - In the implementation block
@property (nonatomic,copy) ADJDeviceInfo * deviceInfo;                                  //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handlerWithConfig:(id)arg1 ;
-(void)setAdjustConfig:(ADJConfig *)arg1 ;
-(void)addNotificationObserver;
-(void)endInternal;
-(void)eventInternal:(id)arg1 ;
-(void)launchDeepLink:(id)arg1 ;
-(id<ADJAttributionHandler>)attributionHandler;
-(BOOL)hasChangedState:(BOOL)arg1 nextState:(BOOL)arg2 trueMessage:(id)arg3 falseMessage:(id)arg4 ;
-(ADJActivityState *)activityState;
-(void)writeActivityState;
-(void)updateState:(BOOL)arg1 pausingMessage:(id)arg2 remainsPausedMessage:(id)arg3 unPausingMessage:(id)arg4 ;
-(void)trackSubsessionEnd;
-(void)trackSubsessionStart;
-(void)appWillOpenUrlInternal:(id)arg1 ;
-(void)setDeviceTokenInternal:(id)arg1 ;
-(ADJConfig *)adjustConfig;
-(id<ADJPackageHandler>)packageHandler;
-(void)writeAttribution;
-(void)launchAttributionDelegate;
-(void)setAskingAttribution:(BOOL)arg1 ;
-(void)updateStatusInternal;
-(void)readAttribution;
-(void)readActivityState;
-(void)setPackageHandler:(id<ADJPackageHandler>)arg1 ;
-(void)setAttributionHandler:(id<ADJAttributionHandler>)arg1 ;
-(void)timerFiredInternal;
-(void)processSession;
-(void)checkAttributionState;
-(void)setActivityState:(ADJActivityState *)arg1 ;
-(void)transferSessionPackage:(double)arg1 ;
-(BOOL)updateActivityState:(double)arg1 ;
-(BOOL)checkTransactionId:(id)arg1 ;
-(BOOL)readDeeplinkQueryString:(id)arg1 adjustDeepLinks:(id)arg2 attribution:(id)arg3 ;
-(BOOL)trySetAttributionDeeplink:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 ;
-(void)updateAttributionHandlerStatus;
-(void)updatePackageHandlerStatus;
-(void)removeNotificationObserver;
-(void)trackEvent:(id)arg1 ;
-(void)finishedTracking:(id)arg1 ;
-(void)appWillOpenUrl:(id)arg1 ;
-(void)setDeviceToken:(id)arg1 ;
-(BOOL)updateAttribution:(id)arg1 ;
-(void)setIadDate:(id)arg1 withPurchaseDate:(id)arg2 ;
-(void)setOfflineMode:(BOOL)arg1 ;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
-(BOOL)checkEvent:(id)arg1 ;
-(void)stopTimer;
-(void)initInternal;
-(BOOL)enabled;
-(void)setDelegate:(NSObject*<AdjustDelegate>)arg1 ;
-(NSObject*<AdjustDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)startTimer;
-(void)setTimer:(ADJTimerCycle *)arg1 ;
-(ADJTimerCycle *)timer;
-(BOOL)paused;
-(void)setDeviceInfo:(ADJDeviceInfo *)arg1 ;
-(ADJDeviceInfo *)deviceInfo;
-(ADJAttribution *)attribution;
-(void)setAttribution:(ADJAttribution *)arg1 ;
-(void)updateStatus;
-(dispatch_queue_sRef)internalQueue;
-(void)startInternal;
-(BOOL)offline;
-(void)setOffline:(BOOL)arg1 ;
-(void)setInternalQueue:(dispatch_queue_sRef)arg1 ;
-(id)initWithConfig:(id)arg1 ;
@end

