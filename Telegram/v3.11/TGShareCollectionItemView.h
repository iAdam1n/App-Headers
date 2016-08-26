/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMenuSheetItemView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SDisposable;
@class TGMenuSheetCollectionView, UICollectionViewFlowLayout, TGScrollIndicatorView, UIButton, UIView, NSArray, SMetaDisposable, NSMutableArray, NSMutableDictionary, NSString;

@interface TGShareCollectionItemView : TGMenuSheetItemView <UICollectionViewDataSource, UICollectionViewDelegate> {

	TGMenuSheetCollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	TGScrollIndicatorView* _scrollIndicator;
	UIButton* _fadeView;
	UIView* _separator;
	double _smallActivationHeight;
	BOOL _smallActivated;
	NSArray* _recentPeers;
	NSArray* _searchPeers;
	NSArray* _recentSearchPeers;
	id<SDisposable> _chatList;
	SMetaDisposable* _recentDisposable;
	SMetaDisposable* _searchDisposable;
	BOOL _transitionedIn;
	double _expandOffset;
	double _collapsedHeight;
	double _expandedHeight;
	NSMutableArray* _selectedPeerIds;
	NSArray* _foundPeers;
	NSArray* _currentPeers;
	BOOL _ignoreCurrentUpdates;
	NSMutableDictionary* _peers;
	long long _columns;
	double _appearanceTime;
	BOOL _hasActionButton;
	/*^block*/id _selectionChanged;
	/*^block*/id _searchResultSelected;
	/*^block*/id _dismissCommentView;

}

@property (nonatomic,copy) id selectionChanged;                     //@synthesize selectionChanged=_selectionChanged - In the implementation block
@property (nonatomic,copy) id searchResultSelected;                 //@synthesize searchResultSelected=_searchResultSelected - In the implementation block
@property (nonatomic,copy) id dismissCommentView;                   //@synthesize dismissCommentView=_dismissCommentView - In the implementation block
@property (nonatomic,readonly) NSArray * peerIds; 
@property (assign,nonatomic) BOOL hasActionButton;                  //@synthesize hasActionButton=_hasActionButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_peerIdForPeer:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 screenHeight:(double)arg2 ;
-(BOOL)passPanOffset:(double)arg1 ;
-(void)_didLayoutSubviews;
-(void)menuView:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(BOOL)requiresDivider;
-(BOOL)handlesPan;
-(void)dismissCommentViewAction;
-(id)processedPeers:(id)arg1 ;
-(id)dismissCommentView;
-(id)processPeer:(id)arg1 existingPeerIds:(id)arg2 ;
-(void)setSearchPeers:(id)arg1 ;
-(id)currentPeers;
-(id)searchResultSelected;
-(BOOL)togglePeerSelected:(long long)arg1 fromSearch:(BOOL)arg2 ;
-(void)addFoundPeer:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)peerIds;
-(void)searchBegan;
-(void)searchEnded:(BOOL)arg1 ;
-(void)setSearchQuery:(id)arg1 updateActivity:(/*^block*/id)arg2 ;
-(void)setExpanded;
-(void)setSelectionChanged:(id)arg1 ;
-(void)setSearchResultSelected:(id)arg1 ;
-(void)setDismissCommentView:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)selectionChanged;
-(void)setPeers:(id)arg1 ;
-(BOOL)hasActionButton;
-(void)setHasActionButton:(BOOL)arg1 ;
@end
