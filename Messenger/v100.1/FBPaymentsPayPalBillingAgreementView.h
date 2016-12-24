/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@protocol FBPaymentsPayPalBillingAgreementViewDelegate, UILayoutSupport;
@class UIScrollView, UIImageView, FBRichTextView, FBPaymentsLoadingStatusButton, UIView, NSString, NSURL;

@interface FBPaymentsPayPalBillingAgreementView : UIView <FBPaymentsEdgeInsetsConfigurable> {

	UIScrollView* _scrollView;
	UIImageView* _imageView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _summaryTextView;
	FBRichTextView* _contentTextView;
	FBRichTextView* _termsAndPoliciesTextView;
	FBPaymentsLoadingStatusButton* _actionButton;
	UIView* _actionButtonView;
	id<FBPaymentsPayPalBillingAgreementViewDelegate> _delegate;
	id<UILayoutSupport> _topLayoutGuide;
	NSString* _actionButtonTitle;
	long long _actionButtonState;
	NSString* _contentText;
	NSURL* _termsAndPoliciesURL;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic,__weak) id<FBPaymentsPayPalBillingAgreementViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<UILayoutSupport> topLayoutGuide;                                            //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
@property (nonatomic,copy) NSString * actionButtonTitle;                                                    //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (assign,nonatomic) long long actionButtonState;                                                   //@synthesize actionButtonState=_actionButtonState - In the implementation block
@property (nonatomic,copy) NSString * contentText;                                                          //@synthesize contentText=_contentText - In the implementation block
@property (nonatomic,copy) NSURL * termsAndPoliciesURL;                                                     //@synthesize termsAndPoliciesURL=_termsAndPoliciesURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_didTapActionButton;
-(void)_didTapLink:(id)arg1 withEvent:(id)arg2 ;
-(long long)actionButtonState;
-(NSURL *)termsAndPoliciesURL;
-(void)setTermsAndPoliciesURL:(NSURL *)arg1 ;
-(void)setContentText:(NSString *)arg1 ;
-(void)setActionButtonState:(long long)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPaymentsPayPalBillingAgreementViewDelegate>)arg1 ;
-(id<FBPaymentsPayPalBillingAgreementViewDelegate>)delegate;
-(UIEdgeInsets)edgeInsets;
-(id<UILayoutSupport>)topLayoutGuide;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(NSString *)contentText;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(void)setTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
@end
