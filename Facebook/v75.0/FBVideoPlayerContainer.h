/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBVideoPlayerContainer <NSObject>
@property (nonatomic,readonly) unsigned long long layoutIdiom; 
@property (nonatomic,copy,readonly) NSString * groupTokenID; 
@property (assign,nonatomic) long long playbackSetting; 
@property (nonatomic,copy,readonly) NSString * hostingVideoID; 
@required
-(id)videoPlaybackController;
-(void)didDisplay;
-(void)stopPlayingVideo;
-(void)didUpdatePresentedVideoVisibleRatio:(double)arg1;
-(void)createAndSetViewController:(/*^block*/id)arg1;
-(void)representViewControllerWithBlock:(/*^block*/id)arg1;
-(void)createAndPresentViewController:(/*^block*/id)arg1 source:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 options:(id)arg4;
-(unsigned long long)layoutIdiom;
-(NSString *)groupTokenID;
-(long long)playbackSetting;
-(void)setPlaybackSetting:(long long)arg1;
-(NSString *)hostingVideoID;
-(BOOL)isPresented;

@end
