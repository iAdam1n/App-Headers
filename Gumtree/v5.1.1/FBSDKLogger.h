/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableString;

@interface FBSDKLogger : NSObject {

	BOOL _isActive;
	unsigned long long _loggerSerialNumber;
	NSString* _loggingBehavior;
	NSMutableString* _internalContents;

}

@property (nonatomic,readonly) NSMutableString * internalContents;                 //@synthesize internalContents=_internalContents - In the implementation block
@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,readonly) unsigned long long loggerSerialNumber;              //@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingBehavior;                    //@synthesize loggingBehavior=_loggingBehavior - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                      //@synthesize isActive=_isActive - In the implementation block
+(void)singleShotLogEntry:(id)arg1 logEntry:(id)arg2 ;
+(void)singleShotLogEntry:(id)arg1 formatString:(id)arg2 ;
+(void)registerStringToReplace:(id)arg1 replaceWith:(id)arg2 ;
+(unsigned long long)generateSerialNumber;
+(void)singleShotLogEntry:(id)arg1 timestampTag:(id)arg2 formatString:(id)arg3 ;
+(void)registerCurrentTime:(id)arg1 withTag:(id)arg2 ;
-(NSString *)loggingBehavior;
-(id)initWithLoggingBehavior:(id)arg1 ;
-(unsigned long long)loggerSerialNumber;
-(void)emitToNSLog;
-(void)appendKey:(id)arg1 value:(id)arg2 ;
-(NSMutableString *)internalContents;
-(BOOL)isActive;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
@end

