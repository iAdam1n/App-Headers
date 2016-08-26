/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAudioRecorderDelegate <NSObject>
@required
-(BOOL)audioRecorderShouldRecordAsVoicemail:(id)arg1;
-(void)audioRecorder:(id)arg1 didRecordAudio:(id)arg2;
-(void)audioRecorder:(id)arg1 reachMaxDuration:(id)arg2;
-(void)audioRecorder:(id)arg1 updateVolume:(float)arg2;
-(void)audioRecorder:(id)arg1 updateTimestamp:(double)arg2;
-(void)audioRecorderStartFailed:(id)arg1;
-(void)audioRecorderDidStart:(id)arg1;
-(void)audioRecorderDidCancel:(id)arg1;
-(void)audioRecorderPermissionDenied:(id)arg1;

@end
