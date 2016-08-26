/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBQuicksilverMatchOverviewViewDelegate;
@class UIView, UILabel, UIButton, UISegmentedControl, FBNuxTooltip;

@interface FBQuicksilverMatchOverviewView : UIView {

	UIView* _contentView;
	UILabel* _titleView;
	UIButton* _playSoloButton;
	UISegmentedControl* _controlTab;
	BOOL _isPlaySoloButtonEnabled;
	id<FBQuicksilverMatchOverviewViewDelegate> _delegate;
	FBNuxTooltip* _playSoloButtonTooltip;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverMatchOverviewViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNuxTooltip * playSoloButtonTooltip;                                     //@synthesize playSoloButtonTooltip=_playSoloButtonTooltip - In the implementation block
@property (assign,setter=setPlaySoloButtonEnabled:,nonatomic) BOOL isPlaySoloButtonEnabled;              //@synthesize isPlaySoloButtonEnabled=_isPlaySoloButtonEnabled - In the implementation block
-(void)_userDidTapControlTab;
-(void)_didTapPlaySoloButton;
-(void)_createPlaySoloButtonTooltips;
-(void)_enablePlaySoloButton;
-(BOOL)isPlaySoloButtonEnabled;
-(id)initWithStartScreenMode:(long long)arg1 ;
-(void)setPlaySoloButtonEnabled:(BOOL)arg1 ;
-(void)setupContentView:(id)arg1 ;
-(FBNuxTooltip *)playSoloButtonTooltip;
-(void)setDelegate:(id<FBQuicksilverMatchOverviewViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBQuicksilverMatchOverviewViewDelegate>)delegate;
@end
