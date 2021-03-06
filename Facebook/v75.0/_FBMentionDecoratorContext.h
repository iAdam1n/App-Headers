/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _FBMentionDecoratorContext : NSObject <NSCopying> {

	BOOL _canExtendRange;
	unsigned long long _caretPosition;
	NSRange _replacementRange;

}

@property (assign,nonatomic) NSRange replacementRange;                      //@synthesize replacementRange=_replacementRange - In the implementation block
@property (assign,nonatomic) unsigned long long caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (assign,nonatomic) BOOL canExtendRange;                           //@synthesize canExtendRange=_canExtendRange - In the implementation block
-(BOOL)canExtendRange;
-(void)setCanExtendRange:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReplacementRange:(NSRange)arg1 ;
-(NSRange)replacementRange;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(unsigned long long)caretPosition;
@end

