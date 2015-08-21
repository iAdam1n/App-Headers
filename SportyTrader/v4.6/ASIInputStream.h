/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSInputStream, ASIHTTPRequest;

@interface ASIInputStream : NSObject {

	NSInputStream* stream;
	ASIHTTPRequest* request;

}

@property (nonatomic,retain) NSInputStream * stream; 
@property (assign,nonatomic) ASIHTTPRequest * request; 
+(id)inputStreamWithFileAtPath:(id)arg1 request:(id)arg2 ;
+(id)inputStreamWithData:(id)arg1 request:(id)arg2 ;
+(void)initialize;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(ASIHTTPRequest *)request;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)close;
-(void)setStream:(NSInputStream *)arg1 ;
-(void)open;
-(id)streamError;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSInputStream *)stream;
-(void)setRequest:(ASIHTTPRequest *)arg1 ;
@end

