/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSideFeedUnitController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Facebook/FBUtilityCollectionViewDelegateFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBFeedSideFeedTrendingArticlesUnitViewDelegate.h>

@class FBFeedSideFeedTrendingArticlesUnitView, UITapGestureRecognizer, UILongPressGestureRecognizer, NSMutableDictionary, NSOrderedSet, FBPopoverActionSheet, NSString;

@interface FBFeedSideFeedTrendingArticlesUnitController : FBSideFeedUnitController <UICollectionViewDataSource, FBUtilityCollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, FBFeedSideFeedTrendingArticlesUnitViewDelegate> {

	FBFeedSideFeedTrendingArticlesUnitView* _articlesUnitView;
	UITapGestureRecognizer* _headerTapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	NSMutableDictionary* _categoryImpressionHistory;
	NSMutableDictionary* _itemImpressionHistory;
	NSMutableDictionary* _swipeHistory;
	NSMutableDictionary* _clickHistory;
	NSMutableDictionary* _showMoreHistory;
	NSMutableDictionary* _showLessHistory;
	NSOrderedSet* _validModelEdges;
	FBPopoverActionSheet* _negativeFeedbackActionSheet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)headerImageWidthForViewWidth:(double)arg1 ;
+(long long)itemImageWidth;
+(long long)itemImageHeight;
+(long long)headerImageHeight;
-(id)trackingStringForItemPosition:(unsigned long long)arg1 ;
-(id)graphQLIDForItemPosition:(unsigned long long)arg1 ;
-(BOOL)validateModel;
-(void)_resetLoggingHistory;
-(id)getUnitNameForAnalytics;
-(void)_seeMoreButtonTapped;
-(void)_handleCollectionNegativeFeedback:(id)arg1 ;
-(void)_headerTapped;
-(void)_handleHeaderArticleNegativeFeedback:(id)arg1 ;
-(void)_updateUnitHeader;
-(void)_openArticleAtIndex:(long long)arg1 fromListAtInex:(long long)arg2 ;
-(long long)_numberOfItemsInCollectionView;
-(unsigned long long)_limitArticleCount:(unsigned long long)arg1 ;
-(id)_storyForItemPosition:(unsigned long long)arg1 inCategory:(unsigned long long)arg2 ;
-(id)_articleAtIndex:(long long)arg1 fromListAtIndex:(long long)arg2 ;
-(id)trackingStringForCategory:(unsigned long long)arg1 ;
-(id)graphQLIDForCategory:(unsigned long long)arg1 ;
-(id)_articlesModel;
-(id)_negativeFeedbackButtonItemPerformingBlock:(/*^block*/id)arg1 ;
-(void)_hideHeaderArticleAtIndex:(unsigned long long)arg1 ;
-(void)_handleNegativeFeedback:(id)arg1 inView:(id)arg2 performingBlock:(/*^block*/id)arg3 ;
-(void)_removeArticleAtIndex:(unsigned long long)arg1 fromArticleListAtIndex:(unsigned long long)arg2 ;
-(void)_hideItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 initialLayoutAttributes:(id)arg3 forAppearingItemAtIndexPath:(id)arg4 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 finalLayoutAttributes:(id)arg3 forDisappearingItemAtIndexPath:(id)arg4 ;
-(id)trackingStringForItemPosition:(unsigned long long)arg1 inCategory:(unsigned long long)arg2 ;
-(id)graphQLIDForItemPosition:(unsigned long long)arg1 inCategory:(unsigned long long)arg2 ;
-(unsigned long long)numberOfVisibleArticlesInUnitView:(id)arg1 ;
-(void)unitView:(id)arg1 didMoveToPage:(long long)arg2 fromPage:(long long)arg3 ;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end
