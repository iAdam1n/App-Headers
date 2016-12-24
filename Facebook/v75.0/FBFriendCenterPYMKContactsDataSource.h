/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFriendCenterPYMKContactsDataSourceDelegate;
@class FBUserSession, NSMutableArray, NSMutableDictionary;

@interface FBFriendCenterPYMKContactsDataSource : NSObject {

	FBUserSession* _session;
	NSMutableArray* _loadedPYMK;
	NSMutableArray* _searchedPYMK;
	NSMutableDictionary* _pymkConsistencyHandles;
	BOOL _isSearchActive;
	id<FBFriendCenterPYMKContactsDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFriendCenterPYMKContactsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)searchWithKeyword:(id)arg1 ;
-(void)_addConsistencyObserverForPerson:(id)arg1 ;
-(void)_pymkFinishedLoading:(id)arg1 ;
-(void)_removeAllLoadedPYMKSuggestions;
-(id)_buildPYMKSuggestionForContactImporterFacebookPerson:(id)arg1 ;
-(void)_addPYMKSuggestion:(id)arg1 ;
-(id)_createSubtextOptionsFromFriendCount:(unsigned long long)arg1 ;
-(void)_pymkPersonChanged:(id)arg1 ;
-(void)_removeConsistencyObserverForPerson:(id)arg1 ;
-(void)_removePYMKSuggestion:(id)arg1 ;
-(void)_updatePYMKSuggestion:(id)arg1 ;
-(void)_removePYMKSuggestion:(id)arg1 inArray:(id)arg2 ;
-(long long)_indexOfPYMKSuggestion:(id)arg1 inArray:(id)arg2 ;
-(void)_updatePYMKSuggestion:(id)arg1 inArray:(id)arg2 ;
-(void)loadPYMKByExcludingIDs:(id)arg1 ;
-(id)loadedPYMK;
-(void)setDelegate:(id<FBFriendCenterPYMKContactsDataSourceDelegate>)arg1 ;
-(id<FBFriendCenterPYMKContactsDataSourceDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
