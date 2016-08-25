/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/StoreManagerDelegate.h>

@protocol BundlePackDelegate;
@class NSString;

@interface BundlePackManager : NSObject <StoreManagerDelegate> {

	id<BundlePackDelegate> _delegate;

}

@property (nonatomic,retain) id<BundlePackDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(id)getCurrentBundlePack;
-(void)processTransactionResponse:(id)arg1 ;
-(void)purchaseBundlePack;
-(void)unregisterFromNotifications;
-(void)handleBundleStartTriggerRaised:(id)arg1 ;
-(void)handleBundleEnded:(id)arg1 ;
-(BOOL)isUserReadyForNextBundle;
-(int)triggerEnumForNotification:(id)arg1 ;
-(id)getNextBundlePackWithTrigger:(int)arg1 ;
-(int)getUserCurrentBundleId;
-(BOOL)doesUserMeetGeneralRequirements:(id)arg1 ;
-(BOOL)hasUserPurchasedBuyOnceBundlePack:(id)arg1 ;
-(void)userSeenBundlePack:(id)arg1 ;
-(BOOL)doesNormalPriorityBundlePackExist;
-(BOOL)isBundlePackBlockedByChainRequirement:(id)arg1 ;
-(BOOL)isBundlePackBlockedByRepeatableRequirement:(id)arg1 ;
-(BOOL)isUserLevelValidForBundlePack:(id)arg1 ;
-(BOOL)isCurrentTimeValidForBundlePack:(id)arg1 ;
-(BOOL)isCurrentTimeBeyondBundlePackLastPurchaseThreshold:(id)arg1 ;
-(BOOL)readyToPurchase:(int)arg1 ;
-(void)setDelegate:(id<BundlePackDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BundlePackDelegate>)delegate;
-(void)registerForNotifications;
@end

