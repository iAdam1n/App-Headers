/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBPulsarInputDeviceId : FBGraphQLInput {

	NSString* _uuid;
	NSNumber* _major;
	NSNumber* _minor;

}

@property (nonatomic,copy) NSString * uuid;               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSNumber * major;              //@synthesize major=_major - In the implementation block
@property (nonatomic,copy) NSNumber * minor;              //@synthesize minor=_minor - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)uuid;
-(NSNumber *)major;
-(NSNumber *)minor;
-(void)setMajor:(NSNumber *)arg1 ;
-(void)setMinor:(NSNumber *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
@end

