/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBEventGuestMessageDataSourceProtocol.h>

@protocol FBEventGuestMessageDataSourceDelegate;
@class NSArray, FBEventGuestlistDataSourceFetcher, FBMemEvent, FBUserSession, NSString;

@interface FBEventGuestMessageDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, FBEventGuestMessageDataSourceProtocol> {

	NSArray* _titles;
	NSArray* _fetchers;
	FBEventGuestlistDataSourceFetcher* _currentFetcher;
	FBMemEvent* _event;
	FBUserSession* _session;
	BOOL _isLoading;
	id<FBEventGuestMessageDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventGuestMessageDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allGuestListUsers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateLatestFetcherIfNecessary;
-(NSArray *)allGuestListUsers;
-(long long)adjustedPageSizeForDevice;
-(id)_guestListUsersForFetcher:(id)arg1 ;
-(id)seenStringAtIndexPath:(id)arg1 ;
-(id)memberEdgeAtIndexPath:(id)arg1 ;
-(id)initWithSession:(id)arg1 event:(id)arg2 titles:(id)arg3 fetchers:(id)arg4 ;
-(BOOL)hasSeenState;
-(void)cancelActiveRequests;
-(void)setDelegate:(id<FBEventGuestMessageDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBEventGuestMessageDataSourceDelegate>)delegate;
-(id)memberAtIndexPath:(id)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
@end
