/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBScenePathHolding.h>
#import <Facebook/FBElectionHubDataSourceProtocol.h>

@protocol FBNavigationCoordinator, FBIntentHandler, FBElectionHubDataSourceScrollEventListener;
@class FBUserSession, FBFeedToolbox, FBScenePath, FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBMemElectionHubTabConfig, FBNativeTemplateContext, FBTransientViewStateManager, UICollectionView, FBPullToRefreshView, NSString;

@interface FBElectionHubNativeTemplateDataSource : NSObject <FBPullToRefreshViewDelegate, FBComponentScrollEventListener, FBScenePathHolding, FBElectionHubDataSourceProtocol> {

	FBUserSession* _session;
	FBFeedToolbox* _toolbox;
	unsigned long long _viewState;
	FBScenePath* _scenePath;
	FBComponentCollectionViewDataSource* _componentDataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBMemElectionHubTabConfig* _tab;
	FBNativeTemplateContext* _context;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	double _previousOffset;
	BOOL _isActive;
	FBTransientViewStateManager* _viewStateManager;
	UICollectionView* _collectionView;
	FBPullToRefreshView* _ptrView;
	id<FBElectionHubDataSourceScrollEventListener> _scrollEventListener;
	long long _pollInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UICollectionView * collectionView;                                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) FBPullToRefreshView * ptrView;                                                          //@synthesize ptrView=_ptrView - In the implementation block
@property (nonatomic,retain) FBTransientViewStateManager * viewStateManager;                                         //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (assign,nonatomic,__weak) id<FBElectionHubDataSourceScrollEventListener> scrollEventListener;              //@synthesize scrollEventListener=_scrollEventListener - In the implementation block
@property (assign,nonatomic) long long pollInterval;                                                                 //@synthesize pollInterval=_pollInterval - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                                                          //@synthesize isActive=_isActive - In the implementation block
-(void)setPollInterval:(long long)arg1 ;
-(void)setPtrView:(FBPullToRefreshView *)arg1 ;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(FBPullToRefreshView *)ptrView;
-(FBTransientViewStateManager *)viewStateManager;
-(void)setViewStateManager:(FBTransientViewStateManager *)arg1 ;
-(id)tabID;
-(id<FBElectionHubDataSourceScrollEventListener>)scrollEventListener;
-(void)setScrollEventListener:(id<FBElectionHubDataSourceScrollEventListener>)arg1 ;
-(void)_initContextAndLoadContent;
-(void)_handleNTResponse:(id)arg1 ;
-(id)initWithTab:(id)arg1 session:(id)arg2 toolbox:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 ;
-(long long)pollInterval;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
-(BOOL)isActive;
-(UICollectionView *)collectionView;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end
