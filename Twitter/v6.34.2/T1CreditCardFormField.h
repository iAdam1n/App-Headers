/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNFormField.h>

@class TFNTwitterCreditCard;

@interface T1CreditCardFormField : TFNFormField {

	char _inputMode;
	BOOL _shouldFocusOnInitialDisplay;
	BOOL _autoDismissKeyboardOnValid;
	BOOL _showRightAccessoryLockIcon;
	BOOL _editing;
	TFNTwitterCreditCard* _creditCard;
	unsigned long long _supportedCardTypes;

}

@property (nonatomic,readonly) TFNTwitterCreditCard * creditCard;                  //@synthesize creditCard=_creditCard - In the implementation block
@property (nonatomic,readonly) char inputMode;                                     //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedCardTypes;              //@synthesize supportedCardTypes=_supportedCardTypes - In the implementation block
@property (assign,nonatomic) BOOL shouldFocusOnInitialDisplay;                     //@synthesize shouldFocusOnInitialDisplay=_shouldFocusOnInitialDisplay - In the implementation block
@property (assign,nonatomic) BOOL autoDismissKeyboardOnValid;                      //@synthesize autoDismissKeyboardOnValid=_autoDismissKeyboardOnValid - In the implementation block
@property (assign,nonatomic) BOOL showRightAccessoryLockIcon;                      //@synthesize showRightAccessoryLockIcon=_showRightAccessoryLockIcon - In the implementation block
@property (nonatomic,readonly) BOOL isEditing; 
@property (assign,nonatomic) BOOL editing;                                         //@synthesize editing=_editing - In the implementation block
+(/*^block*/id)validationBlockForSupportedCardTypes:(unsigned long long)arg1 onValidCallback:(/*^block*/id)arg2 ;
+(id)creditCardFieldWithFormField:(id)arg1 creditCard:(id)arg2 ;
+(id)creditCardFieldWithFormField:(id)arg1 creditCard:(id)arg2 inputMode:(char)arg3 supportedCardTypes:(unsigned long long)arg4 ;
+(id)validatePANOnlyModeWithFormField:(id)arg1 ;
+(BOOL)creditCard:(id)arg1 matchesSupportedCardTypes:(unsigned long long)arg2 ;
+(id)validatePANAndExpirationDateWithFormField:(id)arg1 ;
+(id)validateAllCreditCardInformation:(id)arg1 ;
-(unsigned long long)supportedCardTypes;
-(BOOL)shouldFocusOnInitialDisplay;
-(BOOL)showRightAccessoryLockIcon;
-(void)setShowRightAccessoryLockIcon:(BOOL)arg1 ;
-(void)setShouldFocusOnInitialDisplay:(BOOL)arg1 ;
-(void)setAutoDismissKeyboardOnValid:(BOOL)arg1 ;
-(BOOL)autoDismissKeyboardOnValid;
-(void)updateInputMode:(char)arg1 ;
-(void)updateSupportedCardTypes:(unsigned long long)arg1 ;
-(id)initWithCreditCard:(id)arg1 ;
-(BOOL)editing;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(char)inputMode;
-(TFNTwitterCreditCard *)creditCard;
@end

