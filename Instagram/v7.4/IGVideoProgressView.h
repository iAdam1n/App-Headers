/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGVideoInfo, UIView, NSMutableArray, UIImageView, CADisplayLink;

@interface IGVideoProgressView : UIView {

	BOOL _lastClipIsSelected;
	BOOL _videoRecordingEnabled;
	BOOL _isLive;
	BOOL _shouldExpandLastClipToFillAllWidth;
	/*^block*/id _progressBlock;
	IGVideoInfo* _videoInfo;
	UIView* _minDurationView;
	NSMutableArray* _clipBarViews;
	UIImageView* _runningTimeBarView;
	UIView* _blinkerView;
	CADisplayLink* _displayLink;
	long long _counter;

}

@property (nonatomic,copy) id progressBlock;                                       //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) BOOL lastClipIsSelected;                              //@synthesize lastClipIsSelected=_lastClipIsSelected - In the implementation block
@property (assign,nonatomic) BOOL videoRecordingEnabled;                           //@synthesize videoRecordingEnabled=_videoRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL isLive;                                          //@synthesize isLive=_isLive - In the implementation block
@property (assign,nonatomic) BOOL shouldExpandLastClipToFillAllWidth;              //@synthesize shouldExpandLastClipToFillAllWidth=_shouldExpandLastClipToFillAllWidth - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                              //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,retain) UIView * minDurationView;                             //@synthesize minDurationView=_minDurationView - In the implementation block
@property (nonatomic,retain) NSMutableArray * clipBarViews;                        //@synthesize clipBarViews=_clipBarViews - In the implementation block
@property (nonatomic,retain) UIImageView * runningTimeBarView;                     //@synthesize runningTimeBarView=_runningTimeBarView - In the implementation block
@property (nonatomic,retain) UIView * blinkerView;                                 //@synthesize blinkerView=_blinkerView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                          //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) long long counter;                                    //@synthesize counter=_counter - In the implementation block
+(double)defaultHeight;
-(BOOL)videoRecordingEnabled;
-(void)setVideoRecordingEnabled:(BOOL)arg1 ;
-(void)setIsLive:(BOOL)arg1 ;
-(void)onClipAdded:(id)arg1 ;
-(IGVideoInfo *)videoInfo;
-(BOOL)lastClipIsSelected;
-(void)setLastClipIsSelected:(BOOL)arg1 ;
-(void)removeLastClip;
-(void)addClip:(id)arg1 ;
-(void)setShouldExpandLastClipToFillAllWidth:(BOOL)arg1 ;
-(CGPoint)blinkerCenter;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(UIView *)minDurationView;
-(void)reloadAllClips;
-(id)barImageOfType:(long long)arg1 ;
-(UIView *)blinkerView;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(UIImageView *)runningTimeBarView;
-(void)setRunningTime:(double)arg1 ;
-(void)updateBlinker;
-(NSMutableArray *)clipBarViews;
-(BOOL)shouldExpandLastClipToFillAllWidth;
-(void)setMinDurationView:(UIView *)arg1 ;
-(void)setClipBarViews:(NSMutableArray *)arg1 ;
-(void)setRunningTimeBarView:(UIImageView *)arg1 ;
-(void)setBlinkerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(long long)counter;
-(void)setCounter:(long long)arg1 ;
-(BOOL)isLive;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
@end

