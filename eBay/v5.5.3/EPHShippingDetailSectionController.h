/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUViewItemSectionController.h>
#import <eBay/EBUDynamicHeightViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class EBUViewItemSectionTitleLabel, MKDistanceFormatter, EBUViewItemActionHandler, EBUNameValueGridView, NSString;

@interface EPHShippingDetailSectionController : EBUViewItemSectionController <EBUDynamicHeightViewDelegate, UITextViewDelegate> {

	BOOL _excludesIsExpanded;
	BOOL _shipsToIsExpanded;
	EBUViewItemSectionTitleLabel* _titleView;
	MKDistanceFormatter* _distanceFormatter;
	EBUViewItemActionHandler* _viewItemActionHandler;
	EBUNameValueGridView* _shippingExclusionsGridView;
	EBUNameValueGridView* _shipsToGridView;
	NSString* _basicTitleString;
	NSString* _shippingToTitleString;
	NSString* _gspShippingOptionsString;
	NSString* _askSellerForShippingQuoteString;
	NSString* _importChargesString;
	NSString* _gspEstimateImportChargesString;
	NSString* _gspNoAdditionalChargesString;
	NSString* _termsAndConditionsString;
	NSString* _deliveryString;
	NSString* _inStorePickupString;

}

@property (nonatomic,retain) EBUViewItemSectionTitleLabel * titleView;                              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) MKDistanceFormatter * distanceFormatter;                               //@synthesize distanceFormatter=_distanceFormatter - In the implementation block
@property (nonatomic,retain) EBUViewItemActionHandler * viewItemActionHandler;                      //@synthesize viewItemActionHandler=_viewItemActionHandler - In the implementation block
@property (assign,nonatomic,__weak) EBUNameValueGridView * shippingExclusionsGridView;              //@synthesize shippingExclusionsGridView=_shippingExclusionsGridView - In the implementation block
@property (assign,nonatomic) BOOL excludesIsExpanded;                                               //@synthesize excludesIsExpanded=_excludesIsExpanded - In the implementation block
@property (assign,nonatomic,__weak) EBUNameValueGridView * shipsToGridView;                         //@synthesize shipsToGridView=_shipsToGridView - In the implementation block
@property (assign,nonatomic) BOOL shipsToIsExpanded;                                                //@synthesize shipsToIsExpanded=_shipsToIsExpanded - In the implementation block
@property (nonatomic,retain) NSString * basicTitleString;                                           //@synthesize basicTitleString=_basicTitleString - In the implementation block
@property (nonatomic,retain) NSString * shippingToTitleString;                                      //@synthesize shippingToTitleString=_shippingToTitleString - In the implementation block
@property (nonatomic,retain) NSString * gspShippingOptionsString;                                   //@synthesize gspShippingOptionsString=_gspShippingOptionsString - In the implementation block
@property (nonatomic,retain) NSString * askSellerForShippingQuoteString;                            //@synthesize askSellerForShippingQuoteString=_askSellerForShippingQuoteString - In the implementation block
@property (nonatomic,retain) NSString * importChargesString;                                        //@synthesize importChargesString=_importChargesString - In the implementation block
@property (nonatomic,retain) NSString * gspEstimateImportChargesString;                             //@synthesize gspEstimateImportChargesString=_gspEstimateImportChargesString - In the implementation block
@property (nonatomic,retain) NSString * gspNoAdditionalChargesString;                               //@synthesize gspNoAdditionalChargesString=_gspNoAdditionalChargesString - In the implementation block
@property (nonatomic,retain) NSString * termsAndConditionsString;                                   //@synthesize termsAndConditionsString=_termsAndConditionsString - In the implementation block
@property (nonatomic,retain) NSString * deliveryString;                                             //@synthesize deliveryString=_deliveryString - In the implementation block
@property (nonatomic,retain) NSString * inStorePickupString;                                        //@synthesize inStorePickupString=_inStorePickupString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewHeightChanged:(id)arg1 ;
-(void)updateViewsForWidth:(double)arg1 ;
-(EBUViewItemActionHandler *)viewItemActionHandler;
-(void)setShipsToGridView:(EBUNameValueGridView *)arg1 ;
-(void)setShippingExclusionsGridView:(EBUNameValueGridView *)arg1 ;
-(EBUNameValueGridView *)shippingExclusionsGridView;
-(EBUNameValueGridView *)shipsToGridView;
-(NSString *)basicTitleString;
-(NSString *)shippingToTitleString;
-(id)ebayNowView;
-(id)inStorePickupView;
-(NSString *)gspShippingOptionsString;
-(id)valueAttributes;
-(NSString *)askSellerForShippingQuoteString;
-(id)shippingCostOptionsViewWithShippingInfo:(id)arg1 ;
-(id)gspChargesView;
-(id)gspTermsAndConditionsLinkView;
-(id)shipsToView;
-(id)shippingExclusionsView;
-(id)subValueAttributes;
-(NSString *)deliveryString;
-(NSString *)importChargesString;
-(id)nameAttributes;
-(NSString *)gspEstimateImportChargesString;
-(NSString *)gspNoAdditionalChargesString;
-(NSString *)termsAndConditionsString;
-(void)gspTermsTapped:(id)arg1 ;
-(NSString *)inStorePickupString;
-(id)availabilityColorStyleForLocation:(id)arg1 ;
-(MKDistanceFormatter *)distanceFormatter;
-(BOOL)excludesIsExpanded;
-(BOOL)shipsToIsExpanded;
-(void)setExcludesIsExpanded:(BOOL)arg1 ;
-(void)setShipsToIsExpanded:(BOOL)arg1 ;
-(void)setDistanceFormatter:(MKDistanceFormatter *)arg1 ;
-(void)setViewItemActionHandler:(EBUViewItemActionHandler *)arg1 ;
-(void)setBasicTitleString:(NSString *)arg1 ;
-(void)setShippingToTitleString:(NSString *)arg1 ;
-(void)setGspShippingOptionsString:(NSString *)arg1 ;
-(void)setAskSellerForShippingQuoteString:(NSString *)arg1 ;
-(void)setImportChargesString:(NSString *)arg1 ;
-(void)setGspEstimateImportChargesString:(NSString *)arg1 ;
-(void)setGspNoAdditionalChargesString:(NSString *)arg1 ;
-(void)setTermsAndConditionsString:(NSString *)arg1 ;
-(void)setDeliveryString:(NSString *)arg1 ;
-(void)setInStorePickupString:(NSString *)arg1 ;
-(id)init;
-(id)title;
-(EBUViewItemSectionTitleLabel *)titleView;
-(void)setTitleView:(EBUViewItemSectionTitleLabel *)arg1 ;
-(id)headerView;
-(void)updateViews;
@end
