/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaLoggerProtocol.h>

@class FBMediaPickerTraits, NSString;

@interface FBMediaPickerLogger : NSObject <FBMediaLoggerProtocol> {

	FBMediaPickerTraits* _traits;
	long long _initialMemoryUsage;
	NSString* _sessionID;

}

@property (nonatomic,copy) NSString * sessionID;                    //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logEvent:(id)arg1 extra:(id)arg2 ;
-(void)logMemoryUsage:(id)arg1 ;
-(void)markInitialMemoryUsage;
-(id)initWithTraits:(id)arg1 sessionID:(id)arg2 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)logEvent:(id)arg1 ;
@end
