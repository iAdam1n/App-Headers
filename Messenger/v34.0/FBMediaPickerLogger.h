/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMediaLoggerProtocol.h>

@class FBMediaPickerBaseTraits, NSString;

@interface FBMediaPickerLogger : NSObject <FBMediaLoggerProtocol> {

	FBMediaPickerBaseTraits* _traits;
	long long _initialMemoryUsage;
	NSString* _sessionID;

}

@property (nonatomic,copy) NSString * sessionID;                    //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logEvent:(id)arg1 ;
-(void)logEvent:(id)arg1 extra:(id)arg2 ;
-(id)initWithTraits:(id)arg1 sessionID:(id)arg2 ;
-(void)markInitialMemoryUsage;
-(void)logMemoryUsage:(id)arg1 ;
-(id)init;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
@end

