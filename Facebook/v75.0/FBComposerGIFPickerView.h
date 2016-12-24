/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/FBGIFPickerProtocol.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBComposerGIFGraphQLServiceDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBGIFPickerDelegate;
@class FBUserSession, FBComposerGIFGraphQLService, UICollectionView, UISearchBar, FLAnimatedImage, NSArray, UIActivityIndicatorView, UIView, NSString, NSTimer;

@interface FBComposerGIFPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, FBGIFPickerProtocol, UIGestureRecognizerDelegate, FBComposerGIFGraphQLServiceDelegate, UIScrollViewDelegate> {

	FBUserSession* _session;
	FBComposerGIFGraphQLService* _gifGraphQLService;
	UICollectionView* _collectionView;
	UISearchBar* _searchBar;
	FLAnimatedImage* _animatedImage;
	NSArray* _gifsMetadata;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _loadingOverlayView;
	BOOL _infiniteScrollingFetchInProgress;
	NSString* _resultNextCursor;
	NSTimer* _searchBarQueryHoldbackTimer;
	UIView* _topBorderView;
	NSString* _sessionID;
	id<FBGIFPickerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) id<FBGIFPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activateSearch;
-(void)_reloadDataWithSearchString:(id)arg1 ;
-(void)_searchBarQueryHoldbackTimerTick;
-(void)gifServiceRequestDidFinishWithGIFs:(id)arg1 resultNextCursor:(id)arg2 ;
-(void)gifServiceRequestDidFailWithError:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBGIFPickerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBGIFPickerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(NSString *)sessionID;
-(id)initWithSession:(id)arg1 ;
-(void)_setupSubviews;
@end
