/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIViewController.h>
#import <Tweetbot/PTHTransitioningController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableArray, UIView, PTHTransitioningDelegate, UICollectionViewFlowLayout, _PTHTweetbotAccountPickerCollectionHolder, UICollectionView, UILabel, PTHShapeView, UIDynamicAnimator, PTHTweetbotAvatarView, NSIndexPath, PTHTweetbotAccount, NSString;

@interface PTHTweetbotAccountPickerController : UIViewController <PTHTransitioningController, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {

	NSMutableArray* _accounts;
	UIView* _contentView;
	PTHTransitioningDelegate* _transitioningDelegate;
	UICollectionViewFlowLayout* _layout;
	_PTHTweetbotAccountPickerCollectionHolder* _collectionHolder;
	UICollectionView* _collectionView;
	UILabel* _titleLabel;
	UIView* _controlsView;
	PTHShapeView* _settingsButton;
	PTHShapeView* _addButton;
	UIDynamicAnimator* _animator;
	PTHTweetbotAvatarView* _movingAvatarView;
	CGPoint _movingStartPoint;
	NSIndexPath* _movingIndexPath;
	PTHTweetbotAccount* _selectedAccount;

}

@property (nonatomic,retain) PTHTweetbotAccount * selectedAccount;              //@synthesize selectedAccount=_selectedAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PTHTweetbotAccount *)selectedAccount;
-(void)setSelectedAccount:(PTHTweetbotAccount *)arg1 ;
-(void)_deleteAccount:(id)arg1 ;
-(void)_showSettings:(id)arg1 ;
-(void)ok:(id)arg1 ;
-(void)swipe:(id)arg1 ;
-(void)presentTransition:(id)arg1 ;
-(void)dismissTransition:(id)arg1 ;
-(void)configurePresentationController:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)longPress:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_reloadData;
-(void)_addAccount:(id)arg1 ;
@end

