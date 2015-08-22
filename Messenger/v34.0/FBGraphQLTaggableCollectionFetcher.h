/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBTaggableCollectionFetcher.h>

@class FBMemPagedDownloadController, FBUserSession, FBGraphQLDownloadRequest, NSString, NSArray, NSMutableSet, FBMutableTaggableCollection;

@interface FBGraphQLTaggableCollectionFetcher : NSObject <FBTaggableCollectionFetcher> {

	FBMemPagedDownloadController* _controller;
	FBUserSession* _session;
	unsigned long long _maxSize;
	FBGraphQLDownloadRequest* _taggableActorRequest;
	NSString* _authorFBID;
	BOOL _hasAuthor;
	unsigned long long numberOfTaggableObjectsSeenSoFar;
	BOOL _deltaSyncFinished;
	NSArray* _newlyAddedTaggableCollection;
	BOOL _isCachedResponse;
	NSMutableSet* _removedGraphQLIDs;
	BOOL _deltaSyncEnabled;
	FBMutableTaggableCollection* _taggableCollection;

}

@property (assign,nonatomic) BOOL deltaSyncEnabled;                                                //@synthesize deltaSyncEnabled=_deltaSyncEnabled - In the implementation block
@property (assign,nonatomic,__weak) FBMutableTaggableCollection * taggableCollection;              //@synthesize taggableCollection=_taggableCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadNextPage;
-(void)fetchAuthor;
-(void)_processIncrementalResults:(id)arg1 error:(id)arg2 ;
-(void)_addTaggableObjectsFilteredByRemovedGraphQLIDs:(id)arg1 ;
-(void)_loadNextPageIfPossible;
-(void)_loadDeltaSyncWithDeltaCursor:(id)arg1 backLoggedTaggableCollection:(id)arg2 ;
-(void)_processDeltaResults:(id)arg1 error:(id)arg2 backLoggedTaggableCollection:(id)arg3 ;
-(void)startOrContinueFetching;
-(id)initWithDownloadController:(id)arg1 taggableCollection:(id)arg2 session:(id)arg3 maxSize:(unsigned long long)arg4 authorFBID:(id)arg5 ;
-(BOOL)deltaSyncEnabled;
-(void)setDeltaSyncEnabled:(BOOL)arg1 ;
-(FBMutableTaggableCollection *)taggableCollection;
-(void)setTaggableCollection:(FBMutableTaggableCollection *)arg1 ;
@end
