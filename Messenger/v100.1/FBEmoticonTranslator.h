/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSRegularExpression;

@interface FBEmoticonTranslator : NSObject {

	NSDictionary* _emoticonByStringMap;
	NSRegularExpression* _emoticonRegexMatchingEnd;
	NSRegularExpression* _emoticonRegexNotMatchingEnd;

}
-(id)translateEmoticons:(id)arg1 matchDocumentEnd:(BOOL)arg2 ;
-(unsigned long long)_translateOnce:(id)arg1 matchDocumentEnd:(BOOL)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
@end
