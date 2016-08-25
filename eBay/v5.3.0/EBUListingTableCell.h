/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightViewTableCell.h>
#import <ComponentUI/SiteSpeedRequiredImageItem.h>

@class EBUListingSummaryView, NSString;

@interface EBUListingTableCell : EBUDynamicHeightViewTableCell <SiteSpeedRequiredImageItem> {

	BOOL _showRelistedTreatment;
	EBUListingSummaryView* _summaryView;
	NSString* _listingID;
	CGSize _preferredImageSize;

}

@property (nonatomic,retain) EBUListingSummaryView * summaryView;              //@synthesize summaryView=_summaryView - In the implementation block
@property (assign,nonatomic) Class layoutClass; 
@property (nonatomic,readonly) NSString * listingID;                           //@synthesize listingID=_listingID - In the implementation block
@property (assign,nonatomic) BOOL showRelistedTreatment;                       //@synthesize showRelistedTreatment=_showRelistedTreatment - In the implementation block
@property (nonatomic,readonly) CGSize preferredImageSize;                      //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long context; 
-(void)configureWithListing:(id)arg1 layoutClass:(Class)arg2 context:(unsigned long long)arg3 ;
-(EBUListingSummaryView *)summaryView;
-(void)setSummaryView:(EBUListingSummaryView *)arg1 ;
-(void)setLayoutClass:(Class)arg1 ;
-(void)configureWithListing:(id)arg1 layoutClass:(Class)arg2 context:(unsigned long long)arg3 searchOptions:(id)arg4 ;
-(void)configureWithListingSummary:(id)arg1 layoutClass:(Class)arg2 context:(unsigned long long)arg3 searchOptions:(id)arg4 ;
-(void)addContainedViewConstraints;
-(void)configureWithListing:(id)arg1 layoutClass:(Class)arg2 ;
-(BOOL)showRelistedTreatment;
-(void)setShowRelistedTreatment:(BOOL)arg1 ;
-(NSString *)listingID;
-(void)onImageLoadNotifyTracker:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned long long)context;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(id)className;
-(BOOL)hasImage;
-(BOOL)isAccessibilityElement;
-(Class)layoutClass;
-(CGSize)preferredImageSize;
-(void)updateTimeLeft;
-(void)refreshView;
@end

