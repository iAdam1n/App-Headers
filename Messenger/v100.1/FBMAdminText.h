/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, UIColor, FBMEventReminder;

@interface FBMAdminText : FBValueObject <NSCoding, NSCopying> {

	BOOL _isVideoCall;
	BOOL _gameIsNewHighScore;
	NSString* _genericAdminTextType;
	NSArray* _colorChoices;
	NSArray* _emojiChoices;
	NSArray* _botChoices;
	NSDictionary* _nicknameChoices;
	NSString* _threadIcon;
	UIColor* _themeColor;
	NSString* _participantID;
	NSString* _nickname;
	NSString* _event;
	NSString* _serverInfoData;
	NSString* _providerName;
	NSString* _adPreferencesLink;
	NSArray* _adProperties;
	NSString* _intentID;
	NSString* _gameType;
	long long _gameScore;
	unsigned long long _joinableModeUpdate;
	NSString* _smsParticipantPhoneNumber;
	NSString* _instantGameAppId;
	NSString* _bookingRequestId;
	FBMEventReminder* _eventReminder;
	NSString* _favoritedItemURL;

}

@property (nonatomic,copy,readonly) NSString * genericAdminTextType;                   //@synthesize genericAdminTextType=_genericAdminTextType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * colorChoices;                            //@synthesize colorChoices=_colorChoices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * emojiChoices;                            //@synthesize emojiChoices=_emojiChoices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * botChoices;                              //@synthesize botChoices=_botChoices - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * nicknameChoices;                    //@synthesize nicknameChoices=_nicknameChoices - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadIcon;                             //@synthesize threadIcon=_threadIcon - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                              //@synthesize themeColor=_themeColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * participantID;                          //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy,readonly) NSString * nickname;                               //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy,readonly) NSString * event;                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverInfoData;                         //@synthesize serverInfoData=_serverInfoData - In the implementation block
@property (nonatomic,readonly) BOOL isVideoCall;                                       //@synthesize isVideoCall=_isVideoCall - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerName;                           //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * adPreferencesLink;                      //@synthesize adPreferencesLink=_adPreferencesLink - In the implementation block
@property (nonatomic,copy,readonly) NSArray * adProperties;                            //@synthesize adProperties=_adProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * intentID;                               //@synthesize intentID=_intentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameType;                               //@synthesize gameType=_gameType - In the implementation block
@property (nonatomic,readonly) long long gameScore;                                    //@synthesize gameScore=_gameScore - In the implementation block
@property (nonatomic,readonly) BOOL gameIsNewHighScore;                                //@synthesize gameIsNewHighScore=_gameIsNewHighScore - In the implementation block
@property (nonatomic,readonly) unsigned long long joinableModeUpdate;                  //@synthesize joinableModeUpdate=_joinableModeUpdate - In the implementation block
@property (nonatomic,copy,readonly) NSString * smsParticipantPhoneNumber;              //@synthesize smsParticipantPhoneNumber=_smsParticipantPhoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * instantGameAppId;                       //@synthesize instantGameAppId=_instantGameAppId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bookingRequestId;                       //@synthesize bookingRequestId=_bookingRequestId - In the implementation block
@property (nonatomic,copy,readonly) FBMEventReminder * eventReminder;                  //@synthesize eventReminder=_eventReminder - In the implementation block
@property (nonatomic,copy,readonly) NSString * favoritedItemURL;                       //@synthesize favoritedItemURL=_favoritedItemURL - In the implementation block
-(BOOL)isVideoCall;
-(NSString *)genericAdminTextType;
-(NSString *)adPreferencesLink;
-(NSArray *)adProperties;
-(NSString *)gameType;
-(FBMEventReminder *)eventReminder;
-(NSString *)intentID;
-(NSString *)instantGameAppId;
-(NSString *)favoritedItemURL;
-(NSString *)threadIcon;
-(NSString *)smsParticipantPhoneNumber;
-(NSString *)serverInfoData;
-(NSArray *)colorChoices;
-(NSArray *)emojiChoices;
-(NSDictionary *)nicknameChoices;
-(long long)gameScore;
-(NSArray *)botChoices;
-(BOOL)gameIsNewHighScore;
-(unsigned long long)joinableModeUpdate;
-(NSString *)bookingRequestId;
-(id)initWithGenericAdminTextType:(id)arg1 colorChoices:(id)arg2 emojiChoices:(id)arg3 botChoices:(id)arg4 nicknameChoices:(id)arg5 threadIcon:(id)arg6 themeColor:(id)arg7 participantID:(id)arg8 nickname:(id)arg9 event:(id)arg10 serverInfoData:(id)arg11 isVideoCall:(BOOL)arg12 providerName:(id)arg13 adPreferencesLink:(id)arg14 adProperties:(id)arg15 intentID:(id)arg16 gameType:(id)arg17 gameScore:(long long)arg18 gameIsNewHighScore:(BOOL)arg19 joinableModeUpdate:(unsigned long long)arg20 smsParticipantPhoneNumber:(id)arg21 instantGameAppId:(id)arg22 bookingRequestId:(id)arg23 eventReminder:(id)arg24 favoritedItemURL:(id)arg25 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)event;
-(NSString *)participantID;
-(NSString *)providerName;
-(NSString *)nickname;
-(UIColor *)themeColor;
@end
