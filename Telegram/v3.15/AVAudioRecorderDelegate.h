/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioRecorderDelegate <NSObject>
@optional
-(void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)audioRecorderBeginInterruption:(id)arg1;
-(void)audioRecorderEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioRecorderEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioRecorderEndInterruption:(id)arg1;

@end
