/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBLoadingView, FBVideoHomeGuideViewDelegate;
@class FBVideoHomeLoadingComponentModel, FBPillView, UIView, UICollectionView, FBPullToRefreshView;

@interface FBVideoHomeGuideView : UIView {

	BOOL _includeGoLiveComposer;
	FBVideoHomeLoadingComponentModel* _cardsModel;
	BOOL _includeCreatorUnit;
	FBPillView* _pillView;
	UIView*<FBLoadingView> _loadingCardView;
	UICollectionView* _collectionView;
	FBPullToRefreshView* _ptrView;
	id<FBVideoHomeGuideViewDelegate> _delegate;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) FBPullToRefreshView * ptrView;                               //@synthesize ptrView=_ptrView - In the implementation block
@property (nonatomic,readonly) FBPillView * pillView;                                       //@synthesize pillView=_pillView - In the implementation block
@property (nonatomic,readonly) UIView*<FBLoadingView> loadingCardView;                      //@synthesize loadingCardView=_loadingCardView - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoHomeGuideViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)buildDebugInfo;
-(void)_tapNewItemsPill;
-(id)initWithFrame:(CGRect)arg1 spinnerColor:(id)arg2 includeCreatorUnit:(BOOL)arg3 includeGoLiveComposer:(BOOL)arg4 ;
-(FBPillView *)pillView;
-(FBPullToRefreshView *)ptrView;
-(UIView*<FBLoadingView>)loadingCardView;
-(void)scrollContentToShowPTRLoading;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<FBVideoHomeGuideViewDelegate>)arg1 ;
-(id<FBVideoHomeGuideViewDelegate>)delegate;
-(UICollectionView *)collectionView;
@end
