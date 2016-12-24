/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol MNBusinessSignupViewDelegate;
@class UITableView, MNBusinessSignupHeaderView, UIButton, FBRichTextView, MNBusinessNavigationHandler, MNBusinessSignupViewModel, MNButton, NSString;

@interface MNBusinessSignupView : UIView <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _informationTable;
	MNBusinessSignupHeaderView* _headerView;
	UIButton* _legalCheckmark;
	FBRichTextView* _legalTextView;
	MNBusinessNavigationHandler* _navigationHandler;
	NSRange _appTermsStringRange;
	NSRange _privacyPolicyStringRange;
	MNBusinessSignupViewModel* _viewModel;
	id<MNBusinessSignupViewDelegate> _delegate;
	MNButton* _createAccountButton;

}

@property (nonatomic,retain) MNBusinessSignupViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNBusinessSignupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNButton * createAccountButton;                              //@synthesize createAccountButton=_createAccountButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 businessProfileImageView:(id)arg2 userProfileImageView:(id)arg3 avatarImageDecoration:(id)arg4 navigationHandler:(id)arg5 initialViewModel:(id)arg6 ;
-(MNButton *)createAccountButton;
-(void)_createAccountTapped;
-(void)_legalCheckmarkTapped;
-(id)_prepareLegalText;
-(BOOL)_legalTextAttributedLabelAction:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNBusinessSignupViewDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MNBusinessSignupViewDelegate>)delegate;
-(MNBusinessSignupViewModel *)viewModel;
-(void)setViewModel:(MNBusinessSignupViewModel *)arg1 ;
@end
