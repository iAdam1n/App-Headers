/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UINavigationBar.h>

@class UINavigationItem;

@interface Slack.SLKUserDetailNavBar : UINavigationBar {

	 navigationItem;
	 backButton;
	 buttonsDelegate;

}

@property (retain,nonatomic) UINavigationItem * navigationItem; 
@property (assign,__weak,nonatomic) id<_TtP5Slack27SLKUserDetailNavBarDelegate_> buttonsDelegate; 
-(id<_TtP5Slack27SLKUserDetailNavBarDelegate_>)buttonsDelegate;
-(void)setButtonsDelegate:(id<_TtP5Slack27SLKUserDetailNavBarDelegate_>)arg1 ;
-(void)leftButtonPressed;
-(void)hideBackButton;
-(void)transparentModeWithCloseButton:(BOOL)arg1 ;
-(void)coloredModeWithCloseButton:(BOOL)arg1 color:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UINavigationItem *)navigationItem;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
@end
