/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
@interface FlurryPLCrashMachExceptionServer : NSObject {

	plcrash_exception_server_context* _serverContext;

}

@property (nonatomic,readonly) unsigned serverThread; 
-(id)initWithCallBack:(/*function pointer*/void*)arg1 context:(void*)arg2 error:(id*)arg3 ;
-(id)exceptionPortWithMask:(unsigned)arg1 error:(id*)arg2 ;
-(unsigned)copySendRightForServerAndReturningError:(id*)arg1 ;
-(unsigned)serverThread;
-(void)dealloc;
@end
