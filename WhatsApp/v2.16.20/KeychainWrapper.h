/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface KeychainWrapper : NSObject
+(id)keychainValueWithIdentifier:(id)arg1 ;
+(void)setKeychainValue:(id)arg1 forIdentifier:(id)arg2 ;
+(void)deleteKeychainValueWithIdentifier:(id)arg1 ;
+(id)keychainItemMatching:(id)arg1 withAccessibilityControl:(BOOL)arg2 ;
+(BOOL)updateKeychainValue:(id)arg1 forIdentifier:(id)arg2 ;
+(BOOL)createKeychainValue:(id)arg1 forIdentifier:(id)arg2 ;
+(id)searchDictionary:(id)arg1 withAccessibilityControl:(BOOL)arg2 ;
@end
