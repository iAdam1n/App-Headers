/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, NSArray, T1ActivityTableRowAdapter, T1UserOrRecommendationTableRowAdapter, NSString;

@interface T1ActivityViewController : TFNItemsDataViewController <TFNTwitterAuthenticated> {

	BOOL _isLayoutSubviewsDone;
	BOOL _restoredPersistedScrollPosition;
	TFNTwitterAccount* _account;
	NSArray* _activities;
	T1ActivityTableRowAdapter* _activityAdapter;
	T1UserOrRecommendationTableRowAdapter* _userAdapter;

}

@property (nonatomic,copy) NSArray * activities;                                                 //@synthesize activities=_activities - In the implementation block
@property (nonatomic,readonly) T1ActivityTableRowAdapter * activityAdapter;                      //@synthesize activityAdapter=_activityAdapter - In the implementation block
@property (nonatomic,readonly) T1UserOrRecommendationTableRowAdapter * userAdapter;              //@synthesize userAdapter=_userAdapter - In the implementation block
@property (assign,nonatomic) BOOL restoredPersistedScrollPosition;                               //@synthesize restoredPersistedScrollPosition=_restoredPersistedScrollPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                        //@synthesize account=_account - In the implementation block
-(id)scribe;
-(id)scribePage;
-(id)calculatedLayoutMetrics;
-(id)scribeSection;
-(T1UserOrRecommendationTableRowAdapter *)userAdapter;
-(T1ActivityTableRowAdapter *)activityAdapter;
-(id)autosaveName;
-(BOOL)shouldPersistScrollPosition;
-(id)indexPathForItem:(id)arg1 ;
-(void)persistScrollPosition;
-(void)setRestoredPersistedScrollPosition:(BOOL)arg1 ;
-(void)restorePersistedScrollPosition;
-(id)_scrollPositionUserDefaultsKey;
-(id)_activityItemAtIndexPath:(id)arg1 ;
-(id)_indexPathForActivityItemWithMaxPosition:(long long)arg1 ;
-(BOOL)restoredPersistedScrollPosition;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSArray *)activities;
-(void)setActivities:(NSArray *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

