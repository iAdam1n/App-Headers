/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>

@class UIScrollView, PTHTweetbotStatusFilter, PTHStaticSectionCell, NSMutableArray, NSArray;

@interface PTHTweetbotMuteKeywordController : PTHViewController {

	UIScrollView* _scrollView;
	PTHTweetbotStatusFilter* _statusFilter;
	PTHTweetbotStatusFilter* _originalStatusFilter;
	PTHStaticSectionCell* _keywordCell;
	PTHStaticSectionCell* _regularExpressionCell;
	PTHStaticSectionCell* _matchingTweetsCell;
	PTHStaticSectionCell* _durationCell;
	NSMutableArray* _matchingTweets;
	unsigned long long _tweetCount;
	NSArray* _timelineStatuses;
	NSArray* _mentionStatuses;
	BOOL _firstTime;

}
-(id)initWithStatusFilter:(id)arg1 ;
-(BOOL)shouldShowRegularExpression;
-(void)_showMatchingTweets:(id)arg1 ;
-(void)_changeDuration:(id)arg1 ;
-(void)save;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateUI;
-(void)_hideKeyboard;
@end

