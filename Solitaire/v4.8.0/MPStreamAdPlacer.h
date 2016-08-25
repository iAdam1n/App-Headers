/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MPNativeAdSourceDelegate.h>
#import <SolitaireFree/MPNativeAdDelegate.h>

@protocol MPStreamAdPlacerDelegate;
@class NSArray, UIViewController, MPAdPositioning, MPNativeAdSource, MPNativePositionSource, MPStreamAdPlacementData, NSString, NSMutableDictionary, NSIndexPath;

@interface MPStreamAdPlacer : NSObject <MPNativeAdSourceDelegate, MPNativeAdDelegate> {

	NSArray* _visibleIndexPaths;
	NSArray* _rendererConfigurations;
	UIViewController* _viewController;
	id<MPStreamAdPlacerDelegate> _delegate;
	MPAdPositioning* _adPositioning;
	MPNativeAdSource* _adSource;
	MPNativePositionSource* _positioningSource;
	MPStreamAdPlacementData* _adPlacementData;
	NSString* _adUnitID;
	NSMutableDictionary* _sectionCounts;
	NSIndexPath* _topConsideredIndexPath;
	NSIndexPath* _bottomConsideredIndexPath;

}

@property (nonatomic,retain) NSArray * rendererConfigurations;                          //@synthesize rendererConfigurations=_rendererConfigurations - In the implementation block
@property (nonatomic,retain) MPNativeAdSource * adSource;                               //@synthesize adSource=_adSource - In the implementation block
@property (nonatomic,retain) MPNativePositionSource * positioningSource;                //@synthesize positioningSource=_positioningSource - In the implementation block
@property (nonatomic,copy) MPAdPositioning * adPositioning;                             //@synthesize adPositioning=_adPositioning - In the implementation block
@property (nonatomic,retain) MPStreamAdPlacementData * adPlacementData;                 //@synthesize adPlacementData=_adPlacementData - In the implementation block
@property (nonatomic,copy) NSString * adUnitID;                                         //@synthesize adUnitID=_adUnitID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionCounts;                       //@synthesize sectionCounts=_sectionCounts - In the implementation block
@property (nonatomic,retain) NSIndexPath * topConsideredIndexPath;                      //@synthesize topConsideredIndexPath=_topConsideredIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * bottomConsideredIndexPath;                   //@synthesize bottomConsideredIndexPath=_bottomConsideredIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * visibleIndexPaths;                               //@synthesize visibleIndexPaths=_visibleIndexPaths - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<MPStreamAdPlacerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placerWithViewController:(id)arg1 adPositioning:(id)arg2 rendererConfigurations:(id)arg3 ;
-(NSString *)adUnitID;
-(void)setAdUnitID:(NSString *)arg1 ;
-(id)viewControllerForPresentingModalView;
-(unsigned long long)adjustedNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 ;
-(id)adjustedIndexPathForOriginalIndexPath:(id)arg1 ;
-(id)originalIndexPathForAdjustedIndexPath:(id)arg1 ;
-(void)loadAdsForAdUnitID:(id)arg1 ;
-(void)loadAdsForAdUnitID:(id)arg1 targeting:(id)arg2 ;
-(void)setVisibleIndexPaths:(NSArray *)arg1 ;
-(void)setItemCount:(unsigned long long)arg1 forSection:(long long)arg2 ;
-(BOOL)isAdAtIndexPath:(id)arg1 ;
-(void)renderAdAtIndexPath:(id)arg1 inView:(id)arg2 ;
-(CGSize)sizeForAdAtIndexPath:(id)arg1 withMaximumWidth:(double)arg2 ;
-(id)originalIndexPathsForAdjustedIndexPaths:(id)arg1 ;
-(id)adjustedIndexPathsForOriginalIndexPaths:(id)arg1 ;
-(NSArray *)rendererConfigurations;
-(void)setRendererConfigurations:(NSArray *)arg1 ;
-(void)willPresentModalForNativeAd:(id)arg1 ;
-(void)didDismissModalForNativeAd:(id)arg1 ;
-(void)willLeaveApplicationFromNativeAd:(id)arg1 ;
-(void)adSourceDidFinishRequest:(id)arg1 ;
-(id)initWithViewController:(id)arg1 adPositioning:(id)arg2 rendererConfigurations:(id)arg3 ;
-(void)setTopConsideredIndexPath:(NSIndexPath *)arg1 ;
-(void)setBottomConsideredIndexPath:(NSIndexPath *)arg1 ;
-(NSArray *)visibleIndexPaths;
-(id)furthestValidIndexPathAfterIndexPath:(id)arg1 withinDistance:(unsigned long long)arg2 ;
-(void)fillAdsInConsideredRange;
-(NSMutableDictionary *)sectionCounts;
-(MPStreamAdPlacementData *)adPlacementData;
-(CGSize)sizeForAd:(id)arg1 withMaximumWidth:(double)arg2 andIndexPath:(id)arg3 ;
-(void)setAdPlacementData:(MPStreamAdPlacementData *)arg1 ;
-(MPAdPositioning *)adPositioning;
-(void)setPositioningSource:(MPNativePositionSource *)arg1 ;
-(MPNativePositionSource *)positioningSource;
-(MPNativeAdSource *)adSource;
-(NSRange)rangeToDeleteInSection:(id)arg1 forOriginalContentIndexPaths:(id)arg2 ;
-(void)insertItemCountSections:(id)arg1 ;
-(void)deleteItemCountSections:(id)arg1 ;
-(NSIndexPath *)topConsideredIndexPath;
-(NSIndexPath *)bottomConsideredIndexPath;
-(BOOL)shouldPlaceAdAtIndexPath:(id)arg1 ;
-(id)retrieveAdDataForInsertionPath:(id)arg1 ;
-(id)earliestValidIndexPathBeforeIndexPath:(id)arg1 withinDistance:(unsigned long long)arg2 ;
-(void)setAdPositioning:(MPAdPositioning *)arg1 ;
-(void)setAdSource:(MPNativeAdSource *)arg1 ;
-(void)setSectionCounts:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<MPStreamAdPlacerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPStreamAdPlacerDelegate>)delegate;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)insertSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
@end

