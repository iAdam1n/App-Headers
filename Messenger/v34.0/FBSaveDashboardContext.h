/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBNavigationCoordinator, FBIntentHandler, FBSavedItemFeedbackHandler;
@class NSMutableDictionary, FBUserSession, NSString, FBScenePath;

@interface FBSaveDashboardContext : NSObject {

	NSMutableDictionary* _optionalDependencies;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	unsigned long long _layoutIdiom;
	NSString* _analyticsModule;
	FBScenePath* _scenePath;
	id<FBSavedItemFeedbackHandler> _savedItemFeedbackHandler;

}

@property (nonatomic,readonly) FBUserSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                           //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                           //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                              //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                             //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                     //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSavedItemFeedbackHandler> savedItemFeedbackHandler;              //@synthesize savedItemFeedbackHandler=_savedItemFeedbackHandler - In the implementation block
+(id)toolboxWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 analyticsModule:(id)arg4 scenePath:(id)arg5 feedbackHandler:(id)arg6 ;
-(NSString *)analyticsModule;
-(FBScenePath *)scenePath;
-(unsigned long long)layoutIdiom;
-(id<FBIntentHandler>)intentHandler;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 analyticsModule:(id)arg4 scenePath:(id)arg5 feedbackHandler:(id)arg6 ;
-(id<FBSavedItemFeedbackHandler>)savedItemFeedbackHandler;
-(FBUserSession *)session;
@end

