/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CNMutableContact, UIImage, NSString, NSArray, WAContactMultiValueProperty, WAContactProperty, CNContact;

@interface WAMergedContact : NSObject <NSCopying> {

	BOOL _keepExistingAddressBookData;
	CNMutableContact* _cnContact;
	BOOL _readonly;
	BOOL _imageModified;
	unsigned _nameFormat;
	int _defaultPersonID;
	unsigned long long _numberOfMergedContacts;
	UIImage* _image;
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
	NSArray* _whatsAppPhones;
	NSString* _jid;
	WAContactMultiValueProperty* _phones;
	WAContactMultiValueProperty* _emails;
	WAContactMultiValueProperty* _webURLs;
	WAContactMultiValueProperty* _addresses;
	WAContactProperty* _birthday;
	WAContactMultiValueProperty* _dates;
	WAContactMultiValueProperty* _imAccounts;
	WAContactMultiValueProperty* _socialProfiles;
	WAContactMultiValueProperty* _notes;

}

@property (nonatomic,retain) CNContact * cnContact;                                                //@synthesize cnContact=_cnContact - In the implementation block
@property (assign,nonatomic) int defaultPersonID;                                                  //@synthesize defaultPersonID=_defaultPersonID - In the implementation block
@property (assign,nonatomic) BOOL imageModified;                                                   //@synthesize imageModified=_imageModified - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMergedContacts;                            //@synthesize numberOfMergedContacts=_numberOfMergedContacts - In the implementation block
@property (assign,getter=isReadonly,nonatomic) BOOL readonly;                                      //@synthesize readonly=_readonly - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * prefix;                                                      //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * firstName;                                                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * phoneticFirstName;                                           //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,copy) NSString * middleName;                                                  //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy) NSString * phoneticMiddleName;                                          //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                                                    //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * phoneticLastName;                                            //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,copy) NSString * suffix;                                                      //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy) NSString * nickname;                                                    //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy) NSString * jobTitle;                                                    //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,copy) NSString * department;                                                  //@synthesize department=_department - In the implementation block
@property (nonatomic,copy) NSString * organization;                                                //@synthesize organization=_organization - In the implementation block
@property (assign,nonatomic) unsigned nameFormat;                                                  //@synthesize nameFormat=_nameFormat - In the implementation block
@property (nonatomic,copy) NSArray * whatsAppPhones;                                               //@synthesize whatsAppPhones=_whatsAppPhones - In the implementation block
@property (nonatomic,copy) NSString * jid;                                                         //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) WAContactMultiValueProperty * phones;                                 //@synthesize phones=_phones - In the implementation block
@property (nonatomic,retain) WAContactMultiValueProperty * emails;                                 //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) WAContactMultiValueProperty * webURLs;                                //@synthesize webURLs=_webURLs - In the implementation block
@property (nonatomic,retain) WAContactMultiValueProperty * addresses;                              //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,retain) WAContactProperty * birthday;                                         //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,retain) WAContactMultiValueProperty * dates;                                  //@synthesize dates=_dates - In the implementation block
@property (nonatomic,retain) WAContactMultiValueProperty * imAccounts;                             //@synthesize imAccounts=_imAccounts - In the implementation block
@property (nonatomic,retain) WAContactMultiValueProperty * socialProfiles;                         //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,retain) WAContactMultiValueProperty * notes;                                  //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSString * compositeName; 
@property (getter=isOrganizationContact,nonatomic,readonly) BOOL organizationContact; 
@property (nonatomic,readonly) BOOL hasWhatsAppAblePhoneNumbers; 
+(id)selfContact;
+(void)initialize;
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(NSArray *)whatsAppPhones;
-(WAContactMultiValueProperty *)webURLs;
-(WAContactMultiValueProperty *)imAccounts;
-(void)setWebURLs:(WAContactMultiValueProperty *)arg1 ;
-(void)setImAccounts:(WAContactMultiValueProperty *)arg1 ;
-(void)setWhatsAppPhones:(NSArray *)arg1 ;
-(void)setImageModified:(BOOL)arg1 ;
-(void)setNameFormat:(unsigned)arg1 ;
-(int)defaultPersonID;
-(id)propertyMapFromContactMultiValueProperty:(id)arg1 ;
-(void)updatePersonRecord:(void*)arg1 withStringValue:(id)arg2 forProperty:(int)arg3 ;
-(void)updatePersonRecord:(void*)arg1 withDataFromMultiValueProperty:(id)arg2 ;
-(void)addDataFromMultiValueProperty:(id)arg1 toCNContact:(id)arg2 ;
-(BOOL)imageModified;
-(void)updatePersonRecordsInAddressBook:(void*)arg1 withDataFromMultiValueProperty:(id)arg2 ;
-(BOOL)isEqualToMergedContact:(id)arg1 ;
-(void)setDefaultPersonID:(int)arg1 ;
-(unsigned long long)numberOfMergedContacts;
-(void)setNumberOfMergedContacts:(unsigned long long)arg1 ;
-(id)initWithCNContact:(id)arg1 waContact:(id)arg2 ;
-(BOOL)isOrganizationContact;
-(BOOL)hasWhatsAppAblePhoneNumbers;
-(void)mergeInSingleValueFieldsFromRecord:(void*)arg1 ;
-(void)populateAddressBookPersonRecord:(void*)arg1 ;
-(void)populateCNContact:(id)arg1 ;
-(BOOL)saveChangesToAddressBook:(void*)arg1 ;
-(BOOL)deleteContactFromAddressBook:(void*)arg1 ;
-(BOOL)saveChangesToContactStore:(id)arg1 ;
-(BOOL)deleteContactFromContactStore:(id)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)department;
-(void)setDates:(WAContactMultiValueProperty *)arg1 ;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setSocialProfiles:(WAContactMultiValueProperty *)arg1 ;
-(NSString *)jobTitle;
-(BOOL)isReadonly;
-(WAContactMultiValueProperty *)socialProfiles;
-(WAContactProperty *)birthday;
-(WAContactMultiValueProperty *)emails;
-(WAContactMultiValueProperty *)phones;
-(NSString *)phoneticLastName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticMiddleName;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(void)setJobTitle:(NSString *)arg1 ;
-(WAContactMultiValueProperty *)notes;
-(void)setNotes:(WAContactMultiValueProperty *)arg1 ;
-(void)setBirthday:(WAContactProperty *)arg1 ;
-(void)setDepartment:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setAddresses:(WAContactMultiValueProperty *)arg1 ;
-(WAContactMultiValueProperty *)addresses;
-(void)setReadonly:(BOOL)arg1 ;
-(NSString *)compositeName;
-(CNContact *)cnContact;
-(void)setCnContact:(CNContact *)arg1 ;
-(void)setEmails:(WAContactMultiValueProperty *)arg1 ;
-(void)setPhones:(WAContactMultiValueProperty *)arg1 ;
-(WAContactMultiValueProperty *)dates;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(NSString *)middleName;
-(unsigned)nameFormat;
@end
