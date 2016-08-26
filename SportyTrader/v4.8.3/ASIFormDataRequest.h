/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/ASIHTTPRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASIFormDataRequest : ASIHTTPRequest <NSCopying> {

	NSMutableArray* postData;
	NSMutableArray* fileData;
	int postFormat;
	unsigned long long stringEncoding;

}

@property (retain) NSMutableArray * postData; 
@property (retain) NSMutableArray * fileData; 
@property (assign) int postFormat; 
@property (assign) unsigned long long stringEncoding; 
+(id)requestWithURL:(id)arg1 ;
-(void)setPostFormat:(int)arg1 ;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(void)addPostValue:(id)arg1 forKey:(id)arg2 ;
-(void)addFile:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4 ;
-(void)addData:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4 ;
-(void)setFile:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4 ;
-(void)setData:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4 ;
-(void)buildPostBody;
-(int)postFormat;
-(void)buildURLEncodedPostBody;
-(void)buildMultipartFormDataPostBody;
-(void)appendPostString:(id)arg1 ;
-(id)encodeURL:(id)arg1 ;
-(void)setPostValue:(id)arg1 forKey:(id)arg2 ;
-(void)addFile:(id)arg1 forKey:(id)arg2 ;
-(void)setFile:(id)arg1 forKey:(id)arg2 ;
-(void)addData:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)stringEncoding;
-(NSMutableArray *)fileData;
-(void)setFileData:(NSMutableArray *)arg1 ;
-(void)setPostData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)postData;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
@end
