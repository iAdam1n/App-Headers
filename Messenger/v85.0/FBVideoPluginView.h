/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBVideoPlaybackController;


@protocol FBVideoPluginView <FBVideoPlaybackEventListener,FBVideoPluginEventListener>
@property (assign,nonatomic) CGRect videoFrame; 
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
@required
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1;
-(unsigned long long)visibilityOptions;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(id)arg1;

@end
