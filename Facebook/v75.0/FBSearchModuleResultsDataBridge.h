/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSearchResultsTabConfigDownloaderDelegate.h>
#import <Facebook/FBSearchGeneralDataProviderDelegate.h>

@protocol FBSearchModuleResultsDataBridgeDelegate;
@class FBUserSession, FBScenePath, FBSearchResultsStore, FBSearchResultsAnnouncers, FBSerpConfig, FBSearchGeneralDataProvider, NSString;

@interface FBSearchModuleResultsDataBridge : NSObject <FBSearchResultsTabConfigDownloaderDelegate, FBSearchGeneralDataProviderDelegate> {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBSearchResultsStore* _masterResultsStore;
	FBSearchResultsAnnouncers* _announcers;
	FBSerpConfig* _serpConfig;
	FBSearchGeneralDataProvider* _resultsDataProvider;
	id<FBSearchModuleResultsDataBridgeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSearchModuleResultsDataBridgeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadTail;
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(id)resultsSessionID;
-(id)verticalToLog;
-(id)postSearchIntentLog;
-(id)resultsSessionLoggingUnitId;
-(id)currentFilterTypeSets;
-(id)queryRewriteModel;
-(id)appliedFilters;
-(void)didReceiveInitalContentWithAppliedFilters:(id)arg1 isOfflineContent:(BOOL)arg2 ;
-(id)spellingCorrectionModel;
-(id)clientModuleRolesToLog;
-(BOOL)waitForClientModule;
-(BOOL)hasClientModule;
-(void)didUpdateFromState:(long long)arg1 toState:(long long)arg2 error:(id)arg3 ;
-(BOOL)hasAppliedFilters;
-(BOOL)searchResultsIsEmpty;
-(BOOL)_searchResultsHasMoreData;
-(id)filteredSemantic;
-(void)loadHeadIfEmpty;
-(id)searchResultsStoreRootQuery:(id)arg1 ;
-(id)initWithSession:(id)arg1 serpConfig:(id)arg2 announcers:(id)arg3 scenePath:(id)arg4 ;
-(void)releaseAllCachedData;
-(id)edgesToLog;
-(void)downloader:(id)arg1 didLoadTabConfigs:(id)arg2 ;
-(id)lastGraphSearchQuery;
-(id)lastGraphQLQuery;
-(id)downloaderFilters;
-(void)setDelegate:(id<FBSearchModuleResultsDataBridgeDelegate>)arg1 ;
-(id<FBSearchModuleResultsDataBridgeDelegate>)delegate;
-(void)retry;
@end
