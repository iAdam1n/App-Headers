/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface PLCrashSignalHandler : NSObject {

	darwin_sigaltstack* _sigstk;

}
+(void)resetHandlers;
+(void)initialize;
+(id)sharedHandler;
-(BOOL)registerHandlerWithSignal:(int)arg1 error:(id*)arg2 ;
-(BOOL)registerHandlerForSignal:(int)arg1 callback:(/*function pointer*/void*)arg2 context:(void*)arg3 error:(id*)arg4 ;
-(id)init;
@end
