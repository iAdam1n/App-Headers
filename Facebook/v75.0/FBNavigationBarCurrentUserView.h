/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBWebViewRightBarButtonItemView.h>

@protocol FBNavigationBarCurrentUserViewDelegate;
@class FBNavigationBarProfileView, FBBouncyPressButton, UIButton, UIView, NSString;

@interface FBNavigationBarCurrentUserView : UIView <FBWebViewRightBarButtonItemView> {

	FBNavigationBarProfileView* _profileView;
	FBBouncyPressButton* _menuButton;
	UIButton* _chatBarButtonItem;
	UIView* _divider;
	BOOL _displayDivebar;
	id<FBNavigationBarCurrentUserViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIButton * menuButton;                                                 //@synthesize menuButton=_menuButton - In the implementation block
@property (assign,nonatomic) BOOL displayDivebar;                                                     //@synthesize displayDivebar=_displayDivebar - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarCurrentUserViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayDivebar:(BOOL)arg1 ;
-(BOOL)shouldShowForWebViewControllerPolicyInternal;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 displayDivebar:(BOOL)arg3 ;
-(void)_didTapProfileView:(id)arg1 ;
-(void)_didTapMenuButton:(id)arg1 ;
-(void)_didTapChatButton:(id)arg1 ;
-(double)profileViewAvailableWidth;
-(BOOL)displayDivebar;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBNavigationBarCurrentUserViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBNavigationBarCurrentUserViewDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setThumbnailURL:(id)arg1 ;
-(UIButton *)menuButton;
@end
