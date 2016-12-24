/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoNodeDelegate <NSObject>
@optional
-(void)videoNode:(id)arg1 didUpdatePlaybackTime:(double)arg2;
-(void)videoNode:(id)arg1 didUpdateLoadedDuration:(double)arg2;
-(void)videoNodeDidPlayToEnd:(id)arg1;
-(void)videoNode:(id)arg1 didUpdateStallState:(BOOL)arg2;
-(void)videoNode:(id)arg1 didUpdatePausedState:(BOOL)arg2;
-(void)videoNode:(id)arg1 willUpdateVolume:(double)arg2;
-(void)videoNodeDidStartPlayback:(id)arg1;
-(BOOL)videoNodeShouldUseStateDispatchQueue;

@required
-(void)videoNodeDidDisplayPreviewImage:(id)arg1;

@end
