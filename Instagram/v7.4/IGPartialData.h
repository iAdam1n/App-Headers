/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSData, NSMutableData, NSOutputStream;

@interface IGPartialData : NSObject {

	NSData* _data;
	NSMutableData* _streamBuffer;
	NSOutputStream* _downloadStream;
	long long _bufferedLength;
	long long _totalLength;

}

@property (assign,nonatomic) long long bufferedLength;              //@synthesize bufferedLength=_bufferedLength - In the implementation block
@property (assign,nonatomic) long long totalLength;                 //@synthesize totalLength=_totalLength - In the implementation block
+(id)emptyData;
-(BOOL)hasBufferedData;
-(long long)downloadedLength;
-(id)downloadStream;
-(void)setBufferedLength:(long long)arg1 ;
-(void)increaseBufferedDataBy:(long long)arg1 ;
-(BOOL)hasDataForRange:(NSRange)arg1 ;
-(id)downloadedData;
-(id)initWithPartialData:(id)arg1 totalLength:(long long)arg2 ;
-(long long)bufferedLength;
-(id)description;
-(BOOL)hasData;
-(void)setTotalLength:(long long)arg1 ;
-(long long)totalLength;
-(id)subdataWithRange:(NSRange)arg1 ;
@end
