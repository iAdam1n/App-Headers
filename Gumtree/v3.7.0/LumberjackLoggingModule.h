/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/EMFModule.h>
#import <Gumtree/EMFDebugLoggingProtocol.h>
#import <Gumtree/LumberjackLoggingProtocol.h>

@class DDFileLogger, NSString;

@interface LumberjackLoggingModule : EMFModule <EMFDebugLoggingProtocol, LumberjackLoggingProtocol> {

	DDFileLogger* _fileLogger;

}

@property (nonatomic,retain) DDFileLogger * fileLogger;              //@synthesize fileLogger=_fileLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultUTI;
+(id)defaultProperties;
-(void)enableLogging:(BOOL)arg1 ;
-(void)logMessage:(const char*)arg1 line:(unsigned)arg2 function:(const char*)arg3 format:(id)arg4 ;
-(void)didInstall;
-(DDFileLogger *)fileLogger;
-(void)setFileLogger:(DDFileLogger *)arg1 ;
-(id)logFilePath;
-(BOOL)isLoggingEnabled;
@end

