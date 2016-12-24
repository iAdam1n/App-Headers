/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBQuicksilverGameInfo;

@interface FBInstantGameListGameItem : FBValueObject <NSCopying> {

	NSArray* _tags;
	NSArray* _socialLines;
	FBQuicksilverGameInfo* _gameInfo;

}

@property (nonatomic,copy,readonly) NSArray * tags;                                //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSArray * socialLines;                         //@synthesize socialLines=_socialLines - In the implementation block
@property (nonatomic,copy,readonly) FBQuicksilverGameInfo * gameInfo;              //@synthesize gameInfo=_gameInfo - In the implementation block
-(id)initWithTags:(id)arg1 socialLines:(id)arg2 gameInfo:(id)arg3 ;
-(NSArray *)socialLines;
-(NSArray *)tags;
-(FBQuicksilverGameInfo *)gameInfo;
@end
