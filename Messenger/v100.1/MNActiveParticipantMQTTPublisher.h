/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNActiveParticipantSetObserver.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBMQTTChannelCoordinating;
@class MNActiveParticipantSet, FBUserSession, NSString;

@interface MNActiveParticipantMQTTPublisher : NSObject <MNActiveParticipantSetObserver, FBViewerContextClassProvidable> {

	MNActiveParticipantSet* _activeUserSet;
	id<FBMQTTChannelCoordinating> _mqttChannelCoordinator;
	FBUserSession* _session;
	BOOL _isStarted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)startWithMQTTChannelCoordinator:(id)arg1 ;
-(void)didUpdateActiveUserSet:(id)arg1 toContainUserIds:(id)arg2 ;
-(id)initWithActiveUserSet:(id)arg1 session:(id)arg2 ;
-(void)sendMQTTRequest:(id)arg1 ;
-(void)dealloc;
-(void)stop;
@end
