/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EBUBiddingSupport : NSObject {

	BOOL _inBestOfferFlow;
	NSString* _activeListingID;

}

@property (assign,getter=isInBestOfferFlow,nonatomic) BOOL inBestOfferFlow;              //@synthesize inBestOfferFlow=_inBestOfferFlow - In the implementation block
@property (nonatomic,copy) NSString * activeListingID;                                   //@synthesize activeListingID=_activeListingID - In the implementation block
+(id)sharedInstance;
-(void)setInBestOfferFlow:(BOOL)arg1 ;
-(void)setActiveListingID:(NSString *)arg1 ;
-(BOOL)isInBestOfferFlow;
-(NSString *)activeListingID;
@end

