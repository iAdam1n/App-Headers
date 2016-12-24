/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNRegistrationExistingAccountViewDelegate;
@class MNHeaderView, MNButton, MNLoadingIndicator, UIImage, MNStackedContainerView;

@interface MNRegistrationExistingAccountView : UIView {

	MNHeaderView* _headerView;
	MNButton* _loginWithFacebookButton;
	MNButton* _createNewAccountButton;
	MNLoadingIndicator* _interstitialLoadingIndicator;
	BOOL _showsInterstitialLoadingIndicator;
	BOOL _showsExistingAccountLoginLoadingIndicator;
	UIImage* _existingAccountProfilePhoto;
	MNStackedContainerView* _stackedContainerView;
	id<MNRegistrationExistingAccountViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL showsInterstitialLoadingIndicator;                                     //@synthesize showsInterstitialLoadingIndicator=_showsInterstitialLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsExistingAccountLoginLoadingIndicator;                             //@synthesize showsExistingAccountLoginLoadingIndicator=_showsExistingAccountLoginLoadingIndicator - In the implementation block
@property (nonatomic,retain) UIImage * existingAccountProfilePhoto;                                      //@synthesize existingAccountProfilePhoto=_existingAccountProfilePhoto - In the implementation block
@property (nonatomic,readonly) MNStackedContainerView * stackedContainerView;                            //@synthesize stackedContainerView=_stackedContainerView - In the implementation block
@property (assign,nonatomic,__weak) id<MNRegistrationExistingAccountViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_layoutLoadingIndicator;
-(void)_loginWithFacebookButtonPressed;
-(void)_createNewAccountButtonPressed;
-(void)_layoutStackedContainerView;
-(id)initWithFrame:(CGRect)arg1 existingAccount:(id)arg2 ;
-(void)setShowsExistingAccountLoginLoadingIndicator:(BOOL)arg1 ;
-(void)setShowsInterstitialLoadingIndicator:(BOOL)arg1 ;
-(void)setExistingAccountProfilePhoto:(UIImage *)arg1 ;
-(BOOL)showsInterstitialLoadingIndicator;
-(BOOL)showsExistingAccountLoginLoadingIndicator;
-(UIImage *)existingAccountProfilePhoto;
-(MNStackedContainerView *)stackedContainerView;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNRegistrationExistingAccountViewDelegate>)arg1 ;
-(id<MNRegistrationExistingAccountViewDelegate>)delegate;
@end
