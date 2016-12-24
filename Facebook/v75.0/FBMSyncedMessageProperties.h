/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMCoreMessageProperties, FBMMessageSyncedExtensibleProperties;

@interface FBMSyncedMessageProperties : FBValueObject <NSCopying> {

	FBMCoreMessageProperties* _coreProperties;
	FBMMessageSyncedExtensibleProperties* _extensibleProperties;

}

@property (nonatomic,copy,readonly) FBMCoreMessageProperties * coreProperties;                                //@synthesize coreProperties=_coreProperties - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageSyncedExtensibleProperties * extensibleProperties;              //@synthesize extensibleProperties=_extensibleProperties - In the implementation block
-(id)initWithCoreProperties:(id)arg1 extensibleProperties:(id)arg2 ;
-(FBMCoreMessageProperties *)coreProperties;
-(FBMMessageSyncedExtensibleProperties *)extensibleProperties;
@end
