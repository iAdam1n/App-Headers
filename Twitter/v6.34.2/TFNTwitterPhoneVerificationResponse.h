/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSTwitterModel.h>

@class NSString;

@interface TFNTwitterPhoneVerificationResponse : NSObject <TFSTwitterModel> {

	BOOL _isNumeric;
	BOOL _isValid;
	NSString* _phoneNumber;

}

@property (assign,nonatomic) BOOL isNumeric;                        //@synthesize isNumeric=_isNumeric - In the implementation block
@property (assign,nonatomic) BOOL isValid;                          //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneVerificationResponseWithJSONData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isNumeric;
-(id)initWithJSONDictionary:(id)arg1 ;
-(void)setIsNumeric:(BOOL)arg1 ;
-(BOOL)isValid;
-(NSString *)phoneNumber;
-(void)setIsValid:(BOOL)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

