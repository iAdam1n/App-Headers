/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WAContactInfoNameUnit : NSObject {

	unsigned _nameFormat;
	NSString* _prefix;
	NSString* _firstName;
	NSString* _phoneticFirstName;
	NSString* _middleName;
	NSString* _phoneticMiddleName;
	NSString* _lastName;
	NSString* _phoneticLastName;
	NSString* _suffix;
	NSString* _nickname;
	NSString* _jobTitle;
	NSString* _department;
	NSString* _organization;

}

@property (nonatomic,copy,readonly) NSString * prefix;                          //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * suffix;                          //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy,readonly) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * department;                      //@synthesize department=_department - In the implementation block
@property (nonatomic,copy,readonly) NSString * organization;                    //@synthesize organization=_organization - In the implementation block
@property (nonatomic,readonly) unsigned nameFormat;                             //@synthesize nameFormat=_nameFormat - In the implementation block
+(id)contactInfoNameUnitForRecord:(void*)arg1 ;
-(unsigned)nameFormat;
-(NSString *)middleName;
-(NSString *)organization;
-(NSString *)prefix;
-(NSString *)phoneticMiddleName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSString *)jobTitle;
-(id)initWithRecord:(void*)arg1 ;
-(NSString *)department;
-(NSString *)nickname;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)suffix;
@end
