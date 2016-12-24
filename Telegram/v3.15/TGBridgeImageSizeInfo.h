/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface TGBridgeImageSizeInfo : NSObject <NSCoding> {

	int _fileSize;
	NSString* _url;
	CGSize _dimensions;

}

@property (nonatomic,retain) NSString * url;                 //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) CGSize dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (assign,nonatomic) int fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
-(void)setDimensions:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(CGSize)dimensions;
-(int)fileSize;
-(void)setFileSize:(int)arg1 ;
@end
