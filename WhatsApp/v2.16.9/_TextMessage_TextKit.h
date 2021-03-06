/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/TextMessage.h>

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface _TextMessage_TextKit : TextMessage {

	CGSize _maxTextContainerSize;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	NSTextStorage* _textStorage;

}
+(id)textFormatter;
-(void)setNeedsRedraw;
-(CGRect)boundingRectWithSize:(CGSize)arg1 lastLineRect:(CGRect*)arg2 ;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 lastLineRect:(CGRect*)arg3 ;
-(void)enableDataDetection:(BOOL)arg1 onQueue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateAttributesForTextBlock:(id)arg1 ;
-(void)prepareTextStorageIfNeeded;
-(id)textStorageFromCurrentText;
-(void)markTextStorage:(id)arg1 usingTextBlocks:(id)arg2 ;
-(void)setAttributesOnTextStorage:(id)arg1 forTextBlock:(id)arg2 ;
-(id)initWithText:(id)arg1 ;
@end

