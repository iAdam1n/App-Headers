/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBFeedPaginatedHScrollComponent.h>

@protocol FBFeedSeeMoreContentHandlerFBFeedSeeMoreContentUIFactory;
@class FBFeedInfiniteHScrollComponent, FBFeedHScrollComponent, NSArray, FBMemStorySet, FBFeedToolbox, FBUserSession, NSString;

@interface FBStorySetHscrollContentComponent : CKCompositeComponent <FBFeedPaginatedHScrollComponent> {

	FBFeedInfiniteHScrollComponent* _infiniteHScrollComponent;
	FBFeedHScrollComponent* _feedHScrollComponent;
	id<FBFeedSeeMoreContentHandler><FBFeedSeeMoreContentUIFactory> _seeMoreInUFIHandler;
	NSArray* _trackingCodes;
	FBMemStorySet* _storySet;
	FBFeedToolbox* _toolbox;
	BOOL _appFeedRequestSent;
	FBUserSession* _session;
	unsigned long long _numStories;
	unsigned long long _prefetchUnitOffset;
	id _currentChildScopeFrameID;

}

@property (nonatomic,retain) FBUserSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned long long numStories;                    //@synthesize numStories=_numStories - In the implementation block
@property (assign,nonatomic) BOOL appFeedRequestSent;                            //@synthesize appFeedRequestSent=_appFeedRequestSent - In the implementation block
@property (assign,nonatomic) unsigned long long prefetchUnitOffset;              //@synthesize prefetchUnitOffset=_prefetchUnitOffset - In the implementation block
@property (assign,nonatomic) id currentChildScopeFrameID;                        //@synthesize currentChildScopeFrameID=_currentChildScopeFrameID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithStorySet:(id)arg1 storyBecameFullyVisibleAction:(CKTypedComponentAction<>)arg2 storyEndDraggingScrollViewAction:(CKTypedComponentAction<>)arg3 storyScrollToComponentAction:(CKTypedComponentAction<>)arg4 toolbox:(id)arg5 ;
+(id)initialState;
-(unsigned long long)numStories;
-(void)component:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(void)didTapSeeMore;
-(BOOL)scrollInDirection:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)appFeedRequestSent;
-(unsigned long long)totalNumberOfEdges;
-(unsigned long long)prefetchUnitOffset;
-(void)sendAppFeedRequest:(id)arg1 ;
-(void)didTapPaginator;
-(void)didPanPaginator;
-(void)setAppFeedRequestSent:(BOOL)arg1 ;
-(void)setPrefetchUnitOffset:(unsigned long long)arg1 ;
-(id)currentChildScopeFrameID;
-(void)setCurrentChildScopeFrameID:(id)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
@end
