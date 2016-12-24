/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBMusicPlayerListener.h>

@class NSString;

@interface FBMusicPlayerListenerAnnouncer : FBAnnouncerBase <FBMusicPlayerListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)musicPlayer:(id)arg1 isReadyToPlay:(id)arg2 ;
-(void)musicPlayer:(id)arg1 beganBuffering:(id)arg2 ;
-(void)musicPlayer:(id)arg1 startedPlaying:(id)arg2 duration:(double)arg3 ;
-(void)musicPlayer:(id)arg1 isPlaying:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)musicPlayer:(id)arg1 pausedPlaying:(id)arg2 ;
-(void)musicPlayer:(id)arg1 resumedPlaying:(id)arg2 atTime:(double)arg3 duration:(double)arg4 ;
-(void)musicPlayer:(id)arg1 willStopPlaying:(id)arg2 ;
-(void)musicPlayer:(id)arg1 stoppedPlaying:(id)arg2 ;
-(void)musicPlayer:(id)arg1 completedPlaying:(id)arg2 ;
-(void)musicPlayer:(id)arg1 failedPlaying:(id)arg2 withError:(id)arg3 ;
-(void)musicPlayer:(id)arg1 seekedToTime:(double)arg2 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
