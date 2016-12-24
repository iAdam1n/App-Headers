/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUConfigurableTextFieldDelegate.h>

@class EBUPhoneNumberFormatter;

@interface EBUPhoneNumberTextFieldDelegate : EBUConfigurableTextFieldDelegate {

	EBUPhoneNumberFormatter* _formatter;

}

@property (retain) EBUPhoneNumberFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
-(id)initWithCountryCode:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(EBUPhoneNumberFormatter *)formatter;
-(void)setFormatter:(EBUPhoneNumberFormatter *)arg1 ;
@end
