/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPDialpadModelDelegate, SKPDialpadModelCallAndSMSDelegate;
@class SKPMutablePhoneNumber, NSString, SKPPhoneNumber, SKPValidatedPhoneNumber;

@interface SKPDialpadModel : NSObject {

	SKPMutablePhoneNumber* _phoneNumber;
	id<SKPDialpadModelDelegate> _delegate;
	id<SKPDialpadModelCallAndSMSDelegate> _callAndSMSDelegate;
	NSString* _contactName;
	SKPPhoneNumber* _numberWhenCleared;

}

@property (nonatomic,retain) SKPPhoneNumber * numberWhenCleared;                                    //@synthesize numberWhenCleared=_numberWhenCleared - In the implementation block
@property (nonatomic,copy,readonly) SKPValidatedPhoneNumber * validatedPhoneNumber; 
@property (nonatomic,retain) SKPMutablePhoneNumber * phoneNumber;                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedFullPhoneNumberString; 
@property (nonatomic,copy,readonly) NSString * localizedCountryCodeName; 
@property (assign,nonatomic,__weak) id<SKPDialpadModelDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SKPDialpadModelCallAndSMSDelegate> callAndSMSDelegate;              //@synthesize callAndSMSDelegate=_callAndSMSDelegate - In the implementation block
@property (nonatomic,readonly) BOOL containsOnlyCountryCode; 
@property (nonatomic,copy) NSString * contactName;                                                  //@synthesize contactName=_contactName - In the implementation block
+(id)keyPathsForValuesAffectingFormattedFullPhoneNumberString;
+(id)keyPathsForValuesAffectingLocalizedCountryCodeName;
+(id)keyPathsForValuesAffectingValidatedPhoneNumber;
-(NSString *)formattedFullPhoneNumberString;
-(void)pasteString:(id)arg1 ;
-(SKPValidatedPhoneNumber *)validatedPhoneNumber;
-(id)convertPastingStringRespectingCountryHabits:(id)arg1 ;
-(id<SKPDialpadModelCallAndSMSDelegate>)callAndSMSDelegate;
-(NSString *)localizedCountryCodeName;
-(BOOL)containsOnlyCountryCode;
-(void)deleteCharacter;
-(void)attemptCreatingSMSConversation;
-(void)setCallAndSMSDelegate:(id<SKPDialpadModelCallAndSMSDelegate>)arg1 ;
-(SKPPhoneNumber *)numberWhenCleared;
-(void)setNumberWhenCleared:(SKPPhoneNumber *)arg1 ;
-(id)init;
-(void)setDelegate:(id<SKPDialpadModelDelegate>)arg1 ;
-(void)dealloc;
-(id<SKPDialpadModelDelegate>)delegate;
-(void)appendString:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SKPMutablePhoneNumber *)phoneNumber;
-(void)clear;
-(void)setCountryCode:(id)arg1 ;
-(NSString *)contactName;
-(void)call;
-(void)setContactName:(NSString *)arg1 ;
-(void)setPhoneNumber:(SKPMutablePhoneNumber *)arg1 ;
-(void)restore;
@end
