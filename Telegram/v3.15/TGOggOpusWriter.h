/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@class TGDataItem;

@interface TGOggOpusWriter : NSObject {

	TGDataItem* _dataItem;
	OpusEncoderRef _encoder;
	char* _packet;
	SCD_Struct_TG84* inopt;
	SCD_Struct_TG85* os;
	SCD_Struct_TG86 og;
	SCD_Struct_TG87 op;
	long long last_granulepos;
	long long enc_granulepos;
	int last_segments;
	int eos;
	SCD_Struct_TG88 header;
	int _packetId;
	int size_segments;
	long long nb_encoded;
	long long bytes_written;
	long long pages_out;
	long long total_bytes;
	long long total_samples;
	int nb_samples;
	int peak_bytes;
	int min_bytes;
	int max_frame_bytes;
	int bitrate;
	int rate;
	int coding_rate;
	int frame_size;
	int with_cvbr;
	int max_ogg_delay;
	int comment_padding;
	int serialno;
	int lookahead;

}
-(BOOL)beginWithDataItem:(id)arg1 ;
-(BOOL)writeFrame:(char*)arg1 frameByteCount:(unsigned long long)arg2 ;
-(unsigned long long)encodedBytes;
-(double)encodedDuration;
-(id)init;
-(void)cleanup;
@end
