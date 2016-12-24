/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MNBusinessButtonLoggingData : FBValueObject <NSCopying> {

	NSString* _buttonType;
	NSString* _fbID;
	NSString* _targetID;
	NSString* _pageID;
	NSString* _bubbleType;
	NSString* _messageID;
	NSString* _actionOpenType;
	NSString* _clickSource;
	NSDictionary* _extensibleAttributes;

}

@property (nonatomic,copy,readonly) NSString * buttonType;                            //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbID;                                  //@synthesize fbID=_fbID - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetID;                              //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                                //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bubbleType;                            //@synthesize bubbleType=_bubbleType - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionOpenType;                        //@synthesize actionOpenType=_actionOpenType - In the implementation block
@property (nonatomic,copy,readonly) NSString * clickSource;                           //@synthesize clickSource=_clickSource - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extensibleAttributes;              //@synthesize extensibleAttributes=_extensibleAttributes - In the implementation block
-(id)initWithButtonType:(id)arg1 fbID:(id)arg2 targetID:(id)arg3 pageID:(id)arg4 bubbleType:(id)arg5 messageID:(id)arg6 actionOpenType:(id)arg7 clickSource:(id)arg8 extensibleAttributes:(id)arg9 ;
-(NSString *)actionOpenType;
-(NSDictionary *)extensibleAttributes;
-(NSString *)fbID;
-(NSString *)clickSource;
-(NSString *)buttonType;
-(NSString *)targetID;
-(NSString *)pageID;
-(NSString *)bubbleType;
-(NSString *)messageID;
@end
