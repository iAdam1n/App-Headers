/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBPulsarID : FBGraphQLInput {

	NSString* _uuid;
	NSNumber* _major;
	NSNumber* _minor;
	NSNumber* _rssi;

}

@property (nonatomic,copy) NSString * uuid;               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSNumber * major;              //@synthesize major=_major - In the implementation block
@property (nonatomic,copy) NSNumber * minor;              //@synthesize minor=_minor - In the implementation block
@property (nonatomic,copy) NSNumber * rssi;               //@synthesize rssi=_rssi - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setRssi:(NSNumber *)arg1 ;
-(NSNumber *)rssi;
-(void)setMajor:(NSNumber *)arg1 ;
-(void)setMinor:(NSNumber *)arg1 ;
-(NSNumber *)major;
-(NSNumber *)minor;
@end
