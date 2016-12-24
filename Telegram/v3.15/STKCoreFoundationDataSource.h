/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/STKDataSource.h>

@class NSRunLoop;

@interface STKCoreFoundationDataSource : STKDataSource {

	BOOL isInErrorState;
	CFReadStreamRef stream;
	NSRunLoop* eventsRunLoop;

}

@property (readonly) BOOL isInErrorState; 
-(BOOL)reregisterForEvents;
-(void)errorOccured;
-(void)dataAvailable;
-(int)readIntoBuffer:(char*)arg1 withSize:(int)arg2 ;
-(BOOL)registerForEvents:(id)arg1 ;
-(BOOL)isInErrorState;
-(void)eof;
-(void)dealloc;
-(void)close;
-(long long)status;
-(void)open;
-(void)seekToOffset:(long long)arg1 ;
-(void)openCompleted;
-(void)unregisterForEvents;
-(BOOL)hasBytesAvailable;
@end
