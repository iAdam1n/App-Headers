/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBSearchUtilities : NSObject
+(id)normalizeSemantic:(id)arg1 myFBID:(id)arg2 ;
+(id)getGrammarTypeFromEntityModelObject:(id)arg1 ;
+(id)getGrammarTypeFromEntityAvatar:(id)arg1 ;
+(id)handleTextAddAt:(unsigned long long)arg1 text:(id)arg2 existingStructuredText:(id)arg3 ;
+(id)handleTextDeleteAt:(NSRange)arg1 existingStructuredText:(id)arg2 ;
+(id)_dedupeMe:(id)arg1 myFBID:(id)arg2 ;
+(id)_shredFragments:(id)arg1 ;
+(id)_structuredTextToUniqueString:(id)arg1 ;
+(id)splitResultString:(id)arg1 includeSpace:(BOOL)arg2 pairQuote:(BOOL)arg3 ;
+(id)_getGrammarTypeFromEntityObject:(id)arg1 ;
+(BOOL)structuredText:(id)arg1 isEqualToStructuredText:(id)arg2 ;
@end
