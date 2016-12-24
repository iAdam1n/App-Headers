/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUListingSummaryView.h>

@class EBNOrderPlacedActionHandler, EBNListing;

@interface EBUOrderPlacedMerchListingSummaryView : EBUListingSummaryView {

	EBNOrderPlacedActionHandler* _actionHandler;
	EBNListing* _listing;

}

@property (nonatomic,retain) EBNOrderPlacedActionHandler * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) EBNListing * listing;                                     //@synthesize listing=_listing - In the implementation block
-(EBNListing *)listing;
-(void)setListing:(EBNListing *)arg1 ;
-(void)performAction;
-(void)setActionHandler:(EBNOrderPlacedActionHandler *)arg1 ;
-(EBNOrderPlacedActionHandler *)actionHandler;
@end
