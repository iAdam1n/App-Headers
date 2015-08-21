/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ATMessageCenterBaseViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSDateFormatter, NSMutableArray, ATAutomatedMessageCellV7, ATTextMessageDevCellV7, ATTextMessageUserCellV7, ATFileMessageUserCellV7, UIImage, UICollectionView, UIImageView, UICollectionViewFlowLayout, NSString;

@interface ATMessageCenterV7ViewController : ATMessageCenterBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate> {

	BOOL firstLoad;
	NSDateFormatter* messageDateFormatter;
	NSMutableArray* fetchedObjectChanges;
	NSMutableArray* fetchedSectionChanges;
	ATAutomatedMessageCellV7* sizingAutomatedCell;
	ATTextMessageDevCellV7* sizingDevTextCell;
	ATTextMessageUserCellV7* sizingUserTextCell;
	ATFileMessageUserCellV7* sizingUserFileCell;
	double sizingAutomatedCellHorizontalPadding;
	double sizingDevTextCellHorizontalPadding;
	double sizingUserTextCellHorizontalPadding;
	UIImage* blurredImage;
	UICollectionView* collectionView;
	UIImageView* _backgroundImageView;
	UICollectionViewFlowLayout* _flowLayout;

}

@property (nonatomic,retain) UICollectionView * collectionView; 
@property (nonatomic,retain) UIImageView * backgroundImageView;                    //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;              //@synthesize flowLayout=_flowLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)relayoutSubviews;
-(id)blurredBackgroundScreenshot;
-(void)fontPreferencesChanged:(id)arg1 ;
-(void)relayoutSubviews:(BOOL)arg1 ;
-(void)scrollToBottomOfCollectionView;
-(id)dateForCellAtIndexPath:(id)arg1 ;
-(void)postScrollNotification;
-(int)cellTypeForMessage:(id)arg1 ;
-(void)configureAutomatedCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureUserTextCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureDevTextCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureUserFileCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)keyForIndexPath:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(UIImageView *)backgroundImageView;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)scrollToBottom;
@end

