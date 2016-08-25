/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADVideoControllerDelegate;
@class GADAdView;

@interface GADVideoController : NSObject {

	GADAdView* _adView;
	BOOL _videoMuted;
	BOOL _startMuted;
	BOOL _hasVideoContent;
	id<GADVideoControllerDelegate> _delegate;
	unsigned long long _videoPlaybackState;
	double _videoDuration;
	double _currentPlaybackTime;

}

@property (assign,nonatomic,__weak) id<GADVideoControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long videoPlaybackState;                       //@synthesize videoPlaybackState=_videoPlaybackState - In the implementation block
@property (assign,nonatomic) double videoDuration;                                        //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime;                                  //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,nonatomic) BOOL videoMuted;                                             //@synthesize videoMuted=_videoMuted - In the implementation block
@property (assign,nonatomic) BOOL startMuted;                                             //@synthesize startMuted=_startMuted - In the implementation block
@property (assign,nonatomic) BOOL hasVideoContent;                                        //@synthesize hasVideoContent=_hasVideoContent - In the implementation block
-(void)setHasVideoContent:(BOOL)arg1 ;
-(void)setVideoPlaybackState:(unsigned long long)arg1 ;
-(void)setVideoMuted:(BOOL)arg1 ;
-(void)setStartMuted:(BOOL)arg1 ;
-(unsigned long long)videoPlaybackState;
-(BOOL)videoMuted;
-(BOOL)startMuted;
-(BOOL)hasVideoContent;
-(void)setDelegate:(id<GADVideoControllerDelegate>)arg1 ;
-(id<GADVideoControllerDelegate>)delegate;
-(void)pause;
-(void)setMute:(BOOL)arg1 ;
-(double)videoDuration;
-(void)setVideoDuration:(double)arg1 ;
-(void)play;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(id)initWithAdView:(id)arg1 ;
@end

