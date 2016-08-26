/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBAuthenticatingView.h>
#import <Messenger/FBLogoutView.h>

@protocol FBAuthenticationViewStyle, FBAuthenticatingHeaderView, FBAuthenticatingFooterView, FBAuthenticatingContentView;
@class UIView, UIActivityIndicatorView, FBImageDownloader, FBGatekeeper, NSString;

@interface FBAuthenticationView : UIView <FBAuthenticatingView, FBLogoutView> {

	UIActivityIndicatorView* _activityIndicatorView;
	FBImageDownloader* _imageDownloader;
	FBGatekeeper* _gatekeeper;
	id<FBAuthenticationViewStyle> _style;
	BOOL _isKeyboardVisible;
	BOOL _showActivityIndicator;
	unsigned long long _interfaceType;
	UIView* _backgroundView;
	UIView*<FBAuthenticatingHeaderView> _headerView;
	UIView*<FBAuthenticatingFooterView> _footerView;
	UIView*<FBAuthenticatingContentView> _contentView;
	CGRect _keyboardTargetFrameInScreen;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long interfaceType;                              //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL isKeyboardVisible;                                        //@synthesize isKeyboardVisible=_isKeyboardVisible - In the implementation block
@property (assign,nonatomic) CGRect keyboardTargetFrameInScreen;                            //@synthesize keyboardTargetFrameInScreen=_keyboardTargetFrameInScreen - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView*<FBAuthenticatingHeaderView> headerView;                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView*<FBAuthenticatingFooterView> footerView;                //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIView*<FBAuthenticatingContentView> contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                                    //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
-(void)_layoutHeaderView;
-(void)_layoutContentView;
-(void)setIsKeyboardVisible:(BOOL)arg1 ;
-(void)addLoginViews;
-(void)setInterfaceType:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setKeyboardTargetFrameInScreen:(CGRect)arg1 ;
-(void)addHeaderAndBackgroundViews;
-(void)setInterfaceType:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_hideLoginControls;
-(void)_updateContentVisibility;
-(void)_startLoginControlsAnimations:(unsigned long long)arg1 ;
-(void)_displayLoginControls:(BOOL)arg1 ;
-(void)_layoutFooterView;
-(void)_layoutActivityIndicatorView;
-(CGRect)_contentRectForBounds:(CGRect)arg1 excludingKeyboardFrame:(CGRect*)arg2 excludingHeader:(BOOL)arg3 ;
-(BOOL)_isTallScreen;
-(BOOL)_shouldHideHeaderAndFooter;
-(CGRect)_statusBarFrameInWindow;
-(CGRect)keyboardTargetFrameInScreen;
-(id)initWithStyle:(id)arg1 imageDownloader:(id)arg2 gatekeeper:(id)arg3 ;
-(void)layoutSubviews;
-(id)initWithStyle:(id)arg1 ;
-(UIView*<FBAuthenticatingContentView>)contentView;
-(void)setContentView:(UIView*<FBAuthenticatingContentView>)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(UIView*<FBAuthenticatingHeaderView>)headerView;
-(void)setHeaderView:(UIView*<FBAuthenticatingHeaderView>)arg1 ;
-(UIView*<FBAuthenticatingFooterView>)footerView;
-(void)setFooterView:(UIView*<FBAuthenticatingFooterView>)arg1 ;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(unsigned long long)interfaceType;
-(void)setInterfaceType:(unsigned long long)arg1 ;
-(BOOL)isKeyboardVisible;
-(BOOL)showActivityIndicator;
@end
