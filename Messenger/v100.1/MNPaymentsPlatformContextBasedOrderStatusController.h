/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutOrderStatusControlling.h>
#import <Messenger/FBPaymentsPurchaseInfoShippingOptionProviding.h>

@protocol FBPaymentsCheckoutOrderStatusControllingDelegate, FBPaymentsCheckoutOrderStatusCollectedDataDelegate;
@class FBUserSession, NSString, FBMemPeerToPeerPlatformContext, FBGraphQLMutationHandle, FBPaymentsUpdateListenerAnnouncer, FBMemPeerToPeerPlatformProductItem;

@interface MNPaymentsPlatformContextBasedOrderStatusController : NSObject <FBPaymentsCheckoutOrderStatusControlling, FBPaymentsPurchaseInfoShippingOptionProviding> {

	FBUserSession* _session;
	NSString* _itemId;
	NSString* _platformContextId;
	/*^block*/id _contentConfigurationProvidingBlock;
	long long _dataLoadingStatus;
	long long _lastNonLoadingDataLoadingStatus;
	FBMemPeerToPeerPlatformContext* _memPlatformContext;
	NSString* _updatingAddressGraphQLID;
	FBGraphQLMutationHandle* _ongoingAddressMutation;
	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	id<FBPaymentsCheckoutOrderStatusControllingDelegate> _orderStatusControllingDelegate;
	id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate> _orderStatusCollectedDataDelegate;

}

@property (nonatomic,copy,readonly) FBMemPeerToPeerPlatformProductItem * productItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusControllingDelegate> orderStatusControllingDelegate;                  //@synthesize orderStatusControllingDelegate=_orderStatusControllingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate> orderStatusCollectedDataDelegate;              //@synthesize orderStatusCollectedDataDelegate=_orderStatusCollectedDataDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(id)contentConfiguration;
-(void)setOrderStatusCollectedDataDelegate:(id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 itemId:(id)arg2 contentConfigurationProvidingBlock:(/*^block*/id)arg3 ;
-(id)shippingOptions;
-(id)orderData;
-(id)initWithSession:(id)arg1 contentConfigurationProvidingBlock:(/*^block*/id)arg2 ;
-(void)_cancelOngoingMutation;
-(void)_handlePlatformContextUpdateWithPlatformContext:(id)arg1 ;
-(void)_cleanupMutation;
-(void)_restoreDataLoadingStatus;
-(void)updateOrderStatus;
-(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)orderStatusControllingDelegate;
-(void)setOrderStatusControllingDelegate:(id<FBPaymentsCheckoutOrderStatusControllingDelegate>)arg1 ;
-(id<FBPaymentsCheckoutOrderStatusCollectedDataDelegate>)orderStatusCollectedDataDelegate;
-(long long)dataLoadingStatus;
-(BOOL)isShippingOptionApplicable;
-(id)userFacingReasonForNotApplicableShippingOptions;
-(id)initWithSession:(id)arg1 platformContextId:(id)arg2 contentConfigurationProvidingBlock:(/*^block*/id)arg3 ;
-(void)_handleFailureWithError:(id)arg1 ;
-(FBMemPeerToPeerPlatformProductItem *)productItem;
-(void)setUp;
@end
