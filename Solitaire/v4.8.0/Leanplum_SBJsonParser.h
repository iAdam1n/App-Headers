/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/Leanplum_SBJsonBase.h>
#import <SolitaireFree/Leanplum_SBJsonParser.h>

@interface Leanplum_SBJsonParser : Leanplum_SBJsonBase <Leanplum_SBJsonParser> {

	const char* c;

}
+(void)initialize;
-(BOOL)scanValue:(id*)arg1 ;
-(BOOL)scanIsAtEnd;
-(id)fragmentWithString:(id)arg1 ;
-(BOOL)scanRestOfDictionary:(id*)arg1 ;
-(BOOL)scanRestOfArray:(id*)arg1 ;
-(BOOL)scanRestOfString:(id*)arg1 ;
-(BOOL)scanRestOfFalse:(id*)arg1 ;
-(BOOL)scanRestOfTrue:(id*)arg1 ;
-(BOOL)scanRestOfNull:(id*)arg1 ;
-(BOOL)scanUnicodeChar:(unsigned short*)arg1 ;
-(BOOL)scanHexQuad:(unsigned short*)arg1 ;
-(id)objectWithString:(id)arg1 ;
-(BOOL)scanNumber:(id*)arg1 ;
@end
