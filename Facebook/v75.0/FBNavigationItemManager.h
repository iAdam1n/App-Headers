/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationItemManagerDelegate;
@class FBNavigationBarTitleControlConfig, UIBarButtonItem, FBNavigationBarTitleControl, UINavigationItem;

@interface FBNavigationItemManager : NSObject {

	FBNavigationBarTitleControlConfig* _config;
	UIBarButtonItem* _leftBarButtonItem;
	UIBarButtonItem* _rightBarButtonItem;
	FBNavigationBarTitleControl* _titleControl;
	UINavigationItem* _navigationItem;
	id<FBNavigationItemManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNavigationItemManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateTitle:(id)arg1 ;
-(void)updateSubtitle:(id)arg1 ;
-(void)_didTapRightBarButton;
-(void)setBarButtonOption:(unsigned long long)arg1 ;
-(void)setShowTitleView:(BOOL)arg1 ;
-(void)_didTapLeftBarButton;
-(void)_setTitleViewToTitleControlIfNeeded:(id)arg1 accessibilityIdentifier:(id)arg2 ;
-(void)_didTapTitleView;
-(void)setDelegate:(id<FBNavigationItemManagerDelegate>)arg1 ;
-(id<FBNavigationItemManagerDelegate>)delegate;
-(id)initWithNavigationItem:(id)arg1 ;
-(void)setRightBarButtonTitle:(id)arg1 ;
-(void)setRightBarButtonEnabled:(BOOL)arg1 ;
@end
