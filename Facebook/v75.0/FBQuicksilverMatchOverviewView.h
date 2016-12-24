/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQuicksilverMatchOverviewViewDelegate;
@class UIView, UISegmentedControl, FBCustomActivityIndicatorView, UIButton, FBQuicksilverMatchOverviewMetrics;

@interface FBQuicksilverMatchOverviewView : UIView {

	UIView* _contentView;
	UISegmentedControl* _controlTab;
	BOOL _shouldShowPlaySolo;
	BOOL _isGameLoaded;
	FBCustomActivityIndicatorView* _loadingIndicatorView;
	UIButton* _playButton;
	FBQuicksilverMatchOverviewMetrics* _metrics;
	id<FBQuicksilverMatchOverviewViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverMatchOverviewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isGameLoaded; 
-(void)_userDidTapControlTab;
-(CGRect)_controlTabFrame;
-(id)initWithStartScreenMode:(long long)arg1 shouldShowPlaySolo:(BOOL)arg2 ;
-(void)setupContentView:(id)arg1 ;
-(BOOL)isGameLoaded;
-(void)setIsGameLoaded:(BOOL)arg1 ;
-(void)_userDidTapPlayButton;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBQuicksilverMatchOverviewViewDelegate>)arg1 ;
-(id<FBQuicksilverMatchOverviewViewDelegate>)delegate;
@end
