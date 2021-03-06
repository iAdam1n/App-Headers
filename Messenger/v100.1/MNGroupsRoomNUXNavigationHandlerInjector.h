/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, MNGroupsRoomNUXStateController, MNGroupsRoomNUXViewController, MNNavigationCoordinator, NSString;

@interface MNGroupsRoomNUXNavigationHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNGroupsRoomNUXStateController* _roomNUXStateController;
	MNGroupsRoomNUXViewController* _roomNUXViewController;
	MNNavigationCoordinator* _navigationCoordinator;

}

@property (nonatomic,readonly) MNGroupsRoomNUXStateController * roomNUXStateController;              //@synthesize roomNUXStateController=_roomNUXStateController - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomNUXViewController * roomNUXViewController;                //@synthesize roomNUXViewController=_roomNUXViewController - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                      //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNGroupsRoomNUXViewController *)roomNUXViewController;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNGroupsRoomNUXStateController *)roomNUXStateController;
@end

