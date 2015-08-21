/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/TFNAdaptiveWizardFlowDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1TypeaheadUserTableRowHost.h>

@protocol T1DirectMessageTopUsersViewControllerDelegate;
@class TFNGenericItem, TFNActivityIndicatorItem, T1TypeaheadUserTableRowAdapter, T1CallToActionAdapter, NSArray, TFNTwitterAccount, NSString;

@interface T1DirectMessageTopUsersViewController : TFNItemsDataViewController <TFNAdaptiveWizardFlowDelegate, TFNTwitterAuthenticated, T1TypeaheadUserTableRowHost> {

	TFNGenericItem* _headingItem;
	TFNActivityIndicatorItem* _activityIndicatorItem;
	id _startConversationItem;
	T1TypeaheadUserTableRowAdapter* _userAdapter;
	T1CallToActionAdapter* _callToActionTableRowAdapter;
	NSArray* _users;
	BOOL _emptyInboxMode;
	BOOL _hasFriends;
	TFNTwitterAccount* _account;
	NSString* _headerTitle;
	id<T1DirectMessageTopUsersViewControllerDelegate> _delegate;
	long long _sortType;

}

@property (nonatomic,copy) NSString * headerTitle;                                                           //@synthesize headerTitle=_headerTitle - In the implementation block
@property (assign,nonatomic,__weak) id<T1DirectMessageTopUsersViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL emptyInboxMode;                                                            //@synthesize emptyInboxMode=_emptyInboxMode - In the implementation block
@property (assign,nonatomic) BOOL hasFriends;                                                                //@synthesize hasFriends=_hasFriends - In the implementation block
@property (assign,nonatomic) long long sortType;                                                             //@synthesize sortType=_sortType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                    //@synthesize account=_account - In the implementation block
-(id)scribePage;
-(void)_updateSections;
-(void)flowDidComplete:(id)arg1 ;
-(void)typeaheadUserAdapter:(id)arg1 didSelectUser:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_updateUsers;
-(void)_prefetchDidUpdate;
-(id)_descendingOrderedInboxUsersAsTypeaheadUsers;
-(long long)_inboxDescendingCompareTypeaheadUser:(id)arg1 toTypeaheadUser:(id)arg2 descendingOrderedParticipantIDStrings:(id)arg3 ;
-(long long)_defaultCompareTypeaheadUser:(id)arg1 toTypeaheadUser:(id)arg2 descendingOrderedParticipantIDStrings:(id)arg3 ;
-(void)setEmptyInboxMode:(BOOL)arg1 ;
-(BOOL)emptyInboxMode;
-(BOOL)hasFriends;
-(void)setHasFriends:(BOOL)arg1 ;
-(void)setDelegate:(id<T1DirectMessageTopUsersViewControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<T1DirectMessageTopUsersViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(void)setSortType:(long long)arg1 ;
-(long long)sortType;
@end

