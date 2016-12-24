/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUViewItemSectionController.h>
#import <eBay/EBUDynamicHeightViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class EBUDynamicHeightView, UIActionSheet, EBUNameValueGridView, NSString;

@interface EPHReturnsDetailSectionController : EBUViewItemSectionController <EBUDynamicHeightViewDelegate, UIActionSheetDelegate> {

	BOOL _policyIsExpanded;
	EBUDynamicHeightView* _titleView;
	UIActionSheet* _termsOfServiceActionSheet;
	EBUNameValueGridView* _returnPolicyGridView;

}

@property (nonatomic,retain) EBUDynamicHeightView * titleView;                                //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIActionSheet * termsOfServiceActionSheet;                       //@synthesize termsOfServiceActionSheet=_termsOfServiceActionSheet - In the implementation block
@property (assign,nonatomic,__weak) EBUNameValueGridView * returnPolicyGridView;              //@synthesize returnPolicyGridView=_returnPolicyGridView - In the implementation block
@property (assign,nonatomic) BOOL policyIsExpanded;                                           //@synthesize policyIsExpanded=_policyIsExpanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewHeightChanged:(id)arg1 ;
-(void)updateViewsForWidth:(double)arg1 ;
-(id)eBayPlusReturnPolicyView;
-(EBUNameValueGridView *)returnPolicyGridView;
-(void)setReturnPolicyGridView:(EBUNameValueGridView *)arg1 ;
-(BOOL)policyIsExpanded;
-(void)bopisTermsRowTapped:(id)arg1 ;
-(void)ebayNowTermsRowTapped:(id)arg1 ;
-(void)setPolicyIsExpanded:(BOOL)arg1 ;
-(UIActionSheet *)termsOfServiceActionSheet;
-(void)setTermsOfServiceActionSheet:(UIActionSheet *)arg1 ;
-(id)init;
-(EBUDynamicHeightView *)titleView;
-(void)setTitleView:(EBUDynamicHeightView *)arg1 ;
-(void)updateViews;
@end
