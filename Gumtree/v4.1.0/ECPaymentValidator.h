/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ECPaymentValidator : NSObject
+(id)validateKeyPath:(id)arg1 fromPaymentMethod:(id)arg2 ;
+(BOOL)validateNameOfPaymentMethod:(id)arg1 ;
+(BOOL)validateCCNameOfPaymentMethod:(id)arg1 ;
+(BOOL)validateCCNumberOfPaymentMethod:(id)arg1 ;
+(BOOL)validateCCExpireOfPaymentMethod:(id)arg1 ;
+(BOOL)validateCCVerificationNumberOfPaymentMethod:(id)arg1 ;
+(id)validatePaymentMethod:(id)arg1 ;
@end
