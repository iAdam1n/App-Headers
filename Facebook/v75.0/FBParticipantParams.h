/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBParticipantParams : FBGraphQLInput {

	NSString* _phoneNumber;
	NSString* _fbid;

}

@property (nonatomic,copy) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * fbid;                     //@synthesize fbid=_fbid - In the implementation block
-(NSString *)fbid;
-(void)setFbid:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end
