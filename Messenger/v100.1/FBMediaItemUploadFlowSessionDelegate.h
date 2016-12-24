/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaItemUploadFlowSessionDelegate
@required
-(void)mediaItemUploadFlowSessionRestart:(id)arg1 newSession:(id)arg2;
-(void)mediaItemUploadFlowSessionDidStart:(id)arg1;
-(void)mediaItemUploadFlowSessionDidFinish:(id)arg1 fbid:(id)arg2;
-(void)mediaItemUploadFlowSessionDidFinishProcessing:(id)arg1;
-(void)mediaItemUploadFlowSessionDidCancel:(id)arg1 processingFinished:(BOOL)arg2;
-(void)mediaItemUploadFlowSession:(id)arg1 didFailWithError:(id)arg2 processingFinished:(BOOL)arg3;
-(void)mediaItemUploadFlowSession:(id)arg1 didUpdateToProgress:(double)arg2 fromProgress:(double)arg3;
-(void)mediaItemUploadFlowSessionDidStartProcessing:(id)arg1;

@end
