/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMQTTClientByteAggregating.h>

@class FBCache, NSString;

@interface FBMQTTClientByteAggregator : NSObject <FBMQTTClientByteAggregating> {

	FBCache* _totalReadBytesByConn;
	FBCache* _totalWriteBytesByConn;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_calculateChangeInWriteBytes:(long long)arg1 rawBytesWritten:(id)arg2 foreground:(BOOL)arg3 ;
-(id)_calculateChangeInReadBytes:(long long)arg1 rawBytesRead:(id)arg2 foreground:(BOOL)arg3 ;
-(void)onAggregateForDisconnectedConnection:(long long)arg1 rawBytesWritten:(id)arg2 rawBytesRead:(id)arg3 foreground:(BOOL)arg4 ;
-(void)onAggregateForConnection:(long long)arg1 rawBytesWritten:(id)arg2 foreground:(BOOL)arg3 ;
-(void)onAggregateForConnection:(long long)arg1 rawBytesRead:(id)arg2 foreground:(BOOL)arg3 ;
-(id)init;
@end
