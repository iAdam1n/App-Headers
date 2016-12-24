/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsPasscodeDotsViewDelegate.h>

@protocol FBPaymentsLoadingIndicatorControlling, FBPaymentsPasscodeFeedbackViewDelegate;
@class FBRichTextView, UIButton, FBPaymentsPasscodeDotsView, NSString;

@interface FBPaymentsPasscodeView : UIView <FBPaymentsPasscodeDotsViewDelegate> {

	FBRichTextView* _titleLabel;
	FBRichTextView* _errorLabel;
	UIButton* _descriptionButton;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	unsigned long long _numberOfPasscodesRequired;
	id<FBPaymentsPasscodeFeedbackViewDelegate> _delegate;
	FBPaymentsPasscodeDotsView* _dotsView;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) unsigned long long numberOfPasscodesRequired;                          //@synthesize numberOfPasscodesRequired=_numberOfPasscodesRequired - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * errorText; 
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                          //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsPasscodeFeedbackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBPaymentsPasscodeDotsView * dotsView;                                 //@synthesize dotsView=_dotsView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingIndicator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_tappedDescriptionLabel:(id)arg1 ;
-(void)resetPasscode;
-(void)passcodeDotsView:(id)arg1 didFinishWithInputText:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 numberOfPasscodesRequired:(unsigned long long)arg2 ;
-(void)setErrorText:(NSString *)arg1 ;
-(void)setShouldShowLoadingIndicator:(BOOL)arg1 ;
-(unsigned long long)numberOfPasscodesRequired;
-(FBPaymentsPasscodeDotsView *)dotsView;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPaymentsPasscodeFeedbackViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPaymentsPasscodeFeedbackViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)canResignFirstResponder;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(BOOL)shouldShowLoadingIndicator;
-(NSString *)errorText;
@end
