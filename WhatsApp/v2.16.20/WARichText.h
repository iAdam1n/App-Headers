/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSMutableAttributedString, NSMutableArray;

@interface WARichText : NSObject {

	NSMutableAttributedString* _attributedString;
	NSMutableArray* _mentions;

}
+(id)attributedText:(id)arg1 withMentions:(id)arg2 contactsStorage:(id)arg3 chatsStorage:(id)arg4 ;
+(id)mentionStringForName:(id)arg1 jid:(id)arg2 ;
+(id)detectMentionsInAttributedText:(id)arg1 ;
+(id)attributedText:(id)arg1 withMentions:(id)arg2 ;
+(void)updateMentionAttributesInText:(id)arg1 nameAttributes:(id)arg2 atAttributes:(id)arg3 ;
-(id)textForMessaging;
-(BOOL)containsMentions;
-(id)mentionsForMessaging;
-(id)trackMentionAtRange:(NSRange)arg1 jid:(id)arg2 ;
-(void)invalidateMention:(id)arg1 ;
-(BOOL)isLocationInsideOfMention:(unsigned long long)arg1 ;
-(void)resetStringAttributesToDefaults;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)mentions;
@end
