/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMUPlaybackState : NSObject <NSCopying> {

	unsigned long long _songIndex;
	unsigned long long _viewState;
	double _currentPlayingTime;
	double _duration;

}

@property (nonatomic,readonly) unsigned long long songIndex;              //@synthesize songIndex=_songIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long viewState;              //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) double currentPlayingTime;                 //@synthesize currentPlayingTime=_currentPlayingTime - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
-(unsigned long long)songIndex;
-(double)currentPlayingTime;
-(id)initWithSongIndex:(unsigned long long)arg1 playbackViewState:(unsigned long long)arg2 currentPlayingTime:(double)arg3 duration:(double)arg4 ;
-(id)copyWithNewPlaybackViewStateAndResetCurrentPlayingTimeAndDuration:(unsigned long long)arg1 ;
-(id)copyWithNewPlaybackViewState:(unsigned long long)arg1 ;
-(id)copyWithNewCurrentPlayingTime:(double)arg1 ;
-(id)copyWithNewDuration:(double)arg1 ;
-(void)resetCurrentPlayingTimeAndDuration;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)viewState;
@end
