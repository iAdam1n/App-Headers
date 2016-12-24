/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FB360VideoPlayerNodeDelegate <NSObject>
@required
-(void)videoPlayer:(id)arg1 didUpdatePlaybackTime:(double)arg2;
-(void)videoPlayer:(id)arg1 didUpdateLoadedDuration:(double)arg2;
-(void)videoPlayerDidPlayToEnd:(id)arg1;
-(void)videoPlayer:(id)arg1 didUpdateStallState:(BOOL)arg2;
-(void)videoPlayerDidStartPlayback:(id)arg1;
-(void)videoPlayer:(id)arg1 wasTappedAtPoint:(CGPoint)arg2;
-(void)videoPlayerDidRenderFrame:(id)arg1;
-(void)videoPlayerViewDidMoveSignificantly:(id)arg1;
-(void)videoPlayerViewDidMoveWithDrag:(id)arg1;
-(void)videoPlayerDidUpdateZoomLevelWithPinch:(id)arg1;

@end
