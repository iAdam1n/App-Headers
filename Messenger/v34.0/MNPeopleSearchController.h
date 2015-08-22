/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBContactsSearchDelegate.h>
#import <Messenger/MNPeopleTableSelectionDelegate.h>
#import <Messenger/FBFriendListMonitorListener.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNPeopleCellDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAvatarImageDecorating, MNPeopleSearchControllerDelegate, MNPeopleSearchControllerRTCDelegate;
@class FBAnalytics, FBCombinedContactsSearch, NSString, FBMessengerSyncEngineManager, MNPeopleSearchResultsDataSource, MNTableViewCellStyle, MNPeopleTableDelegate;

@interface MNPeopleSearchController : NSObject <FBContactsSearchDelegate, MNPeopleTableSelectionDelegate, FBFriendListMonitorListener, UITableViewDelegate, MNPeopleCellDelegate, FBClassProvidable> {

	FBAnalytics* _analytics;
	FBCombinedContactsSearch* _contactsSearch;
	NSString* _analyticsSearchSessionId;
	FBMessengerSyncEngineManager* _syncEngineManager;
	id<MNAvatarImageDecorating> _avatarImageDecorating;
	BOOL _isObserving;
	id<MNPeopleSearchControllerDelegate> _delegate;
	id<MNPeopleSearchControllerRTCDelegate> _rtcDelegate;
	MNPeopleSearchResultsDataSource* _searchResultsDataSource;
	MNTableViewCellStyle* _peopleCellStyle;
	MNPeopleTableDelegate* _searchTableDelegate;

}

@property (assign,nonatomic,__weak) id<MNPeopleSearchControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchControllerRTCDelegate> rtcDelegate;               //@synthesize rtcDelegate=_rtcDelegate - In the implementation block
@property (nonatomic,readonly) MNPeopleSearchResultsDataSource * searchResultsDataSource;              //@synthesize searchResultsDataSource=_searchResultsDataSource - In the implementation block
@property (nonatomic,retain) MNTableViewCellStyle * peopleCellStyle;                                   //@synthesize peopleCellStyle=_peopleCellStyle - In the implementation block
@property (nonatomic,readonly) MNPeopleTableDelegate * searchTableDelegate;                            //@synthesize searchTableDelegate=_searchTableDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didWriteUpdatesToSyncStoreInvalidatingFriendList;
-(void)updateLoadingIndicator;
-(void)didPickResult:(id)arg1 ;
-(void)didFinishSearch:(id)arg1 ;
-(BOOL)shouldHideResult:(id)arg1 ;
-(void)addScrollingListener:(id)arg1 ;
-(MNTableViewCellStyle *)peopleCellStyle;
-(void)configureWithPeopleCellStyle:(id)arg1 ;
-(void)startSearch;
-(void)removeScrollingListener:(id)arg1 ;
-(id)_newCellWithReuseIdentifier:(id)arg1 ;
-(void)setPeopleCellStyle:(MNTableViewCellStyle *)arg1 ;
-(void)bindToTableView:(id)arg1 ;
-(void)unbindFromTableView:(id)arg1 ;
-(id<MNPeopleSearchControllerRTCDelegate>)rtcDelegate;
-(void)setRtcDelegate:(id<MNPeopleSearchControllerRTCDelegate>)arg1 ;
-(MNPeopleTableDelegate *)searchTableDelegate;
-(void)contextTappedForConversationContact:(id)arg1 ;
-(void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)inviteButtonTappedForConversationContact:(id)arg1 ;
-(void)selectedResult:(id)arg1 withAnalyticsExtras:(id)arg2 ;
-(void)startObserving;
-(void)dealloc;
-(void)setDelegate:(id<MNPeopleSearchControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<MNPeopleSearchControllerDelegate>)delegate;
-(MNPeopleSearchResultsDataSource *)searchResultsDataSource;
-(void)stopObserving;
-(void)cancelSearch;
-(void)search;
@end
