/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSwipeableFramesLogger
@required
-(void)startedLoadingFramesMetaData;
-(void)finishedLoadingFramesMetaDataWithStatus:(id)arg1;
-(void)startedLoadingFrames;
-(void)finishedLoadingFirstFrame;
-(void)finishedLoadingAllFramesWithStatus:(id)arg1;
-(void)didSwipeFramesToIndex:(unsigned long long)arg1;
-(void)didStartCaptureWithFrameID:(id)arg1 atIndex:(unsigned long long)arg2 numberOfLoadedFrames:(unsigned long long)arg3;
-(void)didTapPreviewNextWithFrameID:(id)arg1 atIndex:(unsigned long long)arg2 numberOfLoadedFrames:(unsigned long long)arg3 isFrontalCamera:(BOOL)arg4 failed:(BOOL)arg5;

@end
