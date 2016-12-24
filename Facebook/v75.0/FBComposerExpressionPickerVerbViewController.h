/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Facebook/FBComposerActivityTagPickerModelControllerDelegate.h>
#import <Facebook/FBComposerExpressionPickerVerbViewDelegate.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerExpressionPickerVerbViewControllerDelegate;
@class UICollectionView, FBActivitySharingComposition, FBComposerActivityTagIconPickerCollectionViewController, FBComposerActivityTagPickerModelController, FBUserSession, FBComposerExpressionPickerVerbView, FBTransientViewStateManager, NSString;

@interface FBComposerExpressionPickerVerbViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, FBComposerActivityTagPickerModelControllerDelegate, FBComposerExpressionPickerVerbViewDelegate, FBComposerCompositionStateChangedListener> {

	UICollectionView* _collectionView;
	FBActivitySharingComposition* _composition;
	BOOL _didCalculateNumberOfColumns;
	FBComposerActivityTagIconPickerCollectionViewController* _iconPickerCollectionVC;
	FBComposerActivityTagPickerModelController* _modelController;
	unsigned long long _numberOfColumns;
	FBComposerActivityTagPickerModelController* _prefetchedActivityController;
	FBUserSession* _session;
	FBComposerExpressionPickerVerbView* _verbView;
	FBTransientViewStateManager* _viewStateManager;
	id<FBComposerExpressionPickerVerbViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerExpressionPickerVerbViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(id)initWithSession:(id)arg1 prefetchedActivityController:(id)arg2 ;
-(void)clearSelectedObject;
-(void)_clearSearchText;
-(void)_hideIconPicker;
-(BOOL)_isLastCellInARow:(id)arg1 ;
-(void)_calculateNumberOfColumnsToUseForModelController:(id)arg1 ;
-(void)composerActivityTagPickerModelControllerDidChangeActivities:(id)arg1 loadedFromCache:(BOOL)arg2 ;
-(void)composerActivityTagPickerModelController:(id)arg1 didFailToLoadActivitiesWithError:(id)arg2 ;
-(void)composerActivityTagPickerModelControllerDidFilterActivitiesLocally:(id)arg1 ;
-(void)expressionPickerVerbView:(id)arg1 searchTextDidChange:(id)arg2 ;
-(void)expressionPickerVerbViewDidClearSelectedObject:(id)arg1 ;
-(void)showIconPicker:(id)arg1 ;
-(void)setDelegate:(id<FBComposerExpressionPickerVerbViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<FBComposerExpressionPickerVerbViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
@end
