/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsFormTextInputHandler.h>

@class NSString;

@interface FBPaymentsFormZipCodeTextInputHandler : FBPaymentsFormTextInputHandler {

	NSString* _errorDescription;

}
-(id)textInputStateForText:(id)arg1 truncateExceededCharacters:(BOOL)arg2 ;
-(id)effectiveCharacterSet;
-(id)errorDescriptionForError:(id)arg1 ;
-(unsigned long long)expectedLengthOfEffectiveCharactersWithInputedEffectiveText:(id)arg1 ;
-(void)setErrorDescrition:(id)arg1 ;
-(id)init;
-(long long)keyboardType;
@end

