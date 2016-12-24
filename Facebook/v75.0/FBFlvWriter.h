/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFlvWriter.h>

@class NSFileHandle, NSString;

@interface FBFlvWriter : NSObject <FBFlvWriter> {

	NSFileHandle* _fileHandle;
	NSString* _filePath;
	unsigned long long _bytesWritten;

}

@property (nonatomic,copy) NSString * filePath;                            //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) unsigned long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFilePath:(id)arg1 error:(id*)arg2 ;
-(void)writeData:(const vector<unsigned char, std::__1::allocator<unsigned char> >*)arg1 tagType:(int)arg2 timestamp:(unsigned)arg3 ;
-(void)dealloc;
-(void)flush;
-(void)close;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(void)writeHeader;
@end
