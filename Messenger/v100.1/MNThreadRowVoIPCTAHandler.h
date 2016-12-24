/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadRowCTAHandling.h>

@class FBWebRTCCallStarter, MNUserStore, NSString;

@interface MNThreadRowVoIPCTAHandler : NSObject <FBClassProvidable, MNThreadRowCTAHandling> {

	FBWebRTCCallStarter* _callStarter;
	MNUserStore* _userStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleAction:(id)arg1 inViewModel:(id)arg2 ;
-(void)_startCallToUserId:(id)arg1 audioCallTrigger:(id)arg2 videoCallTrigger:(id)arg3 ;
-(void)_joinCallWithGroupThreadProperties:(id)arg1 serverInfoData:(id)arg2 callTrigger:(id)arg3 videoTrigger:(id)arg4 isVideo:(BOOL)arg5 ;
-(void)_callWithPromptToUser:(id)arg1 audioCallTrigger:(id)arg2 videoCallTrigger:(id)arg3 ;
@end
