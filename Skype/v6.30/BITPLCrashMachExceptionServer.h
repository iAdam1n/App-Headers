/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Skype/Skype-Structs.h>
@interface BITPLCrashMachExceptionServer : NSObject {

	plcrash_exception_server_context* _serverContext;

}

@property (nonatomic,readonly) unsigned serverThread; 
-(unsigned)copySendRightForServerAndReturningError:(id*)arg1 ;
-(id)initWithCallBack:(/*function pointer*/void*)arg1 context:(void*)arg2 error:(id*)arg3 ;
-(unsigned)serverThread;
-(id)exceptionPortWithMask:(unsigned)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end
