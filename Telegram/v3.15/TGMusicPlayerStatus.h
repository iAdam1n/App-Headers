/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@class TGMusicPlayerItem, SSignal;

@interface TGMusicPlayerStatus : NSObject {

	BOOL _paused;
	BOOL _isVoice;
	BOOL _shuffle;
	int _repeatType;
	TGMusicPlayerItem* _item;
	double _offset;
	double _duration;
	double _timestamp;
	SSignal* _albumArt;
	SSignal* _albumArtSync;
	SCD_Struct_TG82 _position;
	SCD_Struct_TG144 _downloadedStatus;

}

@property (nonatomic,readonly) TGMusicPlayerItem * item;                       //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TG82 position;                       //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL paused;                                    //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) double offset;                                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TG144 downloadedStatus;              //@synthesize downloadedStatus=_downloadedStatus - In the implementation block
@property (nonatomic,readonly) BOOL isVoice;                                   //@synthesize isVoice=_isVoice - In the implementation block
@property (nonatomic,readonly) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL shuffle;                                   //@synthesize shuffle=_shuffle - In the implementation block
@property (nonatomic,readonly) int repeatType;                                 //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) SSignal * albumArt;                             //@synthesize albumArt=_albumArt - In the implementation block
@property (nonatomic,readonly) SSignal * albumArtSync;                         //@synthesize albumArtSync=_albumArtSync - In the implementation block
-(BOOL)isVoice;
-(SSignal *)albumArtSync;
-(SCD_Struct_TG144)downloadedStatus;
-(id)initWithItem:(id)arg1 position:(SCD_Struct_TG82)arg2 paused:(BOOL)arg3 offset:(double)arg4 duration:(double)arg5 albumArt:(id)arg6 albumArtSync:(id)arg7 downloadedStatus:(SCD_Struct_TG144)arg8 isVoice:(BOOL)arg9 shuffle:(BOOL)arg10 repeatType:(int)arg11 ;
-(SSignal *)albumArt;
-(double)timestamp;
-(double)duration;
-(TGMusicPlayerItem *)item;
-(SCD_Struct_TG82)position;
-(double)offset;
-(BOOL)paused;
-(int)repeatType;
-(BOOL)shuffle;
@end
