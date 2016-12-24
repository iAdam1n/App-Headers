/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 30, 2016 at 12:04:10 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4EC3D7DE-EC7A-4340-8E6F-37E25C97EB19/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CSStreamSenseClip, NSString;

@interface CSStreamSensePlaylist : NSObject {

	NSMutableDictionary* _labels;
	CSStreamSenseClip* _clip;
	double _bufferingTime;
	double _playbackTime;
	NSString* _playlistId;
	long long _pauses;
	long long _starts;
	long long _rebufferCount;
	long long _playlistCounter;
	long long _firstPlayOccurred;

}
-(id)playlistId;
-(void)setFirstPlayOccurred:(long long)arg1 ;
-(id)label:(id)arg1 ;
-(void)setPlaylistCounter:(long long)arg1 ;
-(void)setPlaylistId:(id)arg1 ;
-(void)setLabels:(id)arg1 forState:(int)arg2 ;
-(long long)starts;
-(void)setStarts:(long long)arg1 ;
-(long long)playlistCounter;
-(void)addPlaybackTime:(double)arg1 ;
-(void)addBufferingTime:(double)arg1 ;
-(void)setRegisters:(id)arg1 forState:(int)arg2 ;
-(id)createLabels:(int)arg1 initialLabels:(id)arg2 ;
-(long long)rebufferCount;
-(void)setRebufferCount:(long long)arg1 ;
-(void)reset:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(id)clip;
-(void)setClip:(id)arg1 ;
-(double)bufferingTime;
-(void)setBufferingTime:(double)arg1 ;
-(void)setLabels:(id)arg1 ;
-(id)labels;
-(double)playbackTime;
-(void)setPlaybackTime:(double)arg1 ;
-(void)setPauses:(long long)arg1 ;
-(long long)pauses;
-(void)setLabel:(id)arg1 value:(id)arg2 ;
@end
