/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IFlurryVideoViewabilityTracked
@property (assign,nonatomic) BOOL isAudioOn; 
@property (assign,nonatomic) BOOL isFullScreen; 
@property (assign,nonatomic) int audioOnAndFullViewInMilliSecs; 
@property (assign,nonatomic) float videoLastPositionInSecs; 
@property (assign,nonatomic) float videoAdPercentVisible; 
@required
-(void)setVideoLastPositionInSecs:(float)arg1;
-(void)setIsAudioOn:(BOOL)arg1;
-(float)videoLastPositionInSecs;
-(BOOL)isAudioOn;
-(int)audioOnAndFullViewInMilliSecs;
-(float)videoAdPercentVisible;
-(void)setVideoAdPercentVisible:(float)arg1;
-(void)setAudioOnAndFullViewInMilliSecs:(int)arg1;
-(BOOL)isFullScreen;
-(void)setIsFullScreen:(BOOL)arg1;

@end
