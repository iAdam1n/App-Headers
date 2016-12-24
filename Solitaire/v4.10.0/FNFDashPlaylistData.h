/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSArray;

@interface FNFDashPlaylistData : NSObject {

	BOOL _containsAudioTrack;
	BOOL _isLive;
	BOOL _isFragmented;
	NSArray* _timelineEntries;
	SCD_Struct_AS22 _playlistDuration;

}

@property (assign,nonatomic) SCD_Struct_AS22 playlistDuration;              //@synthesize playlistDuration=_playlistDuration - In the implementation block
@property (nonatomic,copy) NSArray * timelineEntries;                       //@synthesize timelineEntries=_timelineEntries - In the implementation block
@property (assign,nonatomic) BOOL containsAudioTrack;                       //@synthesize containsAudioTrack=_containsAudioTrack - In the implementation block
@property (assign,nonatomic) BOOL isLive;                                   //@synthesize isLive=_isLive - In the implementation block
@property (assign,nonatomic) BOOL isFragmented;                             //@synthesize isFragmented=_isFragmented - In the implementation block
-(NSArray *)timelineEntries;
-(void)setPlaylistDuration:(SCD_Struct_AS22)arg1 ;
-(void)setTimelineEntries:(NSArray *)arg1 ;
-(void)setContainsAudioTrack:(BOOL)arg1 ;
-(void)setIsLive:(BOOL)arg1 ;
-(void)setIsFragmented:(BOOL)arg1 ;
-(SCD_Struct_AS22)playlistDuration;
-(BOOL)containsAudioTrack;
-(BOOL)isFragmented;
-(BOOL)isLive;
-(id)init;
@end
