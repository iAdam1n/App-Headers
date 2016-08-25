/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUUnansweredQuestionsSectionController.h>
#import <eBay/EPDFeaturedSectionController.h>

@class EBUViewItemSectionStyler, EPDFeaturedSectionView, NSString;

@interface EPDUnansweredQuestionsSectionController : EBUUnansweredQuestionsSectionController <EPDFeaturedSectionController> {

	EBUViewItemSectionStyler* _viewItemSection;
	EPDFeaturedSectionView* _sectionView;

}

@property (nonatomic,retain) EBUViewItemSectionStyler * viewItemSection;              //@synthesize viewItemSection=_viewItemSection - In the implementation block
@property (nonatomic,retain) EPDFeaturedSectionView * sectionView;                    //@synthesize sectionView=_sectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long layout; 
-(EBUViewItemSectionStyler *)viewItemSection;
-(void)setViewItemSection:(EBUViewItemSectionStyler *)arg1 ;
-(EPDFeaturedSectionView *)sectionView;
-(void)setSectionView:(EPDFeaturedSectionView *)arg1 ;
-(id)init;
-(unsigned long long)layout;
-(void)setLayout:(unsigned long long)arg1 ;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)updateViews;
@end

