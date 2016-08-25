/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUViewItemSectionController.h>
#import <ComponentUI/EUIImageViewLoaderDelegate.h>
#import <eBay/EBUModelObjectToCollectionCellSectionDelegate.h>

@class NSArray, EBUViewItemSectionStyler, EBUListingSummaryView, NSString;

@interface EPDAspectCardSectionController : EBUViewItemSectionController <EUIImageViewLoaderDelegate, EBUModelObjectToCollectionCellSectionDelegate> {

	NSArray* _listings;
	EBUViewItemSectionStyler* _viewItemSection;
	EBUListingSummaryView* _moreLikeThisMeasurementView;

}

@property (nonatomic,retain) EBUViewItemSectionStyler * viewItemSection;                       //@synthesize viewItemSection=_viewItemSection - In the implementation block
@property (nonatomic,retain) EBUListingSummaryView * moreLikeThisMeasurementView;              //@synthesize moreLikeThisMeasurementView=_moreLikeThisMeasurementView - In the implementation block
@property (nonatomic,copy) NSArray * listings;                                                 //@synthesize listings=_listings - In the implementation block
@property (nonatomic,readonly) unsigned long long merchOrigin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EBUViewItemSectionStyler *)viewItemSection;
-(void)setViewItemSection:(EBUViewItemSectionStyler *)arg1 ;
-(unsigned long long)merchOrigin;
-(id)cellClassesForIdentifiers;
-(id)cellIdentifierForModelObject:(id)arg1 ;
-(CGSize)cellSizeForModelObject:(id)arg1 maximumSize:(CGSize)arg2 ;
-(void)populateCell:(id)arg1 withModelObject:(id)arg2 ;
-(BOOL)wantsTapsForModelObject:(id)arg1 ;
-(EBUListingSummaryView *)moreLikeThisMeasurementView;
-(void)setMoreLikeThisMeasurementView:(EBUListingSummaryView *)arg1 ;
-(void)imageViewLoader:(id)arg1 willFetchImageforEUIView:(id)arg2 ;
-(NSArray *)listings;
-(void)setListings:(NSArray *)arg1 ;
-(id)init;
-(void)didSelectItemAtIndex:(long long)arg1 ;
-(void)updateViews;
@end

