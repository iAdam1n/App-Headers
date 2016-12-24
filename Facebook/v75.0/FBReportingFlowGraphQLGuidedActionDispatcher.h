/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReportingFlowGuidedActionDispatchingProtocol.h>

@class FBUserSession, NSString;

@interface FBReportingFlowGraphQLGuidedActionDispatcher : NSObject <FBReportingFlowGuidedActionDispatchingProtocol> {

	FBUserSession* _session;
	NSString* _actorID;

}
-(id)initWithUserSession:(id)arg1 actorID:(id)arg2 ;
-(void)performGuidedAction:(id)arg1 nodeID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)performMessageGuidedAction:(id)arg1 nodeID:(id)arg2 completionBlock:(/*^block*/id)arg3 targetFBID:(id)arg4 message:(id)arg5 ;
@end
