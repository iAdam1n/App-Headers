/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData;

@interface SHKFile : NSObject <NSCoding> {

	NSString* _path;
	NSData* _data;
	NSString* _filename;
	NSString* _mimeType;
	unsigned long long _size;
	unsigned long long _duration;

}

@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * filename;                      //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                    //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) unsigned long long size;                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
+(void)initialize;
-(void)removeTempFile;
-(id)MIMETypeForPath:(id)arg1 ;
-(void)createPathFromData;
-(void)createDataFromPath;
-(id)sanitizeFileNameString:(id)arg1 ;
-(id)initWithFileData:(id)arg1 filename:(id)arg2 ;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSString *)path;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)mimeType;
-(id)initWithFilePath:(id)arg1 ;
-(BOOL)hasData;
-(void)setFilename:(NSString *)arg1 ;
-(void)getDuration;
-(void)getSize;
-(NSString *)filename;
-(BOOL)hasPath;
@end
