/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBWebRTCCallInitiator, FBMessengerURLBuilder, FBWebRTCCallTabViewControllerPresenter, NSString;

@interface FBWebRTCUrlHandler : NSObject <FBViewerContextClassProvidable> {

	FBWebRTCCallInitiator* _callInitiator;
	FBMessengerURLBuilder* _urlBuilder;
	FBWebRTCCallTabViewControllerPresenter* _webRTCCallTabViewControllerPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)canOpenURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)openURL:(id)arg1 sourceApplication:(id)arg2 ;
-(id)initWithWebRTCCallTabViewControllerPresenter:(id)arg1 webRTCCallInitiator:(id)arg2 messengerURLBuilder:(id)arg3 ;
-(BOOL)_isVoipUrl:(id)arg1 ;
-(BOOL)_isSourceApplicationAllowed:(id)arg1 ;
-(id)_getTriggerFromParameters:(id)arg1 ;
-(id)_getCallTypeFromParameters:(id)arg1 ;
-(unsigned long long)_getCallActionType:(id)arg1 callType:(id)arg2 ;
-(BOOL)_isMessengerCallActionType:(unsigned long long)arg1 ;
-(id)_getUserIdFromUrl:(id)arg1 ;
-(void)_startVoipCallWithUser:(id)arg1 trigger:(id)arg2 isVideoCall:(BOOL)arg3 ;
-(void)_openCallLogWithParams:(id)arg1 ;
@end
