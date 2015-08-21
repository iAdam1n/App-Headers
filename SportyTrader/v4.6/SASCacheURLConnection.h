/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CFNetwork/NSURLConnection.h>

@class NSString, NSMutableData;

@interface SASCacheURLConnection : NSURLConnection {

	NSString* _relativeFilePath;
	NSMutableData* _fileData;

}

@property (nonatomic,retain) NSString * relativeFilePath;              //@synthesize relativeFilePath=_relativeFilePath - In the implementation block
@property (nonatomic,retain) NSMutableData * fileData;                 //@synthesize fileData=_fileData - In the implementation block
-(void)setRelativeFilePath:(NSString *)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 relativePath:(id)arg3 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 relativePath:(id)arg4 ;
-(NSString *)relativeFilePath;
-(void)dealloc;
-(NSMutableData *)fileData;
-(void)setFileData:(NSMutableData *)arg1 ;
@end

