/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray;

@interface FBMediaEffectsToVersionAndCapabilities : FBGraphQLInput {

	NSString* _typeAttribute;
	NSNumber* _version;
	NSArray* _capabilities;

}

@property (nonatomic,copy) NSString * typeAttribute;              //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,copy) NSNumber * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSArray * capabilities;                //@synthesize capabilities=_capabilities - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(NSString *)typeAttribute;
-(NSArray *)capabilities;
-(void)setCapabilities:(NSArray *)arg1 ;
@end
