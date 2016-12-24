/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/TBaseStruct.h>
#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAThriftAnalyticsDeviceStatusSystemAndUserTime : TBaseStruct <TBase, NSCoding> {

	long long __thrift_systemTimeInMilliseconds;
	long long __thrift_userTimeInMilliseconds;
	BOOL __thrift_systemTimeInMilliseconds_set;
	BOOL __thrift_userTimeInMilliseconds_set;

}

@property (assign,nonatomic) long long systemTimeInMilliseconds; 
@property (assign,nonatomic) long long userTimeInMilliseconds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSystemTimeInMilliseconds:(long long)arg1 ;
-(void)setUserTimeInMilliseconds:(long long)arg1 ;
-(id)toDict;
-(id)initWithSystemTimeInMilliseconds:(long long)arg1 userTimeInMilliseconds:(long long)arg2 ;
-(long long)systemTimeInMilliseconds;
-(BOOL)systemTimeInMillisecondsIsSet;
-(void)unsetSystemTimeInMilliseconds;
-(long long)userTimeInMilliseconds;
-(BOOL)userTimeInMillisecondsIsSet;
-(void)unsetUserTimeInMilliseconds;
-(BOOL)makeImmutable;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end
