/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBMagicStoryCollectionDataSourceDelegate.h>
#import <Messenger/FBMagicStoryHeaderViewDelegate.h>
#import <Messenger/FBMagicStoryVideoCellDelegate.h>
#import <Messenger/FBMagicStoryBurstPhotoCellDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/FBMagicStoryDraggableCellDelegate.h>

@protocol FBMagicStoryPlayableCell, FBMagicStoryCellDelegate;
@class FBMagicStoriesProductionLogger, FBTimer, FBMagicStoryHeaderView, UIButton, FBMagicStoryDraggableCell, FBKVOController, UILongPressGestureRecognizer, NSMutableDictionary, FBMagicStoryCellInfo, NSArray, UICollectionView, FBMagicStoryCollection, FBMagicStoryCollectionDataSource, FBMagicStoryBurstPhotoCell, NSString;

@interface FBMagicStoryCell : UICollectionViewCell <FBMagicStoryCollectionDataSourceDelegate, FBMagicStoryHeaderViewDelegate, FBMagicStoryVideoCellDelegate, FBMagicStoryBurstPhotoCellDelegate, UICollectionViewDelegate, FBMagicStoryDraggableCellDelegate> {

	FBMagicStoriesProductionLogger* _logger;
	FBTimer* _animationTimer;
	FBTimer* _scrollTimer;
	FBMagicStoryHeaderView* _headerView;
	UIButton* _doneButton;
	FBMagicStoryDraggableCell*<FBMagicStoryPlayableCell> _currentlyPlayingCell;
	FBKVOController* _kvoController;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSMutableDictionary* _draggableCopies;
	FBMagicStoryCellInfo* _draggedCellInfo;
	FBMagicStoryCellInfo* _swappedCellInfo;
	BOOL _canDraggedCellBeHeader;
	CGPoint _offsetForCellBeingDragged;
	double _timeTicksWhileScrolling;
	BOOL _allowLayoutEditMode;
	BOOL _showAddMoreButton;
	BOOL _allowHeaderImages;
	BOOL _shouldUpdateMediaQueueOnScroll;
	NSArray* _mediaPlaybackQueue;
	BOOL _shouldAllowMediaPlayback;
	int _cellState;
	UICollectionView* _collage;
	id<FBMagicStoryCellDelegate> _delegate;
	FBMagicStoryCollection* _collection;
	FBMagicStoryCollectionDataSource* _dataSource;
	FBMagicStoryBurstPhotoCell* _lastAnimatedCell;

}

@property (nonatomic,readonly) UICollectionView * collage;                               //@synthesize collage=_collage - In the implementation block
@property (assign,nonatomic,__weak) id<FBMagicStoryCellDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBMagicStoryCollection * collection;                      //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) FBMagicStoryCollectionDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) int cellState;                                              //@synthesize cellState=_cellState - In the implementation block
@property (nonatomic,retain) FBMagicStoryBurstPhotoCell * lastAnimatedCell;              //@synthesize lastAnimatedCell=_lastAnimatedCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)headerViewDidTapDoneButton:(id)arg1 ;
-(void)_layoutDoneButtonWithAnimation:(BOOL)arg1 ;
-(id)_magicStoryLayoutWithLightWash:(BOOL)arg1 templateLayout:(id)arg2 ;
-(void)collageDidScroll;
-(void)_handleLongPress;
-(void)_stopBurstAnimations;
-(id)magicStoriesLayout;
-(void)_updatePlaybackQueueAndStartMediaPlayback:(BOOL)arg1 ;
-(void)_playMediaCell:(id)arg1 ;
-(BOOL)_hasValidTitle;
-(id)_whiteOverlayEditModeColor;
-(void)_finishLayoutEdit;
-(void)_playCellAfterCurrentlyPlayingCell:(id)arg1 ;
-(void)_startPlayingMediaQueue;
-(void)_startLayoutEditWithLongPress;
-(void)_startDragging:(CGPoint)arg1 ;
-(void)_continueDragging:(CGPoint)arg1 ;
-(void)_finishDragging:(CGPoint)arg1 ;
-(UICollectionView *)collage;
-(id)_getCellAt:(id)arg1 ;
-(id)_getCopyAt:(id)arg1 ;
-(BOOL)_handleDragScrolling:(CGPoint)arg1 ;
-(void)_removeCopy:(id)arg1 forCell:(id)arg2 atPath:(id)arg3 ;
-(void)_makeAllAssetViewsVisible;
-(void)_setCellShrink:(id)arg1 ;
-(void)magicStoryCollectionDataSourceDidUpdateTitle:(id)arg1 ;
-(void)magicStoryCollectionDataSourceDidTapAddButton:(id)arg1 ;
-(void)magicStoryCollectionDataSourceDidTapEditButton:(id)arg1 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didSelectAsset:(id)arg2 atRect:(CGRect)arg3 sourceView:(id)arg4 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didSwapAsset:(id)arg2 withAsset:(id)arg3 inCollection:(id)arg4 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didRemoveAsset:(id)arg2 inCollection:(id)arg3 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didSetHeaderToAsset:(id)arg2 inCollection:(id)arg3 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didBegingEditingTextInView:(id)arg2 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didEndEditingTextInView:(id)arg2 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didConfigureCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)magicStoryCollectionDataSource:(id)arg1 willConfigureCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)headerViewDidTapCloseButton:(id)arg1 ;
-(void)magicStoryBurstPhotoCellDidFinishLoop:(id)arg1 ;
-(void)configureWithCollection:(id)arg1 templateLayout:(id)arg2 logger:(id)arg3 session:(id)arg4 scrollToTop:(BOOL)arg5 allowLayoutEditMode:(BOOL)arg6 showAddMoreButton:(BOOL)arg7 allowHeaderImages:(BOOL)arg8 ;
-(void)updateWithCollection:(id)arg1 templateLayout:(id)arg2 session:(id)arg3 ;
-(void)startMediaPlayback;
-(void)stopMediaPlayback;
-(void)startMediaPlaybackAtCell:(id)arg1 ;
-(FBMagicStoryBurstPhotoCell *)lastAnimatedCell;
-(void)setLastAnimatedCell:(FBMagicStoryBurstPhotoCell *)arg1 ;
-(void)didTapRemoveButton:(id)arg1 ;
-(void)videoCellDidStartPlayback:(id)arg1 ;
-(void)videoCellDidEndPlayback:(id)arg1 ;
-(FBMagicStoryCollection *)collection;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDataSource:(FBMagicStoryCollectionDataSource *)arg1 ;
-(void)setDelegate:(id<FBMagicStoryCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(FBMagicStoryCollectionDataSource *)dataSource;
-(id<FBMagicStoryCellDelegate>)delegate;
-(void)setCellState:(int)arg1 ;
-(int)cellState;
@end
