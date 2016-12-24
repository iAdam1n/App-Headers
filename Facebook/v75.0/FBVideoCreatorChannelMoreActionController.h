/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoCreatorChannelMoreActionControllerDelegate, FBNavigationCoordinator, FBQueriedNodeFieldsProtocol, FBIntentHandler;
@class FBMemModelObject, FBScenePath, FBUserSession;

@interface FBVideoCreatorChannelMoreActionController : NSObject {

	id<FBVideoCreatorChannelMoreActionControllerDelegate> _delegate;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBMemModelObject*<FBQueriedNodeFieldsProtocol> _publisher;
	FBScenePath* _scenePath;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;

}
-(id)_actionItemsForMoreSheet;
-(void)_dismissActionSheet;
-(void)_sharePublisher;
-(void)_followPublisher;
-(void)_toggleSubscribePublisher;
-(void)_unfollowPublisher;
-(void)_reportPublisher;
-(id)_publisherAsAChannel;
-(id)initWithPublisher:(id)arg1 delegate:(id)arg2 scenePath:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 session:(id)arg6 ;
-(id)actionSheetToPresent;
@end
