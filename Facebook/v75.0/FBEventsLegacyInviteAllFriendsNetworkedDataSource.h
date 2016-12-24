/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollationManagerDelegate.h>
#import <Facebook/FBEventsLegacyInviteNetworkedDataSourceProtocol.h>
#import <Facebook/FBEventsLegacyInviteSearchableDataSourceProtocol.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBEntity, FBEventsLegacyInviteDataSourceDelegateProtocolFBEventsPreviouslyInvitedDelegateProtocol, FBEventsInviteSearchableDataSourceDelegateProtocol;
@class UITableView, FBUserSession, FBMemAvatarTaggingSearchProvider, NSArray, FBMemEvent, FBEventsInviteCandidateCollationManager, NSString;

@interface FBEventsLegacyInviteAllFriendsNetworkedDataSource : NSObject <FBCollationManagerDelegate, FBEventsLegacyInviteNetworkedDataSourceProtocol, FBEventsLegacyInviteSearchableDataSourceProtocol, UITableViewDelegate> {

	UITableView* _tableView;
	FBUserSession* _session;
	id<FBEntity> _target;
	FBMemAvatarTaggingSearchProvider* _searchProvider;
	NSArray* _searchResults;
	FBMemEvent* _event;
	BOOL _isLoading;
	id<FBEventsLegacyInviteDataSourceDelegateProtocol><FBEventsPreviouslyInvitedDelegateProtocol> _delegate;
	id<FBEventsInviteSearchableDataSourceDelegateProtocol> _searchDelegate;
	FBEventsInviteCandidateCollationManager* _collationManager;
	NSArray* _inviteCandidates;

}

@property (nonatomic,copy) NSArray * inviteCandidates;                                                                                                   //@synthesize inviteCandidates=_inviteCandidates - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsLegacyInviteDataSourceDelegateProtocol><FBEventsPreviouslyInvitedDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsInviteSearchableDataSourceDelegateProtocol> searchDelegate;                                               //@synthesize searchDelegate=_searchDelegate - In the implementation block
@property (nonatomic,readonly) FBEventsInviteCandidateCollationManager * collationManager;                                                               //@synthesize collationManager=_collationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleInviteCandidateReponse:(id)arg1 isLoading:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setInviteCandidates:(id)arg1 collationCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setSearchResults:(id)arg1 forText:(id)arg2 ;
-(void)_handleEventInviteCandidateResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleViewerCandidateResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 event:(id)arg2 tableView:(id)arg3 ;
-(FBEventsInviteCandidateCollationManager *)collationManager;
-(id)inviteCandidateAtIndexPath:(id)arg1 ;
-(NSArray *)inviteCandidates;
-(void)setInviteCandidates:(NSArray *)arg1 ;
-(void)candidateSearchWithText:(id)arg1 ;
-(id)searchedCandidateAtIndexPath:(id)arg1 ;
-(void)setDelegate:(id<FBEventsLegacyInviteDataSourceDelegateProtocol><FBEventsPreviouslyInvitedDelegateProtocol>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<FBEventsLegacyInviteDataSourceDelegateProtocol><FBEventsPreviouslyInvitedDelegateProtocol>)delegate;
-(void)setSearchDelegate:(id<FBEventsInviteSearchableDataSourceDelegateProtocol>)arg1 ;
-(id<FBEventsInviteSearchableDataSourceDelegateProtocol>)searchDelegate;
-(id)searchResults;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
@end
