/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface ASIDataDecompressor : NSObject {

	BOOL streamReady;
	z_stream_s* zStream;

}

@property (readonly) BOOL streamReady; 
+(id)inflateErrorWithCode:(int)arg1 ;
+(id)decompressor;
+(id)uncompressData:(id)arg1 error:(id*)arg2 ;
+(BOOL)uncompressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id*)arg3 ;
-(id)setupStream;
-(id)uncompressBytes:(char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)streamReady;
-(void)dealloc;
-(id)closeStream;
@end
