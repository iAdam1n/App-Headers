/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBFeedToolboxManagerListenerAnnouncer, FBUserSession, NSString, FBScenePath, NSDictionary, FBFeedCustomizationSet, FBFeedToolbox;

@interface FBFeedToolboxManager : NSObject <FBAccessibilityInvalidationEventsListener> {

	FBFeedToolboxManagerListenerAnnouncer* _announcer;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	unsigned long long _layoutIdiom;
	NSString* _analyticsModule;
	FBScenePath* _scenePath;
	NSDictionary* _optionalDependencies;
	FBFeedCustomizationSet* _feedCustomizationSet;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(FBFeedToolbox *)toolbox;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 layoutIdiom:(unsigned long long)arg4 analyticsModule:(id)arg5 scenePath:(id)arg6 feedCustomizationSet:(id)arg7 ;
-(void)didReceiveAccessibilityInvalidation;
-(id)createToolbox;
-(void)invalidateToolbox;
-(id)init;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
