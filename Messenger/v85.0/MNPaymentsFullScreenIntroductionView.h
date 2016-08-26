/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsMessageWithLinkViewDelegate.h>

@protocol FBPaymentsMessageWithLinkView, MNPaymentsFullScreenIntroductionViewDelegate;
@class UIButton, MNStackedContainerView, MNHeaderView, NSArray, MNButton, UIView, PABlurView, NSString;

@interface MNPaymentsFullScreenIntroductionView : UIView <FBPaymentsMessageWithLinkViewDelegate> {

	UIButton* _cancelButton;
	MNStackedContainerView* _stackedContainerView;
	MNHeaderView* _headerView;
	NSArray* _securityItemViews;
	MNButton* _nextButton;
	UIView*<FBPaymentsMessageWithLinkView> _lockMessageView;
	PABlurView* _backgroundView;
	id<MNPaymentsFullScreenIntroductionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsFullScreenIntroductionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewModel:(id)arg1 ;
-(void)_onCancel;
-(void)paymentsMessageWithLinkView:(id)arg1 didTapURL:(id)arg2 ;
-(void)_didTapNext;
-(id)_getSubviews;
-(void)showItemsAnimated:(BOOL)arg1 ;
-(void)stopAllAnimations;
-(void)setDelegate:(id<MNPaymentsFullScreenIntroductionViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPaymentsFullScreenIntroductionViewDelegate>)delegate;
@end
