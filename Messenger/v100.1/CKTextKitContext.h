/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSLayoutManager, NSTextStorage, NSTextContainer;

@interface CKTextKitContext : NSObject {

	mutex _textKitMutex;
	NSLayoutManager* _layoutManager;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;

}
-(void)performBlockWithLockedTextKitComponents:(/*^block*/id)arg1 ;
-(id)initWithAttributedString:(id)arg1 lineBreakMode:(long long)arg2 maximumNumberOfLines:(unsigned long long)arg3 constrainedSize:(CGSize)arg4 layoutManagerFactory:(/*function pointer*/void*)arg5 ;
@end
