/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
@end
