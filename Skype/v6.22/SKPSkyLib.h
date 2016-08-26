/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPSkylibSetupDelegate.h>
#import <Skype/ALESkyLibProtocol.h>

@class ALESkyLib, SKPSkylibSetup, NSLock, NSHashTable, NSMutableDictionary, NSArray, NSDictionary, NSString, NSDate;

@interface SKPSkyLib : NSObject <SKPSkylibSetupDelegate, ALESkyLibProtocol> {

	BOOL _videoLibReady;
	BOOL _isObservingLoginStatus;
	BOOL _backgroundModeActive;
	BOOL _userlessForegroundMode;
	BOOL _observeProvisioning;
	BOOL _observeIntentManager;
	int _skylibStatus;
	int _skylibNextGenerationCallingCapabilities;
	ALESkyLib* _aleSkylib;
	SKPSkylibSetup* _setup;
	long long _status;
	long long _nextGenerationCallingCapabilities;
	NSLock* _aleSkylibStopLock;
	NSHashTable* _delegates;
	NSMutableDictionary* _delegatesByPropertyKey;
	NSArray* _videoDevices;
	NSDictionary* _videoDevice;
	long long _mainApplicationIntent;

}

@property (nonatomic,readonly) NSString * currentLanguageCode; 
@property (nonatomic,readonly) NSArray * countryCodes; 
@property (nonatomic,retain) ALESkyLib * aleSkylib;                                                 //@synthesize aleSkylib=_aleSkylib - In the implementation block
@property (nonatomic,retain) NSLock * aleSkylibStopLock;                                            //@synthesize aleSkylibStopLock=_aleSkylibStopLock - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                               //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * delegatesByPropertyKey;                          //@synthesize delegatesByPropertyKey=_delegatesByPropertyKey - In the implementation block
@property (assign,nonatomic) int skylibStatus;                                                      //@synthesize skylibStatus=_skylibStatus - In the implementation block
@property (assign,nonatomic) long long status;                                                      //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int skylibNextGenerationCallingCapabilities;                           //@synthesize skylibNextGenerationCallingCapabilities=_skylibNextGenerationCallingCapabilities - In the implementation block
@property (assign,nonatomic) long long nextGenerationCallingCapabilities;                           //@synthesize nextGenerationCallingCapabilities=_nextGenerationCallingCapabilities - In the implementation block
@property (assign,nonatomic) BOOL videoLibReady;                                                    //@synthesize videoLibReady=_videoLibReady - In the implementation block
@property (nonatomic,retain) NSArray * videoDevices;                                                //@synthesize videoDevices=_videoDevices - In the implementation block
@property (nonatomic,retain) NSDictionary * currentVideoDevice; 
@property (nonatomic,retain) NSDictionary * videoDevice;                                            //@synthesize videoDevice=_videoDevice - In the implementation block
@property (assign,nonatomic) BOOL isObservingLoginStatus;                                           //@synthesize isObservingLoginStatus=_isObservingLoginStatus - In the implementation block
@property (assign,nonatomic) BOOL backgroundModeActive;                                             //@synthesize backgroundModeActive=_backgroundModeActive - In the implementation block
@property (assign,nonatomic) BOOL userlessForegroundMode;                                           //@synthesize userlessForegroundMode=_userlessForegroundMode - In the implementation block
@property (assign,nonatomic) BOOL observeProvisioning;                                              //@synthesize observeProvisioning=_observeProvisioning - In the implementation block
@property (assign,nonatomic) BOOL observeIntentManager;                                             //@synthesize observeIntentManager=_observeIntentManager - In the implementation block
@property (assign,nonatomic) long long mainApplicationIntent;                                       //@synthesize mainApplicationIntent=_mainApplicationIntent - In the implementation block
@property (nonatomic,retain) SKPSkylibSetup * setup;                                                //@synthesize setup=_setup - In the implementation block
@property (nonatomic,readonly) NSDate * serverDate; 
@property (nonatomic,readonly) unsigned long long maxChatParticipants; 
@property (nonatomic,readonly) unsigned long long maxVoiceParticipants; 
@property (nonatomic,readonly) unsigned long long maxVideoParticipants; 
@property (getter=isVideoDeviceAvailable,nonatomic,readonly) BOOL videoDeviceAvaiable; 
@property (nonatomic,readonly) unsigned long long unreadInboxConversations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acceptedCameraDevicePath;
+(BOOL)isAcceptedCameraDevicePath:(id)arg1 ;
+(id)keyPathsForValuesAffectingIsVideoDeviceAvailable;
-(id)internationalPrefixForCountry:(id)arg1 ;
-(unsigned long long)phoneNumberPrefixForCountryCode:(id)arg1 ;
-(id)displayNameForCountryCode:(id)arg1 ;
-(id)countryCodeForPhoneNumber:(id)arg1 ;
-(id)countryCodesForISOCode:(id)arg1 ;
-(id)defaultCountryCodeForUser:(BOOL*)arg1 ;
-(id)isoCountryInfoDictionary;
-(id)supplementaryCountryCodes;
-(id)displayNameForLanguageCode:(id)arg1 ;
-(NSString *)currentLanguageCode;
-(NSArray *)countryCodes;
-(id)errorWithAccountValidationResult:(int)arg1 property:(id)arg2 ;
-(id)localizationKeyWithValidationResult:(int)arg1 ;
-(BOOL)validateEmail:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateSkypename:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validatePassword:(id*)arg1 forSkypename:(id)arg2 error:(id*)arg3 ;
-(id)modelObjectsBySupportedItemsInPack:(id)arg1 ;
-(id)emoticonIdentifiersInPackWithID:(unsigned long long)arg1 ;
-(void)enumerateTabsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isTabsSupported;
-(void)enumeratePacksInPackSetWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allEmoticonsIdentifiers;
-(void)enumeratePacksInTabWithObjectId:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addSkylibDelegate:(id)arg1 ;
-(void)removeSkylibDelegate:(id)arg1 ;
-(ALESkyLib *)aleSkylib;
-(void)OnLibStatusChange:(id)arg1 andNewstatus:(int)arg2 ;
-(void)OnAccountPartnerLinkResult:(id)arg1 andCode:(int)arg2 andBody:(id)arg3 ;
-(void)OnApp2AppDatagram:(id)arg1 andAppname:(id)arg2 andStream:(id)arg3 andData:(id)arg4 ;
-(void)OnApp2AppStreamListChange:(id)arg1 andAppname:(id)arg2 andListtype:(int)arg3 andStreams:(id)arg4 andReceivedsizes:(id)arg5 ;
-(void)OnAuthTokenResult:(id)arg1 andSuccess:(BOOL)arg2 andRequest_id:(unsigned)arg3 andToken:(id)arg4 ;
-(void)OnAvailableVideoDeviceListChange:(id)arg1 ;
-(void)OnCatalogBuyFailed:(id)arg1 andCode:(int)arg2 andJsonbody:(id)arg3 ;
-(void)OnCatalogBuySuccess:(id)arg1 andJsonbody:(id)arg2 ;
-(void)OnCatalogGetFailed:(id)arg1 andCode:(int)arg2 ;
-(void)OnCatalogGetSuccess:(id)arg1 andIdlist:(id)arg2 ;
-(void)OnChatServiceConnectivity:(id)arg1 ;
-(void)OnConversationListChange:(id)arg1 andConversationobjectid:(unsigned)arg2 andType:(int)arg3 andAdded:(BOOL)arg4 ;
-(void)OnEmoticonListUpdated:(id)arg1 ;
-(void)OnLibPropChange:(id)arg1 andKey:(int)arg2 andLib_key:(unsigned)arg3 ;
-(void)OnMessage:(id)arg1 andMessageobjectid:(unsigned)arg2 andChangesinboxtimestamp:(BOOL)arg3 andSupersedeshistorymessageobjectid:(unsigned)arg4 andConversationobjectid:(unsigned)arg5 andShownotification:(BOOL)arg6 ;
-(void)OnMessageAnnotation:(id)arg1 andAnnotationobjectid:(unsigned)arg2 ;
-(void)OnObjectDelete:(id)arg1 andObjecttype:(int)arg2 andObjectid:(unsigned)arg3 ;
-(void)OnObjectPropertyChangeWithValue:(id)arg1 andObjectid:(unsigned)arg2 andPropkey:(int)arg3 andProperty:(id)arg4 ;
-(void)OnOperationModeChanged:(id)arg1 andLevel:(unsigned)arg2 ;
-(void)OnPartnerLinkInfoResult:(id)arg1 andCode:(int)arg2 andSkypename:(id)arg3 andUid:(id)arg4 andAccesstoken:(id)arg5 andPartnerusername:(id)arg6 ;
-(void)OnPushHandlingComplete:(id)arg1 andPushid:(unsigned)arg2 andResult:(int)arg3 ;
-(void)OnRegisterContextsComplete:(id)arg1 andSuccess:(int)arg2 andRequestid:(unsigned)arg3 ;
-(void)addSkylibDelegate:(id)arg1 forPropertyKey:(int)arg2 ;
-(void)removeSkylibDelegate:(id)arg1 forPropertyKey:(int)arg2 ;
-(void)setNextGenerationCallingCapabilities:(long long)arg1 ;
-(long long)nextGenerationCallingCapabilities;
-(void)synchronizeContacts;
-(void)executeBackgroundTask;
-(id)richTextEncodingForText:(id)arg1 ;
-(unsigned long long)maxVoiceParticipants;
-(unsigned long long)maxVideoParticipants;
-(unsigned long long)identityTypeForIdentity:(id)arg1 ;
-(void)setObserveProvisioning:(BOOL)arg1 ;
-(void)updateIntent;
-(int)skylibStatus;
-(BOOL)isObservingLoginStatus;
-(void)setIsObservingLoginStatus:(BOOL)arg1 ;
-(void)postLoginSetup;
-(void)setVideoLibReady:(BOOL)arg1 ;
-(NSMutableDictionary *)delegatesByPropertyKey;
-(void)setSkylibStatus:(int)arg1 ;
-(void)updateLoginStatusObservation;
-(void)setUpLogging;
-(void)setAleSkylib:(ALESkyLib *)arg1 ;
-(void)setupSeamlessUpgradeCapable;
-(void)setUpLocalization;
-(void)hardStop;
-(void)setObserveIntentManager:(BOOL)arg1 ;
-(NSLock *)aleSkylibStopLock;
-(id)pathForSkyLibLog;
-(void)clearOldLogsInPath:(id)arg1 maximumAge:(double)arg2 ;
-(void)createLogsDirectory;
-(id)skyLibLogFileName;
-(void)clearOldLogs;
-(void)setBackgroundModeActive:(BOOL)arg1 ;
-(void)setUserlessForegroundMode:(BOOL)arg1 ;
-(BOOL)videoLibReady;
-(id)availableVideoDevices;
-(NSArray *)videoDevices;
-(void)setVideoDevices:(NSArray *)arg1 ;
-(void)skylibSetup:(id)arg1 didChangeSetupForKey:(id)arg2 ;
-(void)deleteLogsDirectory;
-(void)enterBackgroundMode;
-(void)exitBackgroundMode;
-(void)enableUserlessForegroundMode;
-(void)disableUserlessForegroundMode;
-(void)inactivateEndpoint;
-(void)changePrivateSkypeMode:(BOOL)arg1 ;
-(void)changeSuperNodeFilteringMode:(long long)arg1 ;
-(void)changeTemporaryDisconnectTimeout:(double)arg1 ;
-(void)removeTemporaryDisconnect;
-(void)changeLogLevel:(long long)arg1 ;
-(id)deviceForMediaType:(unsigned long long)arg1 ;
-(BOOL)isVideoDeviceAvailable;
-(id)emoticonIdentifiersInPackWithName:(id)arg1 ;
-(id)listOfMediaDocumentIDsForPacksInPackSetWithName:(id)arg1 ;
-(id)listOfMediaDocumentIDsForTabs;
-(id)listOfMediaDocumentIDsForSectionsInTabWithObjectId:(unsigned)arg1 ;
-(long long)inboundVideoAuthorizationPolicy;
-(unsigned long long)unreadInboxConversations;
-(id)editableTextForXml:(id)arg1 ;
-(void)setSetup:(SKPSkylibSetup *)arg1 ;
-(void)setAleSkylibStopLock:(NSLock *)arg1 ;
-(void)setDelegatesByPropertyKey:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)videoDevice;
-(void)setVideoDevice:(NSDictionary *)arg1 ;
-(BOOL)backgroundModeActive;
-(BOOL)userlessForegroundMode;
-(BOOL)observeProvisioning;
-(BOOL)observeIntentManager;
-(int)skylibNextGenerationCallingCapabilities;
-(long long)mainApplicationIntent;
-(void)setSkylibNextGenerationCallingCapabilities:(int)arg1 ;
-(void)setMainApplicationIntent:(long long)arg1 ;
-(NSDate *)serverDate;
-(void)dealloc;
-(id)init;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)bootstrap;
-(unsigned long long)maxChatParticipants;
-(NSDictionary *)currentVideoDevice;
-(void)setCurrentVideoDevice:(NSDictionary *)arg1 ;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(SKPSkylibSetup *)setup;
@end
