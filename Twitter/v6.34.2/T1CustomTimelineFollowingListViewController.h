/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1CustomTimelineHeaderDelegate.h>

@class T1CustomTimelineTableRowAdapter, TFNTwitterAccount, TFNTwitterUser, TFNTwitterCustomTimelineList, NSString;

@interface T1CustomTimelineFollowingListViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1CustomTimelineHeaderDelegate> {

	T1CustomTimelineTableRowAdapter* _tableRowAdapter;
	TFNTwitterAccount* _account;
	TFNTwitterUser* _user;
	TFNTwitterCustomTimelineList* _timelineList;

}

@property (nonatomic,retain) TFNTwitterUser * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) TFNTwitterCustomTimelineList * timelineList;              //@synthesize timelineList=_timelineList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                              //@synthesize account=_account - In the implementation block
-(id)scribe;
-(id)scribePage;
-(id)scribeSection;
-(void)customTimelineHeaderCell:(id)arg1 didTapFollow:(id)arg2 ;
-(void)_updateSections;
-(void)_globalTimelineDidUpdate:(id)arg1 ;
-(void)_customTimelineListDidUpdate:(id)arg1 ;
-(void)filterTimelines;
-(BOOL)showCreateButton;
-(TFNTwitterCustomTimelineList *)timelineList;
-(void)setTimelineList:(TFNTwitterCustomTimelineList *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
@end

