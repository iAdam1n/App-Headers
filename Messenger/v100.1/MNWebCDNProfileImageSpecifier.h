/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Messenger/FBWebImageSpecifier.h>

@class MNProfileImageInfo, MNWebCDNProfileImageSpec, NSString;

@interface MNWebCDNProfileImageSpecifier : FBValueObject <NSCopying, FBWebImageSpecifier> {

	MNProfileImageInfo* _info;
	MNWebCDNProfileImageSpec* _specification;

}

@property (nonatomic,copy,readonly) MNProfileImageInfo * info;                             //@synthesize info=_info - In the implementation block
@property (nonatomic,copy,readonly) MNWebCDNProfileImageSpec * specification;              //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)type;
-(id)logicalIdentifier;
-(id)initWithInfo:(id)arg1 specification:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MNProfileImageInfo *)info;
-(MNWebCDNProfileImageSpec *)specification;
@end
