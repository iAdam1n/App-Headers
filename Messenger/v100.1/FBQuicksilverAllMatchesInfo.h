/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfo, NSArray;

@interface FBQuicksilverAllMatchesInfo : FBValueObject <NSCopying> {

	FBQuicksilverPlayerInfo* _viewerPlayerInfo;
	NSArray* _existingMatchups;
	NSArray* _suggestedMatchups;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfo * viewerPlayerInfo;              //@synthesize viewerPlayerInfo=_viewerPlayerInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * existingMatchups;                              //@synthesize existingMatchups=_existingMatchups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedMatchups;                             //@synthesize suggestedMatchups=_suggestedMatchups - In the implementation block
-(FBQuicksilverPlayerInfo *)viewerPlayerInfo;
-(NSArray *)existingMatchups;
-(NSArray *)suggestedMatchups;
-(id)initWithViewerPlayerInfo:(id)arg1 existingMatchups:(id)arg2 suggestedMatchups:(id)arg3 ;
@end
