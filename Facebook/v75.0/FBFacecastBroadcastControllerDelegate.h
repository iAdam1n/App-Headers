/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFacecastBroadcastControllerDelegate <NSObject>
@required
-(void)facecastBroadcastController:(id)arg1 didFetchBroadcastWithID:(id)arg2;
-(void)facecastBroadcastController:(id)arg1 didFailToFetchBroadcastWithError:(id)arg2;
-(void)facecastBroadcastControllerServerDidForbidBroadcast:(id)arg1;
-(void)facecastBroadcastControllerSpeedTestDidTimeout:(id)arg1 withError:(id)arg2;
-(void)facecastBroadcastControllerSpeedTestRetryTimeout:(id)arg1 withError:(id)arg2;
-(void)facecastBroadcastControllerSpeedTestPassed:(id)arg1;
-(void)facecastBroadcastControllerSpeedTestFailed:(id)arg1;
-(void)facecastBroadcastControllerSessionDidStart:(id)arg1;
-(void)facecastBroadcastController:(id)arg1 sessionDidFinishWithResult:(id)arg2;
-(void)facecastBroadcastController:(id)arg1 sessionDidChangeBitrate:(shared_ptr<FBVideoBroadcastSessionStats>*)arg2;
-(void)facecastBroadcastController:(id)arg1 sessionDidFailWithLoggingInfo:(FBVideoBroadcastSessionLoggingInfo)arg2;
-(void)facecastBroadcastController:(id)arg1 sessionDidLoseConnectionWithReason:(id)arg2 error:(id)arg3;
-(void)facecastBroadcastController:(id)arg1 sessionDidReconnectWithReason:(id)arg2;
-(void)facecastBroadcastControllerSessionDidDropPackets:(id)arg1;
-(void)facecastBroadcastController:(id)arg1 didProcessAudioOfCumulativeDuration:(double)arg2;
-(void)facecastBroadcastControllerDidAddCaptureSessionOutputs:(id)arg1;
-(void)facecastBroadcastController:(id)arg1 didOutputProcessedVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2;

@end
