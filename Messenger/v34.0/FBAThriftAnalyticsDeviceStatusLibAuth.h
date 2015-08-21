/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/TBaseStruct.h>
#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface FBAThriftAnalyticsDeviceStatusLibAuth : TBaseStruct <TBase, NSCoding> {

	unsigned char __thrift_photoLibraryAuthorization;
	BOOL __thrift_photoLibraryAuthorization_set;

}

@property (assign,nonatomic) unsigned char photoLibraryAuthorization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)toDict;
-(void)setPhotoLibraryAuthorization:(unsigned char)arg1 ;
-(id)initWithPhotoLibraryAuthorization:(unsigned char)arg1 ;
-(unsigned char)photoLibraryAuthorization;
-(BOOL)photoLibraryAuthorizationIsSet;
-(void)unsetPhotoLibraryAuthorization;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

