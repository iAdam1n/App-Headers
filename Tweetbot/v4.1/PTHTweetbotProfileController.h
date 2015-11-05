/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Tweetbot/PTHTweetbotUserProfileControllerProtocol.h>

@class PTHTweetbotUser, UIScrollView, NSMutableArray, PTHTweetbotProfileBannerImageController, PTHTweetbotProfileHeaderController, PTHTweetbotProfileRelationshipsController, UIImageView, NSString, NSLayoutConstraint, UIView, PTHTweetbotViewControllerStateView;

@interface PTHTweetbotProfileController : PTHViewController <UIScrollViewDelegate, PTHTweetbotUserProfileControllerProtocol> {

	PTHTweetbotUser* _user;
	UIScrollView* _scrollView;
	NSMutableArray* _childControllers;
	PTHTweetbotProfileBannerImageController* _bannerImageController;
	PTHTweetbotProfileHeaderController* _headerController;
	PTHTweetbotProfileRelationshipsController* _relationshipsController;
	UIImageView* _bannerImageView;
	NSString* _bannerURLString;
	NSLayoutConstraint* _coverBlurImageViewTopConstraint;
	NSLayoutConstraint* _bottomLayoutConstraint;
	UIView* _headerRelationshipsSeparator;
	PTHTweetbotViewControllerStateView* _stateView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_userWasUpdated;
-(id)initWithTweetbotUser:(id)arg1 ;
-(void)_showAccountEdit:(id)arg1 ;
-(void)_showReplyOptions:(id)arg1 ;
-(void)childControllerDidLoad:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)previewActionItems;
@end

