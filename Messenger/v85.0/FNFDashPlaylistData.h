/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FNFDashPlaylistData : NSObject {

	BOOL _containsAudioTrack;
	BOOL _isLive;
	BOOL _isFragmented;
	NSArray* _timelineEntries;
	SCD_Struct_FB21 _playlistDuration;

}

@property (assign,nonatomic) SCD_Struct_FB21 playlistDuration;              //@synthesize playlistDuration=_playlistDuration - In the implementation block
@property (nonatomic,copy) NSArray * timelineEntries;                       //@synthesize timelineEntries=_timelineEntries - In the implementation block
@property (assign,nonatomic) BOOL containsAudioTrack;                       //@synthesize containsAudioTrack=_containsAudioTrack - In the implementation block
@property (assign,nonatomic) BOOL isLive;                                   //@synthesize isLive=_isLive - In the implementation block
@property (assign,nonatomic) BOOL isFragmented;                             //@synthesize isFragmented=_isFragmented - In the implementation block
-(BOOL)isFragmented;
-(NSArray *)timelineEntries;
-(SCD_Struct_FB21)playlistDuration;
-(BOOL)containsAudioTrack;
-(void)setPlaylistDuration:(SCD_Struct_FB21)arg1 ;
-(void)setIsFragmented:(BOOL)arg1 ;
-(void)setContainsAudioTrack:(BOOL)arg1 ;
-(void)setIsLive:(BOOL)arg1 ;
-(void)setTimelineEntries:(NSArray *)arg1 ;
-(BOOL)isLive;
-(id)init;
@end
