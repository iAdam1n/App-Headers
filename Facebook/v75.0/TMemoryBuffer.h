/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/TTransport.h>

@class NSMutableData, NSString;

@interface TMemoryBuffer : NSObject <TTransport> {

	NSMutableData* mBuffer;
	unsigned long long mOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)getOffset;
-(id)getBuffer;
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(id)init;
-(void)dealloc;
-(void)flush;
-(id)initWithData:(id)arg1 ;
@end
