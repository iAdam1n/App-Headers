/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPChatViewModel.h>

@interface SKPVoiceMailMessageChatViewModel : SKPChatViewModel {

	BOOL _isPlaying;
	BOOL _isPreparing;
	BOOL _canPlay;
	double _duration;
	double _playbackProgress;

}

@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double playbackProgress;              //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) BOOL isPlaying;                       //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) BOOL isPreparing;                     //@synthesize isPreparing=_isPreparing - In the implementation block
@property (assign,nonatomic) BOOL canPlay;                         //@synthesize canPlay=_canPlay - In the implementation block
+(long long)encodingVersion;
+(Class)defaultCellClass;
+(id)observedKeyPaths;
-(long long)refreshDueToChangeInModelProperty:(id)arg1 ;
-(void)setIsPreparing:(BOOL)arg1 ;
-(void)setCanPlay:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setIsPlaying:(BOOL)arg1 ;
-(double)playbackProgress;
-(void)setPlaybackProgress:(double)arg1 ;
-(BOOL)isPreparing;
-(BOOL)canPlay;
@end
