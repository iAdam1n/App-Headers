/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFMultipartFormData
@required
-(void)appendPartWithFormData:(id)arg1 name:(id)arg2;
-(BOOL)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id*)arg5;
-(void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
-(BOOL)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id*)arg3;
-(void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5;
-(void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
-(void)throttleBandwidthWithPacketSize:(unsigned long long)arg1 delay:(double)arg2;

@end

