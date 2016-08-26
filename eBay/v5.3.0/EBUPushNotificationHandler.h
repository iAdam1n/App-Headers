/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nautilus/EBNFollowedDataManagerObserver.h>

@class LaunchParams, NSString;

@interface EBUPushNotificationHandler : NSObject <EBNFollowedDataManagerObserver> {

	LaunchParams* _deferredSavedSearchNotification;

}

@property (nonatomic,retain) LaunchParams * deferredSavedSearchNotification;              //@synthesize deferredSavedSearchNotification=_deferredSavedSearchNotification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHandler;
-(void)processNotificationDict:(id)arg1 showAlert:(BOOL)arg2 ;
-(void)clearDeferredSavedSearchNotification;
-(void)showEBayItem:(id)arg1 context:(id)arg2 ;
-(void)showEBayItem:(id)arg1 ;
-(void)setupForNotification;
-(void)handleShowMyEbayItem:(id)arg1 context:(id)arg2 ;
-(void)handleShowHome;
-(void)showItemForBopis:(id)arg1 ;
-(void)getItemForParameters:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showItemForOrder:(id)arg1 ;
-(void)showItemForPayment:(id)arg1 order:(id)arg2 ;
-(void)handleRemoveSavedSearch:(id)arg1 ;
-(void)deferSavedSearchNotification:(id)arg1 ;
-(void)handleSavedSearch:(id)arg1 ;
-(void)handleDeferredSavedSearchNotification;
-(id)trackingIDParameters:(id)arg1 ;
-(void)showNotificationFromLaunchParams:(id)arg1 ;
-(void)processNotificationDict:(id)arg1 showAlert:(BOOL)arg2 actionID:(id)arg3 ;
-(void)invokeDeepLinkHandlerFromLaunchParams:(id)arg1 ;
-(BOOL)ignoreNotificationForOutbidItem:(id)arg1 ;
-(BOOL)ignoreNotificationForWatchedItem:(id)arg1 ;
-(BOOL)ignoreNotificationForShoppingCartItem:(id)arg1 ;
-(BOOL)ignoreNotificationForWonItem:(id)arg1 ;
-(BOOL)ignoreNotificationForShippedItem:(id)arg1 ;
-(BOOL)ignoreNotificationForSoldItem:(id)arg1 ;
-(BOOL)ignoreNotificationForBestOfferItem:(id)arg1 ;
-(BOOL)ignoreNotificationForBidItem:(id)arg1 ;
-(BOOL)canShowDetailedNotificationAlert:(id)arg1 ;
-(void)dontViewNotificationFromAlert:(id)arg1 ;
-(void)viewNotificationFromAlert:(id)arg1 ;
-(void)handleBucksExpiring:(id)arg1 ;
-(void)handleCouponAvailable:(id)arg1 ;
-(void)handleBonusOfferAvailable;
-(void)handleCartItemEndingSoon:(id)arg1 ;
-(void)handleCartItemDiscount:(id)arg1 ;
-(void)handleWatchedItemDiscount:(id)arg1 ;
-(void)handleShowItemForBopis:(id)arg1 ;
-(void)handleShowItemForOrder:(id)arg1 ;
-(void)handleShowItemForPayment:(id)arg1 ;
-(void)handleShowMessage:(id)arg1 ;
-(void)handleShowItem:(id)arg1 ;
-(void)handleShowSearchURL:(id)arg1 ;
-(void)handleSnooze:(id)arg1 ;
-(void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)testNotification:(id)arg1 action:(id)arg2 snoozeTime:(double)arg3 ;
-(LaunchParams *)deferredSavedSearchNotification;
-(void)setDeferredSavedSearchNotification:(LaunchParams *)arg1 ;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)dataManager:(id)arg1 didCompleteFetch:(id)arg2 ;
-(void)dealloc;
@end
