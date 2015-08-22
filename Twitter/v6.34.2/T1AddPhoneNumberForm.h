/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNForm.h>
#import <Twitter/TFNValuePickerDataSource.h>

@class NSString, TFNFormField, TFNPhoneNumberFormatter, TFNTwitterCallingCode, NSArray, TFNTwitterAccount, TFNTwitterCallToAction;

@interface T1AddPhoneNumberForm : TFNForm <TFNValuePickerDataSource> {

	NSString* _header;
	TFNFormField* _callingCodeField;
	TFNPhoneNumberFormatter* _phoneNumberFormatter;
	TFNTwitterCallingCode* _callingCode;
	TFNFormField* _phoneNumberField;
	NSArray* _callingCodes;
	TFNTwitterAccount* _account;
	TFNTwitterCallToAction* _headerCallToAction;

}

@property (nonatomic,copy) NSString * header;                                             //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) NSString * unformattedNumberWithCallingCode; 
@property (nonatomic,readonly) BOOL phoneNumberFieldHasInput; 
@property (nonatomic,copy) TFNFormField * callingCodeField;                               //@synthesize callingCodeField=_callingCodeField - In the implementation block
@property (nonatomic,retain) TFNPhoneNumberFormatter * phoneNumberFormatter;              //@synthesize phoneNumberFormatter=_phoneNumberFormatter - In the implementation block
@property (nonatomic,retain) TFNTwitterCallingCode * callingCode;                         //@synthesize callingCode=_callingCode - In the implementation block
@property (nonatomic,copy) TFNFormField * phoneNumberField;                               //@synthesize phoneNumberField=_phoneNumberField - In the implementation block
@property (nonatomic,copy) NSArray * callingCodes;                                        //@synthesize callingCodes=_callingCodes - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterCallToAction * headerCallToAction;                 //@synthesize headerCallToAction=_headerCallToAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valuesForPicker:(id)arg1 ;
-(id)initiallyPickedValueForPicker:(id)arg1 ;
-(TFNPhoneNumberFormatter *)phoneNumberFormatter;
-(void)setPhoneNumberFormatter:(TFNPhoneNumberFormatter *)arg1 ;
-(TFNFormField *)phoneNumberField;
-(NSString *)unformattedNumberWithCallingCode;
-(TFNFormField *)callingCodeField;
-(BOOL)phoneNumberFieldHasInput;
-(void)handlePhoneAlreadyRegisteredError;
-(void)setCallingCodeField:(TFNFormField *)arg1 ;
-(void)setPhoneNumberField:(TFNFormField *)arg1 ;
-(long long)inputValueTypeForFormField:(id)arg1 ;
-(void)setCallingCode:(TFNTwitterCallingCode *)arg1 ;
-(TFNTwitterCallingCode *)callingCode;
-(TFNTwitterCallToAction *)headerCallToAction;
-(NSArray *)callingCodes;
-(void)setCallingCodes:(NSArray *)arg1 ;
-(void)setHeaderCallToAction:(TFNTwitterCallToAction *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sections;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(id)headerText;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
@end
