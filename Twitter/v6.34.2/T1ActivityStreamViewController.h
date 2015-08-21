/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1ActivityViewController.h>
#import <Twitter/TFNMarkAsViewedDelegate.h>
#import <Twitter/T1UMFTakeoverDelegate.h>
#import <Twitter/T1PanelRootViewController.h>
#import <Twitter/T1PromptHelperDelegate.h>

@class TFNMarkAsViewedHelper, NSIndexPath, TFNTwitterUser, NSDate, TFNTwitterInteractionsTimeline, TFNTwitterActivityStreamAboutMe, NSString, T1InlinePromptTableRowAdapter, T1CallToActionAdapter, T1PromptHelper, TFNTwitterAccount;

@interface T1ActivityStreamViewController : T1ActivityViewController <TFNMarkAsViewedDelegate, T1UMFTakeoverDelegate, T1PanelRootViewController, T1PromptHelperDelegate> {

	TFNMarkAsViewedHelper* _markAsViewedHelper;
	NSIndexPath* _firstActivityIndexPath;
	NSIndexPath* _lastUnreadIndexPath;
	TFNTwitterUser* _twitterTipUser;
	BOOL _twitterTipUserRequested;
	NSDate* _lastViewed;
	TFNTwitterInteractionsTimeline* _timeline;
	TFNTwitterActivityStreamAboutMe* _activityStream;
	NSString* _segmentTitle;
	T1InlinePromptTableRowAdapter* _timelinePromptbirdAdapter;
	T1CallToActionAdapter* _callToActionTableRowAdapter;
	T1PromptHelper* _promptHelper;

}

@property (nonatomic,retain) TFNTwitterInteractionsTimeline * timeline;                              //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,retain) TFNTwitterActivityStreamAboutMe * activityStream;                       //@synthesize activityStream=_activityStream - In the implementation block
@property (nonatomic,copy) NSString * segmentTitle;                                                  //@synthesize segmentTitle=_segmentTitle - In the implementation block
@property (nonatomic,retain) T1InlinePromptTableRowAdapter * timelinePromptbirdAdapter;              //@synthesize timelinePromptbirdAdapter=_timelinePromptbirdAdapter - In the implementation block
@property (nonatomic,retain) T1CallToActionAdapter * callToActionTableRowAdapter;                    //@synthesize callToActionTableRowAdapter=_callToActionTableRowAdapter - In the implementation block
@property (nonatomic,readonly) T1PromptHelper * promptHelper;                                        //@synthesize promptHelper=_promptHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account; 
@property (nonatomic,readonly) NSString * panelID; 
@property (nonatomic,readonly) NSDate * lastViewed;                                                  //@synthesize lastViewed=_lastViewed - In the implementation block
@property (nonatomic,readonly) NSString * scribePage; 
-(NSString *)scribePage;
-(void)setTimeline:(TFNTwitterInteractionsTimeline *)arg1 ;
-(NSString *)panelID;
-(id)scribeSection;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)_timelineDidFinishDeserialization:(id)arg1 ;
-(BOOL)isLoadingTop;
-(void)loadTop:(id)arg1 ;
-(TFNTwitterInteractionsTimeline *)timeline;
-(id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 ;
-(TFNTwitterActivityStreamAboutMe *)activityStream;
-(void)setActivityStream:(TFNTwitterActivityStreamAboutMe *)arg1 ;
-(id)initWithCallToActionStyle:(unsigned long long)arg1 ;
-(void)_handlePromptsChangedNotification:(id)arg1 ;
-(void)_streamSourceDidChange:(id)arg1 ;
-(id)_vitScopedNotificationsEmptySegments;
-(void)_setupStreamFromTimeline;
-(id)_emptySegments;
-(BOOL)_isActivityFiltered:(id)arg1 ;
-(id)_viewAllItemForActivityItem:(id)arg1 ;
-(void)loadTopDidEnd;
-(void)_checkForPrompts;
-(T1PromptHelper *)promptHelper;
-(id)autosaveName;
-(BOOL)shouldPersistScrollPosition;
-(void)didEndScrolling;
-(void)_removePrompts:(id)arg1 ;
-(void)_activityStreamDidUpdate:(id)arg1 ;
-(void)markAsViewedHelper:(id)arg1 didViewCells:(id)arg2 ;
-(void)promptViewControllerDidBecomeReady:(id)arg1 ;
-(BOOL)_isMagicRecsAndStatusesInTargets:(id)arg1 ;
-(BOOL)_isMagicRecsAndUsersInTargets:(id)arg1 ;
-(id)_viewFacepileItemForActivityItem:(id)arg1 withUsers:(id)arg2 ;
-(void)_didSelectViewMoreTweetsForActivityItem:(id)arg1 atIndexPath:(id)arg2 ;
-(NSString *)segmentTitle;
-(void)setSegmentTitle:(NSString *)arg1 ;
-(T1InlinePromptTableRowAdapter *)timelinePromptbirdAdapter;
-(void)setTimelinePromptbirdAdapter:(T1InlinePromptTableRowAdapter *)arg1 ;
-(T1CallToActionAdapter *)callToActionTableRowAdapter;
-(void)setCallToActionTableRowAdapter:(T1CallToActionAdapter *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)update;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSDate *)lastViewed;
@end

