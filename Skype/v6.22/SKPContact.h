/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPALEMappedObject.h>

@class NSString, NSURL, SKPProvisioning, SKPValidatedPhoneNumber, SKPPhoneNumberCollection, NSDate, NSArray, NSTimeZone, NSNumber, SKPCollationSortingItem, UIImage, SKPConversation, SKPAPSBot, NSAttributedString;

@interface SKPContact : SKPALEMappedObject {

	unsigned long long _capabilities;
	NSString* _richMoodMessage;
	BOOL _isTrusted;
	BOOL _observingForCollationSorting;
	BOOL _listenForAuthorizationNotifications;
	BOOL _listenForShortCircuitAuthorizationNotifications;
	BOOL _isMyself;
	NSURL* _avatarURL;
	SKPProvisioning* _provisioning;
	NSString* _unescapedDisplayName;
	NSString* _givenDisplayName;
	NSString* _originalUnescapedDisplayName;
	NSString* _skypeName;
	SKPValidatedPhoneNumber* _PSTNNumber;
	NSString* _moodMessage;
	long long _presence;
	unsigned long long _type;
	SKPPhoneNumberCollection* _phoneNumbers;
	NSString* _country;
	long long _age;
	long long _gender;
	NSString* _city;
	NSURL* _homepage;
	NSDate* _birthday;
	NSArray* _languages;
	NSTimeZone* _timeZone;
	NSNumber* _numberOfContacts;
	SKPCollationSortingItem* _collationSortingItem;
	long long _mobileEndpoints;
	NSDate* _lastOnline;
	UIImage* _avatarImage;
	SKPConversation* _conversation;
	SKPAPSBot* _botInfo;
	double _avatarImageTimestamp;
	NSString* _about;
	long long _authorizationRequestsCount;
	long long _authLevel;
	long long _contactAuthorizationObservationCount;
	long long _contactShortCircuitAuthorizationObservationCount;
	NSString* _homePhoneNumber;
	NSString* _officePhoneNumber;
	NSString* _mobilePhoneNumber;
	NSString* _assigned1PhoneNumber;
	NSString* _assigned2PhoneNumber;
	NSString* _assigned3PhoneNumber;
	NSString* _assigned1PhoneNumberLabel;
	NSString* _assigned2PhoneNumberLabel;
	NSString* _assigned3PhoneNumberLabel;
	NSString* _PSTNNumberString;

}

@property (nonatomic,readonly) NSAttributedString * titleAttributedString; 
@property (nonatomic,retain) NSString * originalUnescapedDisplayName;                                 //@synthesize originalUnescapedDisplayName=_originalUnescapedDisplayName - In the implementation block
@property (nonatomic,retain) NSString * unescapedDisplayName;                                         //@synthesize unescapedDisplayName=_unescapedDisplayName - In the implementation block
@property (nonatomic,retain) NSString * givenDisplayName;                                             //@synthesize givenDisplayName=_givenDisplayName - In the implementation block
@property (nonatomic,retain) UIImage * avatarImage;                                                   //@synthesize avatarImage=_avatarImage - In the implementation block
@property (assign,nonatomic) double avatarImageTimestamp;                                             //@synthesize avatarImageTimestamp=_avatarImageTimestamp - In the implementation block
@property (nonatomic,readonly) SKPProvisioning * provisioning;                                        //@synthesize provisioning=_provisioning - In the implementation block
@property (nonatomic,retain) NSDate * lastOnline;                                                     //@synthesize lastOnline=_lastOnline - In the implementation block
@property (nonatomic,retain) NSString * about;                                                        //@synthesize about=_about - In the implementation block
@property (assign,nonatomic) long long authorizationRequestsCount;                                    //@synthesize authorizationRequestsCount=_authorizationRequestsCount - In the implementation block
@property (nonatomic,readonly) long long authLevel;                                                   //@synthesize authLevel=_authLevel - In the implementation block
@property (nonatomic,retain) SKPCollationSortingItem * collationSortingItem;                          //@synthesize collationSortingItem=_collationSortingItem - In the implementation block
@property (assign,nonatomic) BOOL observingForCollationSorting;                                       //@synthesize observingForCollationSorting=_observingForCollationSorting - In the implementation block
@property (assign,nonatomic) long long contactAuthorizationObservationCount;                          //@synthesize contactAuthorizationObservationCount=_contactAuthorizationObservationCount - In the implementation block
@property (assign,nonatomic) BOOL listenForAuthorizationNotifications;                                //@synthesize listenForAuthorizationNotifications=_listenForAuthorizationNotifications - In the implementation block
@property (assign,nonatomic) long long contactShortCircuitAuthorizationObservationCount;              //@synthesize contactShortCircuitAuthorizationObservationCount=_contactShortCircuitAuthorizationObservationCount - In the implementation block
@property (assign,nonatomic) BOOL listenForShortCircuitAuthorizationNotifications;                    //@synthesize listenForShortCircuitAuthorizationNotifications=_listenForShortCircuitAuthorizationNotifications - In the implementation block
@property (nonatomic,copy) NSString * homePhoneNumber;                                                //@synthesize homePhoneNumber=_homePhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * officePhoneNumber;                                              //@synthesize officePhoneNumber=_officePhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * mobilePhoneNumber;                                              //@synthesize mobilePhoneNumber=_mobilePhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * assigned1PhoneNumber;                                           //@synthesize assigned1PhoneNumber=_assigned1PhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * assigned2PhoneNumber;                                           //@synthesize assigned2PhoneNumber=_assigned2PhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * assigned3PhoneNumber;                                           //@synthesize assigned3PhoneNumber=_assigned3PhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * assigned1PhoneNumberLabel;                                      //@synthesize assigned1PhoneNumberLabel=_assigned1PhoneNumberLabel - In the implementation block
@property (nonatomic,copy) NSString * assigned2PhoneNumberLabel;                                      //@synthesize assigned2PhoneNumberLabel=_assigned2PhoneNumberLabel - In the implementation block
@property (nonatomic,copy) NSString * assigned3PhoneNumberLabel;                                      //@synthesize assigned3PhoneNumberLabel=_assigned3PhoneNumberLabel - In the implementation block
@property (nonatomic,copy) NSString * PSTNNumberString;                                               //@synthesize PSTNNumberString=_PSTNNumberString - In the implementation block
@property (assign,nonatomic) long long presence;                                                      //@synthesize presence=_presence - In the implementation block
@property (nonatomic,retain) NSString * richMoodMessage;                                              //@synthesize richMoodMessage=_richMoodMessage - In the implementation block
@property (assign,nonatomic) BOOL isMyself;                                                           //@synthesize isMyself=_isMyself - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * skypeName;                                                  //@synthesize skypeName=_skypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationIdentity; 
@property (nonatomic,readonly) SKPValidatedPhoneNumber * PSTNNumber;                                  //@synthesize PSTNNumber=_PSTNNumber - In the implementation block
@property (nonatomic,readonly) NSString * moodMessage;                                                //@synthesize moodMessage=_moodMessage - In the implementation block
@property (getter=isOnline,nonatomic,readonly) BOOL online; 
@property (getter=isDoNotDisturb,nonatomic,readonly) BOOL doNotDisturb; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,readonly) unsigned long long type;                                               //@synthesize type=_type - In the implementation block
@property (getter=isPSTN,nonatomic,readonly) BOOL PSTN; 
@property (getter=isBot,nonatomic,readonly) BOOL bot; 
@property (getter=isEcho123,nonatomic,readonly) BOOL echo123; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) unsigned long long capabilitiesInGroupConversation; 
@property (nonatomic,retain) SKPPhoneNumberCollection * phoneNumbers;                                 //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,readonly) NSString * country;                                                    //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) long long age;                                                         //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) long long gender;                                                      //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) NSString * city;                                                       //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) NSURL * homepage;                                                      //@synthesize homepage=_homepage - In the implementation block
@property (nonatomic,readonly) NSDate * birthday;                                                     //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,readonly) NSArray * languages;                                                   //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                                                 //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfContacts;                                           //@synthesize numberOfContacts=_numberOfContacts - In the implementation block
@property (nonatomic,readonly) long long mkPresenceStatus; 
@property (nonatomic,readonly) NSURL * avatarURL;                                                     //@synthesize avatarURL=_avatarURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * avatarPlaceholderIcon; 
@property (nonatomic,copy,readonly) NSString * avatarStyle; 
@property (nonatomic,readonly) BOOL isCurrentAccountContact; 
@property (nonatomic,readonly) BOOL isGuestUser; 
@property (nonatomic,readonly) NSString * localizedLocation; 
@property (nonatomic,readonly) long long mobileEndpoints;                                             //@synthesize mobileEndpoints=_mobileEndpoints - In the implementation block
@property (nonatomic,readonly) BOOL canBeRemoved; 
@property (nonatomic,readonly) BOOL isTrusted;                                                        //@synthesize isTrusted=_isTrusted - In the implementation block
@property (nonatomic,readonly) long long authorization; 
@property (nonatomic,readonly) long long shortCircuitAuthorization; 
@property (getter=isAuthorizedByMe,nonatomic,readonly) BOOL authorizedByMe; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (getter=isNotYetAuthorized,nonatomic,readonly) BOOL notYetAuthorized; 
@property (nonatomic,readonly) SKPConversation * conversation;                                        //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) SKPAPSBot * botInfo;                                                     //@synthesize botInfo=_botInfo - In the implementation block
+(id)keyPathsForValuesAffectingTitleAttributedString;
+(void)skpCoreSpotlight_indexContactsChunk:(id)arg1 ;
+(void)skpCoreSpotlight_dispatchBlockOnDedicatedQueue:(/*^block*/id)arg1 ;
+(void)skpCoreSpotlight_indexContacts:(id)arg1 ;
+(id)lazyLoadedPropertiesKeypaths;
+(id)keyPathsForValuesAffectingDisplayName;
+(id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(BOOL*)arg3 ;
+(Class)associatedALEClass;
+(id)URLWithHomePageString:(id)arg1 ;
+(id)assignedPhoneNumberTypeLocalizedNameForSkyLibStringValue:(id)arg1 ;
+(id)avatarPlaceholderForContactType:(unsigned long long)arg1 ;
+(BOOL)contactIsAvailableForPresenceStatus:(long long)arg1 ;
+(BOOL)contactShouldDisplayLastOnlineForPresenceStatus:(long long)arg1 ;
+(id)keyPathsForValuesAffectingAvatarImage;
+(id)nullablePropertyKeys;
+(id)keyPathsForValuesAffectingMkPresenceStatus;
+(id)keyPathsForValuesAffectingConversationIdentity;
+(id)keyPathsForValuesAffectingAbout;
+(id)keyPathsForValuesAffectingIsGuestUser;
+(id)keyPathsForValuesAffectingPSTN;
+(id)keyPathsForValuesAffectingBot;
+(id)keyPathsForValuesAffectingEcho123;
+(id)keyPathsForValuesAffectingRichMoodMessage;
+(id)keyPathsForValuesAffectingIsCurrentAccountContact;
+(id)keyPathsForValuesAffectingAvatarPlaceholderIcon;
+(id)keyPathsForValuesAffectingAvatarStyle;
+(id)keyPathsForValuesAffectingLocalizedLocation;
+(id)keyPathsForValuesAffectingCanBeRemoved;
+(id)keyPathsForValuesAffectingAuthorization;
+(id)keyPathsForValuesAffectingBlocked;
+(id)keyPathsForValuesAffectingAuthorizedByMe;
+(id)keyPathsForValuesAffectingNotYetAuthorized;
+(id)keyPathsForValuesAffectingOnline;
+(id)keyPathsForValuesAffectingDoNotDisturb;
+(id)keyPathsForValuesAffectingAvailable;
+(id)propertyMapping;
-(id)localizedNameOfLabelMatchingString:(id)arg1 ;
-(id)PSTNNumberMatchingString:(id)arg1 ;
-(id)avatarImageDataWithSize:(CGSize)arg1 style:(id)arg2 mimeType:(id*)arg3 useWebAPI:(BOOL)arg4 ;
-(id)avatarImageDataWithSize:(CGSize)arg1 style:(id)arg2 mimeType:(id*)arg3 ;
-(NSAttributedString *)titleAttributedString;
-(id)skpCoreSpotlight_searchableItemAttributeSet;
-(void)skpCoreSpotlight_updateIndexedContact;
-(void)skpCoreSpotlight_indexContact;
-(void)skpCoreSpotlight_removeIndexedContact;
-(SKPProvisioning *)provisioning;
-(id)accountManager;
-(NSString *)skypeName;
-(long long)mkPresenceStatus;
-(NSString *)avatarStyle;
-(NSString *)avatarPlaceholderIcon;
-(NSString *)richMoodMessage;
-(id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id*)arg2 ;
-(void)initializeALEObjectWithObjectId:(unsigned long long)arg1 ;
-(NSString *)unescapedDisplayName;
-(NSURL *)avatarURL;
-(long long)presence;
-(NSString *)moodMessage;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(void)setPresence:(long long)arg1 ;
-(NSString *)conversationIdentity;
-(BOOL)flushLazyProperty:(id)arg1 ;
-(BOOL)isPSTN;
-(void)setUnescapedDisplayName:(NSString *)arg1 ;
-(SKPValidatedPhoneNumber *)PSTNNumber;
-(long long)authorization;
-(void)willSetValue:(id)arg1 forKey:(id)arg2 andUseMainQueueToSet:(BOOL)arg3 ;
-(id)otherPropertyKeysToIncludeInDebugDescription;
-(void)removeFromBuddyList;
-(long long)shortCircuitAuthorization;
-(void)setLastOnline:(NSDate *)arg1 ;
-(void)initializeObject;
-(NSString *)localizedLocation;
-(NSString *)givenDisplayName;
-(BOOL)observingForCollationSorting;
-(BOOL)isGuestUser;
-(void)setIsMyself:(BOOL)arg1 ;
-(void)onLocalizedIndexedCollationChanged:(id)arg1 ;
-(void)setObservingForCollationSorting:(BOOL)arg1 ;
-(void)updateCollationSortingItem;
-(void)setCollationSortingItem:(SKPCollationSortingItem *)arg1 ;
-(id)fetchAvatarImageOperation;
-(id)fetchBotInfoOperation;
-(void)setBotInfo:(SKPAPSBot *)arg1 ;
-(long long)contactAuthorizationObservationCount;
-(void)setContactAuthorizationObservationCount:(long long)arg1 ;
-(long long)contactShortCircuitAuthorizationObservationCount;
-(void)setContactShortCircuitAuthorizationObservationCount:(long long)arg1 ;
-(void)setListenForAuthorizationNotifications:(BOOL)arg1 ;
-(void)setListenForShortCircuitAuthorizationNotifications:(BOOL)arg1 ;
-(void)contactsWaitingForAuthorizationDidChangeNotification:(id)arg1 ;
-(void)shortCircuitContactsDidChangeNotification:(id)arg1 ;
-(void)setCustomPhoneNumberNameWithValue:(id)arg1 forAssignedLabel:(unsigned long long)arg2 onMainThread:(BOOL)arg3 ;
-(BOOL)isValidatedPhoneNumberProperty:(id)arg1 ;
-(unsigned long long)labelForPhoneNumberKey:(id)arg1 ;
-(void)setPhoneNumber:(id)arg1 forLabel:(unsigned long long)arg2 onMainThread:(BOOL)arg3 ;
-(NSString *)PSTNNumberString;
-(SKPAPSBot *)botInfo;
-(BOOL)isAuthorizedByMe;
-(void)setGivenDisplayName:(NSString *)arg1 ;
-(NSString *)about;
-(BOOL)isEcho123;
-(BOOL)isCurrentAccountContact;
-(BOOL)canBeRemoved;
-(BOOL)isNotYetAuthorized;
-(void)sendContactRequest:(id)arg1 ;
-(void)acceptContactRequest;
-(void)declineContactRequest;
-(void)blockAndRemoveFromBuddyList:(BOOL)arg1 ;
-(void)blockAndReportAbuse;
-(void)addToBuddyList;
-(BOOL)isDoNotDisturb;
-(BOOL)matchesPhoneNumber:(id)arg1 ;
-(unsigned long long)capabilitiesInGroupConversation;
-(void)changeGivenDisplayName:(id)arg1 ;
-(NSString *)originalUnescapedDisplayName;
-(void)setOriginalUnescapedDisplayName:(NSString *)arg1 ;
-(NSURL *)homepage;
-(NSNumber *)numberOfContacts;
-(SKPCollationSortingItem *)collationSortingItem;
-(long long)mobileEndpoints;
-(NSDate *)lastOnline;
-(double)avatarImageTimestamp;
-(void)setAvatarImageTimestamp:(double)arg1 ;
-(void)setAbout:(NSString *)arg1 ;
-(long long)authorizationRequestsCount;
-(void)setAuthorizationRequestsCount:(long long)arg1 ;
-(BOOL)listenForAuthorizationNotifications;
-(BOOL)listenForShortCircuitAuthorizationNotifications;
-(NSString *)homePhoneNumber;
-(void)setHomePhoneNumber:(NSString *)arg1 ;
-(NSString *)officePhoneNumber;
-(void)setOfficePhoneNumber:(NSString *)arg1 ;
-(NSString *)mobilePhoneNumber;
-(void)setMobilePhoneNumber:(NSString *)arg1 ;
-(NSString *)assigned1PhoneNumber;
-(void)setAssigned1PhoneNumber:(NSString *)arg1 ;
-(NSString *)assigned2PhoneNumber;
-(void)setAssigned2PhoneNumber:(NSString *)arg1 ;
-(NSString *)assigned3PhoneNumber;
-(void)setAssigned3PhoneNumber:(NSString *)arg1 ;
-(NSString *)assigned1PhoneNumberLabel;
-(void)setAssigned1PhoneNumberLabel:(NSString *)arg1 ;
-(NSString *)assigned2PhoneNumberLabel;
-(void)setAssigned2PhoneNumberLabel:(NSString *)arg1 ;
-(NSString *)assigned3PhoneNumberLabel;
-(void)setAssigned3PhoneNumberLabel:(NSString *)arg1 ;
-(void)setPSTNNumberString:(NSString *)arg1 ;
-(void)setRichMoodMessage:(NSString *)arg1 ;
-(BOOL)isMyself;
-(void)unblock;
-(void)dealloc;
-(unsigned long long)type;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(NSTimeZone *)timeZone;
-(NSString *)displayName;
-(NSString *)country;
-(SKPPhoneNumberCollection *)phoneNumbers;
-(NSArray *)languages;
-(long long)gender;
-(NSDate *)birthday;
-(NSString *)city;
-(long long)age;
-(unsigned long long)capabilities;
-(void)setPhoneNumbers:(SKPPhoneNumberCollection *)arg1 ;
-(BOOL)isBot;
-(BOOL)isTrusted;
-(BOOL)isAvailable;
-(SKPConversation *)conversation;
-(void)setAuthLevel:(long long)arg1 ;
-(long long)authLevel;
-(BOOL)isOnline;
-(BOOL)isBlocked;
@end
