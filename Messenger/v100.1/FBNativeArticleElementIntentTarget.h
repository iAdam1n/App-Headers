/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBNativeArticleElementIntentTarget : FBIntentTarget {

	BOOL _animated;
	NSString* _elementID;
	unsigned long long _position;

}

@property (nonatomic,copy,readonly) NSString * elementID;                //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,readonly) BOOL animated;                            //@synthesize animated=_animated - In the implementation block
@property (nonatomic,readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
+(id)elementTargetWithID:(id)arg1 position:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)initWithElementID:(id)arg1 position:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)position;
-(BOOL)animated;
-(NSString *)elementID;
@end
