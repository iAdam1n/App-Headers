/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebRTCAdminDeltaHandler <NSObject>
@required
-(void)handleDeltaWithCallerFbid:(id)arg1 calleeFbid:(id)arg2 startTime:(id)arg3 duration:(double)arg4 hasAnswered:(BOOL)arg5 isVideoCall:(BOOL)arg6;
-(void)handleDeltaVoiceMailCallerFbid:(id)arg1 voiceMailFile:(id)arg2 voiceMailUrl:(id)arg3 voiceMailDuration:(double)arg4;

@end
