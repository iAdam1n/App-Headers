/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBMultiMemAvatarSequenceHeaderDelegate.h>
#import <Facebook/FBMemAvatarSequenceViewControllerDelegate.h>

@class NSArray, FBMultiMemAvatarSequenceHeaderView, UIScrollView, FBUserSession, NSString, NSMutableDictionary;

@interface FBSeenUnseenListContainerViewController : UIViewController <UIScrollViewDelegate, FBMultiMemAvatarSequenceHeaderDelegate, FBMemAvatarSequenceViewControllerDelegate> {

	NSArray* _seenUnseenViewControllers;
	FBMultiMemAvatarSequenceHeaderView* _headerView;
	UIScrollView* _containerScrollView;
	FBUserSession* _session;
	NSString* _feedbackID;
	long long _currentHeaderViewItem;
	BOOL _dragging;
	NSMutableDictionary* _countsForHeaderItemKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFeedbackID:(id)arg1 session:(id)arg2 ;
-(long long)numberOfItemsForHeaderView:(id)arg1 ;
-(id)headerView:(id)arg1 configForIndex:(long long)arg2 ;
-(void)headerView:(id)arg1 didTapHeaderItemAtIndex:(long long)arg2 ;
-(void)_fetchFeedbackWithFeedbackID:(id)arg1 ;
-(void)_layoutListViewAtIndex:(long long)arg1 ;
-(void)_logPageChange:(unsigned long long)arg1 ;
-(void)_handleSeenUnseenListQueryGraphQLResponse:(id)arg1 ;
-(unsigned long long)_seenUnseenCountForIndex:(unsigned long long)arg1 ;
-(id)_accessibilityTitleForSeenUnseenAtIndex:(long long)arg1 ;
-(id)_seenUnseenButtonTitleForIndex:(long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

