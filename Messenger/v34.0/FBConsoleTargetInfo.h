/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface FBConsoleTargetInfo : NSObject <TBase, NSCoding> {

	NSString* __identifier;
	NSString* __targetName;
	NSString* __targetVersion;
	NSString* __osName;
	NSString* __osVersion;
	NSString* __deviceModel;
	NSString* __deviceIdentifier;
	BOOL __identifier_isset;
	BOOL __targetName_isset;
	BOOL __targetVersion_isset;
	BOOL __osName_isset;
	BOOL __osVersion_isset;
	BOOL __deviceModel_isset;
	BOOL __deviceIdentifier_isset;

}

@property (setter=setIdentifier:,getter=identifier,nonatomic,copy) NSString * identifier; 
@property (setter=setTargetName:,getter=targetName,nonatomic,copy) NSString * targetName; 
@property (setter=setTargetVersion:,getter=targetVersion,nonatomic,copy) NSString * targetVersion; 
@property (setter=setOsName:,getter=osName,nonatomic,copy) NSString * osName; 
@property (setter=setOsVersion:,getter=osVersion,nonatomic,copy) NSString * osVersion; 
@property (setter=setDeviceModel:,getter=deviceModel,nonatomic,copy) NSString * deviceModel; 
@property (setter=setDeviceIdentifier:,getter=deviceIdentifier,nonatomic,copy) NSString * deviceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)identifierIsSet;
-(void)unsetIdentifier;
-(void)setTargetName:(NSString *)arg1 ;
-(void)setTargetVersion:(NSString *)arg1 ;
-(void)setOsName:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 targetName:(id)arg2 targetVersion:(id)arg3 osName:(id)arg4 osVersion:(id)arg5 deviceModel:(id)arg6 deviceIdentifier:(id)arg7 ;
-(BOOL)targetNameIsSet;
-(void)unsetTargetName;
-(NSString *)targetVersion;
-(BOOL)targetVersionIsSet;
-(void)unsetTargetVersion;
-(BOOL)osNameIsSet;
-(void)unsetOsName;
-(BOOL)osVersionIsSet;
-(void)unsetOsVersion;
-(BOOL)deviceModelIsSet;
-(void)unsetDeviceModel;
-(BOOL)deviceIdentifierIsSet;
-(void)unsetDeviceIdentifier;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)identifier;
-(void)validate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)osName;
-(void)write:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)targetName;
@end

