/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBQuicksilverNewMatchupInfo : FBValueObject <NSCopying> {

	BOOL _hasPlayed;
	NSString* _threadId;
	NSString* _matchupName;
	NSString* _firstLine;
	NSString* _secondLine;
	NSArray* _participants;

}

@property (nonatomic,copy,readonly) NSString * threadId;                 //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchupName;              //@synthesize matchupName=_matchupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstLine;                //@synthesize firstLine=_firstLine - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondLine;               //@synthesize secondLine=_secondLine - In the implementation block
@property (nonatomic,copy,readonly) NSArray * participants;              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayed;                           //@synthesize hasPlayed=_hasPlayed - In the implementation block
-(NSString *)matchupName;
-(BOOL)hasPlayed;
-(id)initWithThreadId:(id)arg1 matchupName:(id)arg2 firstLine:(id)arg3 secondLine:(id)arg4 participants:(id)arg5 hasPlayed:(BOOL)arg6 ;
-(NSString *)secondLine;
-(NSArray *)participants;
-(NSString *)firstLine;
-(NSString *)threadId;
@end
