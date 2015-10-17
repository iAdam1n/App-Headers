/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotCursorController.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class UIView, UISegmentedControl, NSString;

@interface PTHTweetbotStatusCursorController : PTHTweetbotCursorController <UIViewControllerPreviewingDelegate> {

	UIView* _accessoryView;
	UISegmentedControl* _segmentedControl;
	BOOL _drawerDisabled;

}

@property (assign,nonatomic) BOOL drawerDisabled;                   //@synthesize drawerDisabled=_drawerDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDrawerDisabled:(BOOL)arg1 ;
-(id)initWithTweetbotCursor:(id)arg1 ;
-(id)nothingFoundTitle;
-(unsigned long long)separatorStyleTop:(id)arg1 bottom:(id)arg2 ;
-(BOOL)needsCustomSeparators;
-(unsigned long long)separatorStyle:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_didRetweet:(id)arg1 ;
-(void)_updateTableViewSeparators:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)drawerDisabled;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(Class)cellClass;
-(void)viewDidLoad;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end
