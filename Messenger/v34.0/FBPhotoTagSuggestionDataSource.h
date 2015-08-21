/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAvatarTaggingSectionDataSource.h>
#import <Messenger/FBAvatarTaggingSectionDataSourceDelegate.h>

@protocol FBTableViewMutating, FBPhotoTagSuggestionDataSourceDelegate, FBAvatarTaggingSectionDataSource;
@class FBMemFaceBox, NSArray, NSString;

@interface FBPhotoTagSuggestionDataSource : NSObject <FBAvatarTaggingSectionDataSource, FBAvatarTaggingSectionDataSourceDelegate> {

	BOOL _hasTimeout;
	BOOL _failSuggestionDataSource;
	id<FBTableViewMutating> _tableViewMutator;
	id<FBPhotoTagSuggestionDataSourceDelegate> _delegate;
	unsigned long long _state;
	FBMemFaceBox* _faceBox;
	NSArray* _suggestedAvatars;
	id<FBAvatarTaggingSectionDataSource> _fallbackDataSource;
	NSString* _searchText;
	double _initTime;
	NSArray* _excludeFBIDs;

}

@property (assign,nonatomic,__weak) id<FBPhotoTagSuggestionDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL useFallbackDataSource; 
@property (getter=isFetchingResults,nonatomic,readonly) BOOL fetchingResults; 
@property (nonatomic,retain) FBMemFaceBox * faceBox;                                                  //@synthesize faceBox=_faceBox - In the implementation block
@property (nonatomic,retain) NSArray * suggestedAvatars;                                              //@synthesize suggestedAvatars=_suggestedAvatars - In the implementation block
@property (nonatomic,retain) id<FBAvatarTaggingSectionDataSource> fallbackDataSource;                 //@synthesize fallbackDataSource=_fallbackDataSource - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                     //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) BOOL failSuggestionDataSource;                                           //@synthesize failSuggestionDataSource=_failSuggestionDataSource - In the implementation block
@property (assign,nonatomic) double initTime;                                                         //@synthesize initTime=_initTime - In the implementation block
@property (nonatomic,retain) NSArray * excludeFBIDs;                                                  //@synthesize excludeFBIDs=_excludeFBIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;                                //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(void)clearSearchText;
-(void)setExcludeFBIDs:(NSArray *)arg1 ;
-(void)_setupSuggestedAvatarsWithTagSuggestionsConnection:(id)arg1 ;
-(void)_logFaceRecEvent:(id)arg1 withDelay:(double)arg2 ;
-(void)_logFaceRecEvent:(id)arg1 numberOfSuggestion:(unsigned long long)arg2 withDelay:(double)arg3 ;
-(void)_didReceiveTaggablesChange;
-(BOOL)failSuggestionDataSource;
-(void)setFailSuggestionDataSource:(BOOL)arg1 ;
-(double)initTime;
-(void)dataSourceDidFinishFetchingResults:(id)arg1 ;
-(id<FBAvatarTaggingSectionDataSource>)fallbackDataSource;
-(BOOL)useFallbackDataSource;
-(BOOL)isFetchingResults;
-(void)dataSource:(id)arg1 didSearchAvatars:(id)arg2 forText:(id)arg3 ;
-(BOOL)_hasExcludeFBID:(id)arg1 ;
-(void)setSuggestedAvatars:(NSArray *)arg1 ;
-(id)avatarAtIndexPath:(id)arg1 ;
-(id)fetchOrInsertFullAvatarAtIndexPath:(id)arg1 ;
-(id)loggingSourceForAvatarAtIndexPath:(id)arg1 ;
-(id)initWithFaceBox:(id)arg1 fallbackDataSource:(id)arg2 excludeFBIDs:(id)arg3 delegate:(id)arg4 ;
-(void)setFaceBox:(FBMemFaceBox *)arg1 ;
-(FBMemFaceBox *)faceBox;
-(NSArray *)suggestedAvatars;
-(void)setFallbackDataSource:(id<FBAvatarTaggingSectionDataSource>)arg1 ;
-(void)setInitTime:(double)arg1 ;
-(NSArray *)excludeFBIDs;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setDelegate:(id<FBPhotoTagSuggestionDataSourceDelegate>)arg1 ;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBPhotoTagSuggestionDataSourceDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)searchText;
-(BOOL)setTimeout:(double)arg1 ;
@end

