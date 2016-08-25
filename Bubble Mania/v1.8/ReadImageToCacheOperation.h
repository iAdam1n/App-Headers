/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, ViewHolder;

@interface ReadImageToCacheOperation : NSOperation {

	NSString* targetFile;
	ViewHolder* holder;
	NSString* url;
	unsigned sequence;

}

@property (nonatomic,copy) NSString * targetFile; 
@property (nonatomic,retain) ViewHolder * holder; 
@property (nonatomic,copy) NSString * url; 
-(void)setTargetFile:(NSString *)arg1 ;
-(NSString *)targetFile;
-(void)setHolder:(ViewHolder *)arg1 ;
-(id)initWithTargetFile:(id)arg1 holder:(id)arg2 url:(id)arg3 sequence:(unsigned)arg4 ;
-(ViewHolder *)holder;
-(void)dealloc;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(void)main;
@end

