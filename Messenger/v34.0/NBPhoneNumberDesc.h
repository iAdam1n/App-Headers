/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface NBPhoneNumberDesc : NSObject {

	NSString* nationalNumberPattern;
	NSString* possibleNumberPattern;
	NSString* exampleNumber;

}

@property (nonatomic,retain) NSString * nationalNumberPattern; 
@property (nonatomic,retain) NSString * possibleNumberPattern; 
@property (nonatomic,retain) NSString * exampleNumber; 
-(void)setNationalNumberPattern:(NSString *)arg1 ;
-(void)setPossibleNumberPattern:(NSString *)arg1 ;
-(void)setExampleNumber:(NSString *)arg1 ;
-(NSString *)exampleNumber;
-(NSString *)nationalNumberPattern;
-(NSString *)possibleNumberPattern;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

