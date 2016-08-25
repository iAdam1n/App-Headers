/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSMutableArray, NSObject;

@interface FlurryAdsImpl : NSObject {

	BOOL stateInitialized;
	NSMutableArray* _pendingInvocations;
	NSObject*<OS_dispatch_queue> queue;

}

@property (nonatomic,retain) NSMutableArray * pendingInvocations;                          //@synthesize pendingInvocations=_pendingInvocations - In the implementation block
@property (assign,getter=isStateInitialized,nonatomic) BOOL stateInitialized; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
+(id)instance;
-(BOOL)adReadyForSpace:(id)arg1 ;
-(void)setStateInitialized:(BOOL)arg1 ;
-(BOOL)isStateInitialized;
-(void)reportFailedToFetch:(id)arg1 ;
-(void)forwarded_initialize:(id)arg1 ;
-(void)forwarded_fetchAdForSpace:(id)arg1 frame:(CGRect)arg2 size:(int)arg3 ;
-(void)forwarded_displayAdForSpace:(id)arg1 onView:(id)arg2 viewControllerForPresentation:(id)arg3 ;
-(void)forwarded_displayAdForSpace:(id)arg1 modallyForViewController:(id)arg2 ;
-(void)forwarded_fetchAndDisplayAdForSpace:(id)arg1 view:(id)arg2 viewController:(id)arg3 size:(int)arg4 ;
-(void)forwarded_removeAdFromSpace:(id)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)pendingInvocations;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
@end

