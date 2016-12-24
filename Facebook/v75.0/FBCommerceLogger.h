/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCommerceEventListener.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSSet, FBCommerceEventListenerAnnouncer;

@interface FBCommerceLogger : NSObject <FBCommerceEventListener, NSCopying> {

	unsigned long long _loggerCreatedTime;
	unsigned long long _loggingStartTime;
	unsigned long long _loggingStopTime;
	NSString* _sessionID;
	NSString* _productID;
	NSString* _pageID;
	NSString* _refID;
	NSString* _refType;
	NSString* _attachmentID;
	NSString* _collectionID;
	NSString* _event;
	NSString* _module;
	NSMutableArray* _loggingEvents;
	NSSet* _loggingEventsImpressions;
	FBCommerceEventListenerAnnouncer* _announcer;
	BOOL _sessionEnded;
	NSString* _exitReason;

}

@property (nonatomic,copy,readonly) NSString * exitReason;              //@synthesize exitReason=_exitReason - In the implementation block
@property (nonatomic,readonly) BOOL sessionEnded;                       //@synthesize sessionEnded=_sessionEnded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getServerSideCommerceRefType:(id)arg1 ;
-(void)loggingSessionStart;
-(id)initWithProductID:(id)arg1 pageID:(id)arg2 attachmentID:(id)arg3 event:(id)arg4 refID:(id)arg5 refType:(id)arg6 collectionID:(id)arg7 module:(id)arg8 announcer:(id)arg9 ;
-(void)loggingSessionEnd;
-(void)didOpenStoreFrontFromPageHeaderWithContainerType:(id)arg1 ;
-(void)openPhoto:(long long)arg1 ;
-(void)openRecommendedProduct:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)recommendedProductDisplayed:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)openStoreFrontProduct:(id)arg1 index:(long long)arg2 ;
-(void)storeFrontProductDisplayed:(id)arg1 index:(long long)arg2 ;
-(void)didOpenCollectionGridView:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)didOpenStoreStoreFrontCollectionProduct:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 ;
-(void)didCheckoutProductWithMessageToBuy:(id)arg1 pageID:(id)arg2 ;
-(void)storeFrontCollectionProductDisplayed:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 ;
-(void)didOpenStoreStoreFrontBannerProduct:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 ;
-(void)storeFrontBannerProductDisplayed:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 ;
-(void)swipePhotoForProduct:(id)arg1 index:(long long)arg2 event:(id)arg3 ;
-(void)didDisplaySeeMoreForProductLifestyleUnit;
-(void)didTapOnSeeMoreForProductLifestyleUnit;
-(void)didTapLifestyleUnitThumbnailProduct:(id)arg1 index:(long long)arg2 ;
-(void)didOpenStoreFrontFromProductDetailPage;
-(void)didOpenProductFromMoreFromShopOnProductDetails:(id)arg1 index:(long long)arg2 ;
-(void)didDisplayPageStoreEntryPoint:(id)arg1 containerType:(id)arg2 ;
-(void)didTapSubscribeToMerchantButton:(id)arg1 ;
-(void)logExitReason:(id)arg1 ;
-(void)_logPhotoOpenAtPosition:(long long)arg1 ;
-(void)_logPhotoSwipeForProduct:(id)arg1 index:(long long)arg2 event:(id)arg3 ;
-(void)_logOpenRecommendedProduct:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)_logProductDisplayed:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)_logOpenStoreFrontProduct:(id)arg1 index:(long long)arg2 ;
-(void)_logOpenProduct:(id)arg1 index:(long long)arg2 containerType:(id)arg3 collectionID:(id)arg4 ;
-(void)_logDidOpenStoreFrontFromPageHeaderWithContainerType:(id)arg1 ;
-(void)_logDidOpenProductFromMoreFromShopOnProductDetails:(id)arg1 index:(long long)arg2 ;
-(void)_logDidDisplayPageStoreEntryPoint:(id)arg1 containerType:(id)arg2 ;
-(void)_logStoreFrontCollectionProductDisplayed:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 containerType:(id)arg4 ;
-(void)_logStoreFrontCollectionProductOpened:(id)arg1 index:(long long)arg2 collectionID:(id)arg3 containerType:(id)arg4 ;
-(void)_logDidOpenStoreFrontFromProductDetailPage;
-(void)_logStoreFrontCollectionOpened:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(void)_addLoggingEventWithName:(id)arg1 productID:(id)arg2 selectedPosition:(id)arg3 ;
-(void)_logMesssageToBuy:(id)arg1 pageID:(id)arg2 ;
-(void)_logDidTapSubscribeToMerchantButton:(id)arg1 ;
-(void)_logQuantityChanged:(long long)arg1 ;
-(void)_logOptionChanged:(id)arg1 ;
-(void)_logDidDisplayProductOnPageStoreEntryPoint:(id)arg1 index:(long long)arg2 containerType:(id)arg3 ;
-(BOOL)sessionEnded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)exitReason;
@end
