/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTProxygenInfo : NSObject <TBase, NSCoding> {

	NSString* __thrift_ipAddr;
	NSString* __thrift_hostName;
	NSString* __thrift_vipAddr;
	BOOL __thrift_ipAddr_set;
	BOOL __thrift_hostName_set;
	BOOL __thrift_vipAddr_set;

}

@property (nonatomic,retain) NSString * ipAddr; 
@property (nonatomic,retain) NSString * hostName; 
@property (nonatomic,retain) NSString * vipAddr; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setIpAddr:(NSString *)arg1 ;
-(void)setVipAddr:(NSString *)arg1 ;
-(id)initWithIpAddr:(id)arg1 hostName:(id)arg2 vipAddr:(id)arg3 ;
-(NSString *)ipAddr;
-(BOOL)ipAddrIsSet;
-(void)unsetIpAddr;
-(BOOL)hostNameIsSet;
-(void)unsetHostName;
-(NSString *)vipAddr;
-(BOOL)vipAddrIsSet;
-(void)unsetVipAddr;
-(NSString *)hostName;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
@end
