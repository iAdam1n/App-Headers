/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class UIScrollView, PTHTweetbotStatusFilter, PTHStaticSectionCell, NSMutableArray, NSArray;

@interface PTHTweetbotMuteEditController : PTHViewController {

	UIScrollView* _scrollView;
	PTHTweetbotStatusFilter* _originalStatusFilter;
	PTHStaticSectionCell* _matchingTweetsCell;
	PTHStaticSectionCell* _durationCell;
	NSMutableArray* _matchingTweets;
	unsigned long long _tweetCount;
	NSArray* _timelineStatuses;
	NSArray* _mentionStatuses;
	PTHTweetbotStatusFilter* _statusFilter;

}

@property (nonatomic,readonly) PTHTweetbotStatusFilter * statusFilter;              //@synthesize statusFilter=_statusFilter - In the implementation block
-(id)initWithStatusFilter:(id)arg1 ;
-(PTHTweetbotStatusFilter *)statusFilter;
-(id)editCells;
-(void)_changeDuration:(id)arg1 ;
-(void)_showMatchingTweets:(id)arg1 ;
-(void)save;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateUI;
@end

