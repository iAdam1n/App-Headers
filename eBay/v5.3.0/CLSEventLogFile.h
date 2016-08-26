/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSFileHandle;

@interface CLSEventLogFile : NSObject {

	NSURL* _fileURL;
	unsigned long long _fileSize;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
-(void)closeFileHandle;
-(BOOL)openFileHandleForWriting:(id*)arg1 ;
-(BOOL)openFileHandleForReading:(id*)arg1 ;
-(id)initWithName:(id)arg1 inDirectoryWithURL:(id)arg2 ;
-(BOOL)resetFile:(id*)arg1 ;
-(id)readFromFile:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)fileURL;
-(unsigned long long)fileSize;
-(BOOL)appendData:(id)arg1 error:(id*)arg2 ;
@end
