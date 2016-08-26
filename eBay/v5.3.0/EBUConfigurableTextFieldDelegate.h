/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface EBUConfigurableTextFieldDelegate : NSObject <UITextFieldDelegate> {

	BOOL numbersOnly;
	long long maxLength;

}

@property (assign,nonatomic) BOOL numbersOnly; 
@property (assign,nonatomic) long long maxLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)nonDigitsInTextField:(id)arg1 beforeOffset:(long long)arg2 ;
+(BOOL)containsNumbersOnly:(id)arg1 ;
+(void)vibrate;
+(long long)lengthOfString:(id)arg1 afterChangingCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
+(id)positionInTextField:(id)arg1 after:(long long)arg2 ;
+(void)getSelectionInTextField:(id)arg1 withSelectedTextRange:(id)arg2 forStart:(long long*)arg3 forEnd:(long long*)arg4 ;
-(BOOL)numbersOnly;
-(void)setNumbersOnly:(BOOL)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setMaxLength:(long long)arg1 ;
-(long long)maxLength;
@end
