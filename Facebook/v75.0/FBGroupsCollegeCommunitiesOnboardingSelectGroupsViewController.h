/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate;
@class UICollectionView, FBGroupFeedActionHandler, FBMemGroup, FBUserSession, NSArray, NSString;

@interface FBGroupsCollegeCommunitiesOnboardingSelectGroupsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	FBGroupFeedActionHandler* _actionHandler;
	FBMemGroup* _group;
	FBUserSession* _session;
	NSArray* _communityForumChildGroups;
	NSArray* _collectionViewItems;
	id<FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithGroup:(id)arg1 session:(id)arg2 actionHandler:(id)arg3 ;
-(void)_didPressBack;
-(void)_didPressNext;
-(void)setDelegate:(id<FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate>)arg1 ;
-(id<FBGroupsCollegeCommunitiesOnboardingFlowCoordinatorDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
@end
