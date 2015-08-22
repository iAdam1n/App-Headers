/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController.h>

@class IGPostsFeedVisibleStatus, IGRankedTitleView, NSString, NSIndexPath;

@interface IGPostsFeedViewController : IGFeedViewController {

	BOOL _shouldShowFollowButtons;
	BOOL _showExploreContext;
	IGPostsFeedVisibleStatus* _postsFeedVisibleStatus;
	unsigned long long _startIndex;
	IGRankedTitleView* _rankedTitleView;
	NSString* _rankedTitle;
	NSString* _rankedSubtitle;
	NSIndexPath* _savedVisibleIndexPath;
	double _savedVisibleIndexPathOffset;

}

@property (assign,nonatomic) BOOL shouldShowFollowButtons;                                   //@synthesize shouldShowFollowButtons=_shouldShowFollowButtons - In the implementation block
@property (assign,nonatomic) BOOL showExploreContext;                                        //@synthesize showExploreContext=_showExploreContext - In the implementation block
@property (nonatomic,retain) IGPostsFeedVisibleStatus * postsFeedVisibleStatus;              //@synthesize postsFeedVisibleStatus=_postsFeedVisibleStatus - In the implementation block
@property (assign,nonatomic) unsigned long long startIndex;                                  //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) IGRankedTitleView * rankedTitleView;                            //@synthesize rankedTitleView=_rankedTitleView - In the implementation block
@property (nonatomic,retain) NSString * rankedTitle;                                         //@synthesize rankedTitle=_rankedTitle - In the implementation block
@property (nonatomic,retain) NSString * rankedSubtitle;                                      //@synthesize rankedSubtitle=_rankedSubtitle - In the implementation block
@property (nonatomic,retain) NSIndexPath * savedVisibleIndexPath;                            //@synthesize savedVisibleIndexPath=_savedVisibleIndexPath - In the implementation block
@property (assign,nonatomic) double savedVisibleIndexPathOffset;                             //@synthesize savedVisibleIndexPathOffset=_savedVisibleIndexPathOffset - In the implementation block
-(void)setShowExploreContext:(BOOL)arg1 ;
-(BOOL)showExploreContext;
-(BOOL)enableNavState;
-(void)setPostsFeedVisibleStatus:(IGPostsFeedVisibleStatus *)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 startAtItemIndex:(unsigned long long)arg2 title:(id)arg3 subtitle:(id)arg4 ;
-(void)setShouldShowFollowButtons:(BOOL)arg1 ;
-(IGPostsFeedVisibleStatus *)postsFeedVisibleStatus;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 ;
-(BOOL)showFollowButtonForFeedItem:(id)arg1 ;
-(BOOL)showExploreContextForFeedItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 startAtItemIndex:(unsigned long long)arg2 title:(id)arg3 subtitle:(id)arg4 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 startAtItemIndex:(unsigned long long)arg2 title:(id)arg3 subtitle:(id)arg4 showsPullToRefresh:(BOOL)arg5 ;
-(NSString *)rankedSubtitle;
-(void)setRankedTitleView:(IGRankedTitleView *)arg1 ;
-(IGRankedTitleView *)rankedTitleView;
-(NSString *)rankedTitle;
-(CGRect)frameForCell:(id)arg1 ;
-(void)setSavedVisibleIndexPath:(NSIndexPath *)arg1 ;
-(void)setSavedVisibleIndexPathOffset:(double)arg1 ;
-(void)saveCurrentScrollPosition;
-(NSIndexPath *)savedVisibleIndexPath;
-(double)savedVisibleIndexPathOffset;
-(void)scrollToIndexPath:(id)arg1 verticalOffset:(double)arg2 ;
-(BOOL)shouldShowFollowButtons;
-(void)setRankedTitle:(NSString *)arg1 ;
-(void)setRankedSubtitle:(NSString *)arg1 ;
-(void)viewDidLoad;
-(int)viewType;
-(unsigned long long)startIndex;
-(void)setStartIndex:(unsigned long long)arg1 ;
@end
