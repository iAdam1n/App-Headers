/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TGPhonebookRecord : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _middleName;
	NSArray* _phoneNumbers;

}

@property (nonatomic,readonly) NSString * firstName;                //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                 //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;               //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSArray * phoneNumbers;              //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 phoneNumbers:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)phoneNumbers;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)middleName;
@end
