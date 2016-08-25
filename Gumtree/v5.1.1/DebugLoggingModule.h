/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/EMFModule.h>
#import <Gumtree/EMFDebugLoggingProtocol.h>

@class NSString;

@interface DebugLoggingModule : EMFModule <EMFDebugLoggingProtocol> {

	BOOL _loggingEnabled;

}

@property (assign,nonatomic) BOOL loggingEnabled;                   //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultUTI;
+(id)defaultProperties;
-(void)logMessage:(const char*)arg1 line:(unsigned)arg2 function:(const char*)arg3 format:(id)arg4 ;
-(BOOL)loggingEnabled;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isLoggingEnabled;
-(void)enableLogging:(BOOL)arg1 ;
@end

