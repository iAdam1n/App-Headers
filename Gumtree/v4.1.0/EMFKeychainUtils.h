/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface EMFKeychainUtils : NSObject
+(id)newSearchDictionary:(id)arg1 ;
+(id)searchKeychainMatching:(id)arg1 ;
+(BOOL)updateKeychainValue:(id)arg1 forIdentifier:(id)arg2 ;
+(BOOL)createKeychainValue:(id)arg1 forIdentifier:(id)arg2 ;
+(BOOL)updateOrCreateKeychainValue:(id)arg1 forIdentifier:(id)arg2 ;
+(BOOL)setString:(id)arg1 forSecureKey:(id)arg2 ;
+(BOOL)deleteValueForKey:(id)arg1 ;
+(id)stringForSecureKey:(id)arg1 withDefault:(id)arg2 ;
@end

