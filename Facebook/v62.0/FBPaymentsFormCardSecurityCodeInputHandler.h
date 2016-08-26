/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsFormTextInputHandler.h>

@class FBPaymentsFormTextFieldView;

@interface FBPaymentsFormCardSecurityCodeInputHandler : FBPaymentsFormTextInputHandler {

	BOOL _cardNumberIsRequired;
	long long _association;
	FBPaymentsFormTextFieldView* _cardNumberView;

}

@property (assign,nonatomic) long long association;                                     //@synthesize association=_association - In the implementation block
@property (nonatomic,retain) FBPaymentsFormTextFieldView * cardNumberView;              //@synthesize cardNumberView=_cardNumberView - In the implementation block
-(void)setAssociation:(long long)arg1 ;
-(id)textInputStateForText:(id)arg1 truncateExceededCharacters:(BOOL)arg2 ;
-(id)effectiveCharacterSet;
-(id)processChangeFromState:(id)arg1 toState:(id)arg2 textInputEvent:(long long)arg3 ;
-(void)doNotRequireCardNumber;
-(unsigned long long)expectedLengthOfEffectiveCharactersWithInputedEffectiveText:(id)arg1 ;
-(id)errorDescriptionForError:(id)arg1 ;
-(BOOL)_isCardAssociatedWithAmericanExpress;
-(FBPaymentsFormTextFieldView *)cardNumberView;
-(void)setCardNumberView:(FBPaymentsFormTextFieldView *)arg1 ;
-(BOOL)isReady;
-(id)init;
-(long long)keyboardType;
-(long long)association;
@end
