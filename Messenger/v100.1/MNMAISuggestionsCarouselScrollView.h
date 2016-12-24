/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Messenger/MNQuickReplyCellDelegate.h>

@protocol MNMAISuggestionsCarouselScrollViewDataSource;
@class FBUserSession, NSArray, NSString;

@interface MNMAISuggestionsCarouselScrollView : UIScrollView <MNQuickReplyCellDelegate> {

	FBUserSession* _session;
	unsigned long long _maxNumberOfCells;
	BOOL _individualDismissEnabled;
	NSArray* _suggestionCells;
	BOOL _needsTransitionAnimation;
	double _layoutYOffset;
	id<MNMAISuggestionsCarouselScrollViewDataSource> _dataSource;
	CGSize _suggestionsContentSize;

}

@property (assign) double layoutYOffset;                                                                      //@synthesize layoutYOffset=_layoutYOffset - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAISuggestionsCarouselScrollViewDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MNMAISuggestionsCarouselScrollViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) CGSize suggestionsContentSize;                                                 //@synthesize suggestionsContentSize=_suggestionsContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutYOffset:(double)arg1 ;
-(CGSize)_sizeForCellAtIndex:(int)arg1 ;
-(double)layoutYOffset;
-(void)didSelectQuickReplyCell:(id)arg1 ;
-(void)didLongPressQuickReplyCell:(id)arg1 ;
-(void)_initializeSuggestionCellArrayIfNeeded;
-(unsigned long long)_numberOfSuggestions;
-(void)_animateInNewSuggestionCells;
-(void)_layOutSuggestionCells;
-(id)_updatedCellFrames;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 maxNumberOfCells:(unsigned long long)arg3 individualDismissEnabled:(BOOL)arg4 ;
-(CGSize)suggestionsContentSize;
-(void)layoutSubviews;
-(void)setDataSource:(id<MNMAISuggestionsCarouselScrollViewDataSource>)arg1 ;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMAISuggestionsCarouselScrollViewDataSource>)dataSource;
@end
