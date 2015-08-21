/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNCommerceOrderDetailInformationViewModel, FBRichTextView, MNCommerceHorizontallyStackedColumnView;

@interface MNCommerceOrderDetailOrderSummaryView : UIView {

	MNCommerceOrderDetailInformationViewModel* _viewModel;
	FBRichTextView* _headerLabel;
	MNCommerceHorizontallyStackedColumnView* _subtotalView;
	MNCommerceHorizontallyStackedColumnView* _shippingCostView;
	MNCommerceHorizontallyStackedColumnView* _taxView;
	MNCommerceHorizontallyStackedColumnView* _totalCostView;

}
-(void)setViewModel:(id)arg1 ;
-(void)_initializeSubviews;
-(CGSize)_headerLabelSizeConstrainedToSize:(CGSize)arg1 ;
-(void)_setHeaderViewTitle:(id)arg1 ;
-(void)_setUpHeaderView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

