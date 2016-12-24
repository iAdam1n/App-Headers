/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBVideoPlaybackEventListener.h>

@class UILabel, FBProgressView, UIImageView, FBMemVideo, NSString;

@interface FBInstreamAdVideoAdOverlayView : UIView <FBVideoPlaybackEventListener> {

	UILabel* _title;
	UILabel* _countdownMessage;
	FBProgressView* _progressBar;
	UIImageView* _globeIcon;
	FBMemVideo* _video;
	BOOL _isInFullscreen;
	double _totalTime;
	double _currentTime;

}

@property (assign,nonatomic) double currentTime;                    //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) BOOL isInFullscreen;                   //@synthesize isInFullscreen=_isInFullscreen - In the implementation block
@property (assign,nonatomic) double totalTime;                      //@synthesize totalTime=_totalTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleTextWithVideo:(id)arg1 ;
+(id)compressedCountdownMessageWithCountdownValue:(long long)arg1 ;
+(id)countdownMessageWithVideo:(id)arg1 countdownValue:(long long)arg2 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)setIsInFullscreen:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 isInFullscreen:(BOOL)arg2 ;
-(BOOL)isInFullscreen;
-(void)layoutSubviews;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)setTotalTime:(double)arg1 ;
-(double)totalTime;
@end
