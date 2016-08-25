/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/FlurryHttpAsyncTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FlurryPulseEventController : NSObject <FlurryHttpAsyncTaskDelegate> {

	NSObject*<OS_dispatch_queue> queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pulseEventEnumToString:(int)arg1 ;
+(id)pulseEventArrayInstance;
+(int)pulseEventStringToEnum:(id)arg1 ;
+(id)sharedInstance;
+(void)cleanup;
-(void)requestDidFail:(id)arg1 withResponse:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 withResponse:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withResponse:(id)arg2 ;
-(void)processEvent:(id)arg1 withParams:(id)arg2 forSession:(id)arg3 ;
-(void)fireConfigUrlsForEvent:(id)arg1 ;
-(void)makePulseRequest;
-(void)updatePulseForAdTracking;
-(void)appWillBackground:(id)arg1 ;
-(void)appWillResume:(id)arg1 ;
-(void)networkStatusChanged:(id)arg1 ;
-(void)asyncInvokeURLWithParams:(id)arg1 ;
-(void)manageUrlStorage:(id)arg1 ;
-(void)firePendingUrlsOnNetworkAvailability;
-(void)firePendingUrls;
-(void)setTimerToFireUrlWithInvokeInfo:(id)arg1 ;
-(void)fireUrlOnTimer:(id)arg1 ;
-(id)substituteParamsInDictionary:(id)arg1 withValuesDictionary:(id)arg2 forPattern:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerForNotifications:(id)arg1 ;
@end

