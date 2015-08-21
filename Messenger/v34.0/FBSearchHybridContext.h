/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSearchHybridContextProtocol.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class NSDictionary, FBUserSession, FBScenePath, NSString, FBSearchTypeaheadActivityListenerAnnouncer, FBSearchResultsActivityListenerAnnouncer, FBSearchSession;

@interface FBSearchHybridContext : NSObject <FBSearchHybridContextProtocol> {

	BOOL _hasChronoSortOption;
	NSDictionary* _optionalDependencies;
	FBUserSession* _session;
	FBScenePath* _scenePath;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSString* _typeaheadSessionID;
	FBSearchTypeaheadActivityListenerAnnouncer* _typeaheadActivityAnnouncer;
	id<FBIntentHandler> _intentHandler;
	FBSearchResultsActivityListenerAnnouncer* _resultsActivityAnnouncer;
	NSString* _resultsSessionID;
	unsigned long long _resultType;
	NSString* _verticalToLog;
	FBSearchSession* _searchSession;
	NSString* _preferredContentSizeCategory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBUserSession * session;                                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                              //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                                    //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                                    //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory;                                         //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID;                                                   //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (nonatomic,readonly) FBSearchTypeaheadActivityListenerAnnouncer * typeaheadActivityAnnouncer;              //@synthesize typeaheadActivityAnnouncer=_typeaheadActivityAnnouncer - In the implementation block
@property (nonatomic,readonly) FBSearchResultsActivityListenerAnnouncer * resultsActivityAnnouncer;                  //@synthesize resultsActivityAnnouncer=_resultsActivityAnnouncer - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultsSessionID;                                                     //@synthesize resultsSessionID=_resultsSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * verticalToLog;                                                        //@synthesize verticalToLog=_verticalToLog - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                                                        //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) FBSearchSession * searchSession;                                                      //@synthesize searchSession=_searchSession - In the implementation block
-(FBScenePath *)scenePath;
-(id<FBIntentHandler>)intentHandler;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(NSString *)typeaheadSessionID;
-(NSString *)verticalToLog;
-(NSString *)resultsSessionID;
-(FBSearchSession *)searchSession;
-(id)optionalDependencyWithIdentifier:(id)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 typeaheadSessionId:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 typeaheadActivityAnnouncer:(id)arg6 resultsActivityAnnouncer:(id)arg7 resultsSessionID:(id)arg8 resultType:(unsigned long long)arg9 verticalToLog:(id)arg10 hasChronoSortOption:(BOOL)arg11 preferredContentSizeCategory:(id)arg12 optionalDependencies:(id)arg13 ;
-(FBSearchResultsActivityListenerAnnouncer *)resultsActivityAnnouncer;
-(void)updateResultsSessionId:(id)arg1 ;
-(FBSearchTypeaheadActivityListenerAnnouncer *)typeaheadActivityAnnouncer;
-(NSString *)preferredContentSizeCategory;
-(FBUserSession *)session;
-(unsigned long long)resultType;
@end

