/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBContactImporterAddressbookPersonName : NSObject {

	NSString* _fullName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _nickname;
	NSString* _prefix;
	NSString* _suffix;
	NSString* _phoneticFirstName;
	NSString* _phoneticMiddleName;
	NSString* _phoneticLastName;
	NSString* _jobTitle;
	NSString* _department;
	NSString* _company;

}

@property (nonatomic,copy,readonly) NSString * fullName;                        //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy,readonly) NSString * prefix;                          //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * suffix;                          //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * department;                      //@synthesize department=_department - In the implementation block
@property (nonatomic,copy,readonly) NSString * company;                         //@synthesize company=_company - In the implementation block
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(id)asStrings;
-(void)_makeFullName;
-(id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 nickName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 phoneticFirstName:(id)arg7 phoneticMiddleName:(id)arg8 phoneticLastName:(id)arg9 jobTitle:(id)arg10 department:(id)arg11 company:(id)arg12 ;
-(NSString *)company;
-(NSString *)jobTitle;
-(NSString *)middleName;
-(NSString *)phoneticMiddleName;
-(id)init;
-(id)description;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)department;
-(id)initWithABRecord:(void*)arg1 ;
-(NSString *)suffix;
-(NSString *)fullName;
-(NSString *)nickname;
-(NSString *)prefix;
@end
